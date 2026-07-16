package org.sssihl.solution;
/** Write a Java program to find the shortest path for a bot in a 2D grid.

  * 0 - Open path
  * 1 - Blockage (cannot pass)
  * 2 - Goal (destination)

  * The bot starts at a given coordinate and must reach the goal using only up, down, left, right moves. The program should print the sequence of coordinates that form the shortest path. If no path exists, display "No path found".*/

/**Example Input 1:
  * Size : 5x5
  * Start: 0,0
  * Goal : 1x4
  * The program autogenerates this 2D array based on the specifications given

  *  0 0 1 0 0
  *  1 0 1 0 2
  *  0 0 0 0 1
  *  0 1 1 0 0
  *  0 0 0 0 0

  *  output: [(0,0), (0,1), (1,1), (2,1), (2,2), (2,3), (1,3), (1,4)]
  */

/** Example Input 2:
 *  Size : 4x4
 *  Start: 2x0
 *  Goal : 0,3
 * 
 * The program autogenerates this 2D array based on the specifications given
 * 
 * 0 1 0 2
 * 0 1 0 1
 * 0 0 0 1
 * 1 1 0 0
 * 
 * output: [(2,0), (2,1), (2,2), (1,2), (0,2), (0,3)]
 * */

/**
 * Compile : javac org/sssihl/Main.java org/sssihl/solution/Solution.java org/sssihl/generator/AutoGenerator*.java
 * Run     : java org.sssihl.Main 
 */

public class Solution {
    public static int REGNUMBER = 124407;

    /**
     * return an array of paths.
     * [[1, 2], [2, 2]]
     */
    public int[][] run (int[] start, int[] end, int[][] grid) {
      int[][] res = {
            {0, 0},
            {0, 1},
            {1, 1},
            {2, 1},
            {2, 2}
      };

      // BEGIN CODE

      // END CODE

      return res;
    }
}