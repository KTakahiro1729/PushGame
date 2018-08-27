import push2

var map = newMap(6,3,2)
map.player.pos = (4,0)
map.boxes[0].pos = (0,1)
map.boxes[1].pos = (1,1)
map.boxTargets[1].pos = (0,0)
draw(map)
echo "start Game!"
while not map.checkBoxOnTarget():
  var input = getInput()
  updateGame(map, input)
  draw(map)
echo "clear!"