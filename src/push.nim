import tables, algorithm, strutils

type
  InputAction = enum
    moveUp
    moveDown
    moveLeft
    moveRight
    quitGame
    invalid
  Direct = enum
    up
    down
    left
    right
    immobile
  DestinStatus = enum
    Empty
    HitWall
    HitBox
  Pos = tuple[x, y: int]
  Player* = ref object
    pos* : Pos
  Box* = ref object
    pos* : Pos
  BoxTarget* = ref object
    pos* : Pos
  Map*[width, height, nBox : static[int]] = object
    player* : Player 
    boxes* : array[nBox, Box]
    boxTargets* : array[nBox, BoxTarget]


const directDiffTable = toTable[Direct, tuple[x, y: int]](
  {
    up:   (0, -1),
    down: (0,  1),
    left: (-1, 0),
    right:( 1, 0),
    immobile: (0, 0),
})
proc nthCoord(n, width, height: int): Pos =
  result.x = n mod width
  result.y = n div width


proc `+`(pos0, pos1: Pos) :Pos =
  (pos0.x + pos1.x, pos0.y + pos1.y)

proc `$`(box:Box):string = $ box.pos

proc newMap*[width, height, nBox]() : Map[width, height, nBox] =
  if width * height < nBox + 1:
    raise newException(ValueError, "Map is too small")
  var 
    player : Player = new(Player)
    boxes : array[nBox, Box]
    boxTargets: array[nBox, BoxTarget]
  player.pos = 0.nthCoord(width, height)
  for iBox in 0..<nBox:
    boxes[iBox] = new(Box)
    boxTargets[iBox] = new(BoxTarget)
    boxes[iBox].pos = (iBox + 1).nthCoord(width, height)
    boxTargets[iBox].pos = (iBox + 1).nthCoord(width, height)
  result = Map[width, height, nBox](
    player: player, 
    boxes: boxes, 
    boxTargets: boxTargets)

proc getIBoxAt(map: Map, pos: Pos): int =
  ##[ when box in pos, result.iBox == (index to box) else, iBox == -1
  ]##
  for iBox, box in map.boxes:
    if box.pos == pos:
      return iBox
  return -1

proc getDestinStatus(map: Map, destin: Pos): 
    tuple[ds: DestinStatus, iBox: int] =
  ##[ when box in destin, result.iBox == (index to box) else, iBox == -1
  ]##
  # check wall
  let cw = proc (value, size:int):bool = 0 <= value and value < size
  if not (destin.x.cw(map.width) and destin.y.cw(map.height)):
    return (HitWall, -1)
  
  # check box
  let iBox = map.getIBoxAt(destin)
  if iBox == -1:
    return (Empty, -1)
  return (HitBox, iBox)
  

proc movePlayer*(map: Map, direct: Direct) = 
  let destin = map.player.pos + directDiffTable[direct]
  let destinStatus = map.getDestinStatus(destin)
  case destinStatus.ds:
    of Empty:
      map.player.pos = destin
    of HitWall:
      discard
    of HitBox:
      let box = map.boxes[destinStatus.iBox]
      let boxDestin = box.pos + directDiffTable[direct]
      let boxDestinStatus = map.getDestinStatus(boxDestin)
      case boxDestinStatus.ds:
        of Empty:
          map.player.pos = destin
          box.pos = boxDestin
        of HitWall, HitBox:
          discard

proc checkBoxOnTarget*(map: Map): bool =
  for boxTarget in map.boxTargets:
    if not (map.getIBoxAt(boxTarget.pos) >= 0):
      return false
  return true



proc getVisualMap(map: Map): string =
  var visualMap : array[map.height, array[map.width, char]]
  for iX in 0..<map.width:
    for iY in 0..<map.height:
      visualMap[iY][iX] = ' '

  # draw boxtargets
  for boxTarget in map.boxTargets:
    visualMap[boxTarget.pos.y][boxTarget.pos.x] = '.'

  # draw player
  let (pX, pY) = map.player.pos
  case visualMap[pY][pX]:
    of ' ', 'o':
      visualMap[pY][pX] = 'P' 
    of '.':
      visualMap[pY][pX] = 'R'
    else:
      discard
  # draw boxes
  for box in map.boxes:
    let (bX, bY) = box.pos
    case visualMap[bY][bX]:
      of ' ', 'o', 'p':
        visualMap[bY][bX] = 'o' 
      of '.':
        visualMap[bY][bX] = '@'
      else:
        discard

  
  result = ""
  let hBorder = '#'.repeat(map.width + 2)
  # draw border
  result &= hBorder & "\n"
  for iY in 0..<map.height:
    result &= "#" & visualMap[iY].join() & "#\n"
  result &= hBorder

proc getInput* (): InputAction =
  let input = readLine(stdin)
  echo "input is ", input 
  case input:
    of "w":
      result = moveUp
    of "s":
      result = moveDown
    of "a":
      result = moveLeft
    of "d":
      result = moveRight
    of "q":
      result = quitGame
    else:
      result = invalid
      
    
proc updateGame* (map: Map, inputAction: InputAction) =
  case inputAction:
    of moveUp:
      map.movePlayer(up)
    of moveDown:
      map.movePlayer(down)
    of moveLeft:
      map.movePlayer(left)
    of moveRight:
      map.movePlayer(right)
    of quitGame:
      quit()
    of invalid:
      discard

proc draw*(map: Map) =
  echo map.getVisualMap()



when isMainModule:
  block:
    var mp = newMap[6, 3, 2]()
    doAssert mp.nBox == 2
    doAssert mp.boxes.len == 2
    doAssert mp.boxTargets.len == 2
  block:
    var mp = newMap[6,3,2]()
    doAssert mp.player.pos == (0,0)
  block:
    var mp = newMap[6,3,2]()
    doAssert mp.getDestinStatus((1,0)) == (HitBox, 0)
    doAssert mp.getDestinStatus((2,0)) == (HitBox, 1)
  block:
    var mp = newMap[6,3,2]()
    mp.boxes[1].pos = (0,1)
    mp.movePlayer(down)
    doAssert mp.player.pos == (0,1)
    doAssert mp.boxes[1].pos == (0,2)
    mp.movePlayer(down)
    doAssert mp.player.pos == (0,1)
    doAssert mp.boxes[1].pos == (0,2)
  block:
    var mp = newMap[5,2,2]()
    doAssert mp.checkBoxOnTarget()
    mp.boxes[0].pos = (0,1)
    doAssert (not mp.checkBoxOnTarget())
    mp.boxes[0].pos = (2,0)
    mp.boxes[1].pos = (1,0)
    doAssert mp.checkBoxOnTarget()
  block:
    var mp = newMap[2,3,2]()
    doAssert mp.getVisualMap() == """####
    #P@#
    #@ #
    #  #
    ####""".unindent()