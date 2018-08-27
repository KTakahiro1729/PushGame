import push

var map = readStringMap("""
########
#.. P  #
#oo  # #
#      #
########""")
draw(map)
echo "start Game!"
while not map.checkBoxOnTarget():
  var input = getInput()
  updateGame(map, input)
  draw(map)
echo "clear!"