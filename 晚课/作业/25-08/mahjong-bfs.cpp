/* still faulty :(
  input
5 4
XXXXX
X   X
XXX X
 XXX
2 3 5 3
1 3 4 4
2 3 3 4
0 0 0 0
  output
4
3
0
  There are lots of reasons of why I do not work on this problem:
  - wrong abbr of the question
  - the exchange of x/y coords
  - the very weird `plus-one` border
  - the very weird bug that bfs somehow lets two points whose `pre` points to each other so that it became a loop, causing the get_path() to stack overflow, originated from bfs search where somehow lets present pos have access to fin pos and then keep going to search without tagging visited with true
  - (mentioned above) the fin pos is 'X', causing a lot of other bugs
  - the wrong understanding of `segments`, thinking that it is steps but turns out to be linked with turns
  The chaos combination of problems forcing me to give up this question, because if not so I would have lost my mind.
*/