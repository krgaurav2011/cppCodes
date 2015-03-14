import java.io.*;
import java.util.*;
 
public class kosaraju {
 
    static int[] fiveLargestSCCs = {0, 0, 0, 0, 0};
    static int n = 875714;
    static int timer = 0;
    static boolean[] isExplored;
    static int[] markGraph = new int[n+1];
    static int countSCC;
    static Map<Integer,List<Integer>> adj = new HashMap<Integer,List<Integer>>();
    static Map<Integer,List<Integer>> revAdj = new HashMap<Integer,List<Integer>>();
 
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(new File("SCC.txt"));
        while (in.hasNext()) {
            String[] line = in.nextLine().split("\\s+");
            int startPoint = Integer.parseInt(line[0]);
            int endPoint = Integer.parseInt(line[1]);
            if (!adj.containsKey(startPoint)) adj.put(startPoint, new ArrayList<Integer>());
            adj.get(startPoint).add(endPoint);
            if (!revAdj.containsKey(endPoint)) revAdj.put(endPoint, new ArrayList<Integer>());
            revAdj.get(endPoint).add(startPoint);
        }
        in.close();
        isExplored = new boolean[n+1];
        for (int i = n; i >= 1; i--)
            if (!isExplored[i]) dfs(revAdj, i, 0);
        isExplored = new boolean[n+1];
        for (int i = n; i >= 1; i--)
            if (!isExplored[markGraph[i]]) {countSCC = 0; 
            dfs(adj, markGraph[i], 1);
            pushSCC(countSCC);
            }
        for (int i = 0; i <= 4; i++){
            if (i != 0) System.out.print(",");
            System.out.print(fiveLargestSCCs[i]);
        }
    }
 
    static void dfs(Map<Integer,List<Integer>> graph, int currentPoint, int typeOfProcess){
        // typeOfProcess = 0: dfs on the reversed graph; typeOfProcess = 1: dfs on the original graph.
        isExplored[currentPoint] = true;
        if (typeOfProcess == 1) countSCC++;
        if (graph.containsKey(currentPoint)) {
            Iterator<Integer> endPointIt = graph.get(currentPoint).iterator();
            while (endPointIt.hasNext()) {
                int endPoint = endPointIt.next();
                if (!isExplored[endPoint]) dfs(graph, endPoint, typeOfProcess);
            }
        }
        if (typeOfProcess == 0){
            timer++;
            markGraph[timer] = currentPoint;
        }
    }
 
    static void pushSCC(int scc){
        if (scc<=fiveLargestSCCs[4]) return;
        fiveLargestSCCs[4] = scc;
        for (int i = 3; i >= 0; i--) 
            if (fiveLargestSCCs[i]<fiveLargestSCCs[i+1])
            {
                int t = fiveLargestSCCs[i+1];
                fiveLargestSCCs[i+1] = fiveLargestSCCs[i];
                fiveLargestSCCs[i] = t;
            }
    }
 
}
