package org.sssihl.solution;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

java.util.*;
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
    public static int REGNUMBER = 234219;

    /**
     * return an array of paths.
     * [[1, 2], [2, 2]]
     */
    static class Node{
       /*int[] cordinates= {};
       list<Node> Children= new linkedlist<>();*/
       int x,y;
       //Node n, p;
       List<int[]> path;
    }
    Node(int x, int y, List<int[]> path){
      this.x = x;
      this.y = y;
      this.path = new ArrayList<>(path);
      this.path.add(new int[]{x,y});
    } 

    /*public void InsertLast(int x, int y)
    {
      Node n = new Node(x,y);
      Node t = this;
      while(t.n != null)
      {
        t = t.n;
        t.n = n;
        n.p = t;
      }
    }

    public void print()
    {
      Node t = this;
      while(t != null)
      {
        System.out.println("("+t.x+","+t.y+")");
        t = t.n;
      }
    }

    public Node DeleteFirst()
    {
      Node t = this;
      t = t.n;
      if(t != null)
        t.p = null;
      return t; 
    }*/

    public List<int[]> run (int[] start, int[] end, int[][] grid) {
      /*int[][] res = {
            {0, 0},
            {0, 1},
            {1, 1},
            {2, 1},
            {2, 2}
      };*/
      //Node head = new Node(start[0], start[1]);
      // BEGIN CODE
      int m = grid.length;
      int n = gird[0].length;

      int[][] DIR = {{0,1},{1,0},{0,-1},{-1,0}};//right, down, left, up
      boolean[][] visited = new boolean[m][n];
      Queue<Node> queue = new LinkedList<>();

      queue.offer(new Node(start[0], start[1], new ArrayList<>()));
      visited[start[0]][start[1]] = true;
      
      while(!queue.isEmpty()){
        Node curr = queue.poll();

        //goal reached
        if(grid[curr.x][curr.y]==2){
          return curr.path;
        }

        //Explore all the directons 
        for(int[] d : DIR){
          int nx = curr.x + d[0];
          int ny = curr.y + d[1];

          if(nx >=0 && nx < m && ny < n && !visited[nx][ny] && grid[nx][ny] !=1)
              visited[nx][ny] = true;
              queue.offer(new Node(nx, ny, curr.path));
        }
      }

      return new ArrayList<>();

      public static void printPath(List<int[]> path){
        if(path.isEmpty()){
          System.out.println("No path");
          return;
        }
        System.out.println("Output: [");
        for(int i =0; i < path.size(); i++){
          int[] p = path.get(i);
          System.out.println("(" + p[0] + "," + p[1] + ")");
          if(i != path.size() -1) System.out.print(",");
        }
        System.out.println("]");
      }
      
      // END CODE

      //return res;
    }
}
