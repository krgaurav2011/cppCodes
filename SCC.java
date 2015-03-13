import java.io.File;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.LinkedList;
import java.util.Scanner;
import java.util.Stack;

/**
*
*@author Vikash VIK 
*/
public class SCC {
 static Stack<Integer> st = new Stack<Integer>();
 final static int node=9;//for more vertices reset this value
 static boolean visited[] = new boolean[node];
 static ArrayList<LinkedList<Integer>> ls = null;
 public static void main(String[] args)throws Exception {
  
   process();
 }
 public static void process()throws Exception  {
  
   ls = new ArrayList<LinkedList<Integer>>();
   for (int i = 0; i < visited.length; i++) {
    LinkedList<Integer> list = new LinkedList<Integer>();
    ls.add(list);
   }
   Scanner sc = new Scanner(new File("./SCC.txt"));
   while (sc.hasNextLine()) {
    String[] s = sc.nextLine().trim().split(" ");
    LinkedList<Integer> list = ls.get(Integer.parseInt(s[0].trim()) - 1);
    list.add(Integer.parseInt(s[1].trim()));
   }
   for (int i = 0; i < visited.length; i++) {
    if (visited[i] == false) {
     DFS(i + 1);
    }
   }
   for (int i = 0; i < visited.length; i++) {
    visited[i] = false;
   }
   ls = new ArrayList<LinkedList<Integer>>();
   for (int i = 0; i < visited.length; i++) {
    LinkedList<Integer> list = new LinkedList<Integer>();
    ls.add(list);
   }
   sc = new Scanner(new File("./in.txt"));
   while (sc.hasNextLine()) {
    String[] s = sc.nextLine().trim().split(" ");
    LinkedList<Integer> list = ls.get(Integer.parseInt(s[1].trim()) - 1);
    list.add(Integer.parseInt(s[0].trim()));
    
   }
   System.out.println("Strongly connected components are : ");
   while (st.empty() == false) {
    System.out.println();
    DFS1(st.pop());
   }
   
  
 }
 public static void DFS(int v)  {
  visited[v - 1] = true;
  LinkedList<Integer> list = ls.get(v - 1);
  while (!(list.isEmpty())) {
   int temp = list.removeFirst();
   
   if (visited[temp - 1] == false) {
    DFS(temp);
   }    
   
  }
  st.push(v);
 }

 public static void DFS1(int v)  {
  visited[v - 1] = true;
  System.out.print(v + "\t");
  st.remove(new Integer(v));
  LinkedList<Integer> list = ls.get(v - 1);
  while (!list.isEmpty()) {
   int temp = list.removeFirst();
   if (visited[temp - 1] == false) {
    DFS1(temp);
   }
  }
 }

}
