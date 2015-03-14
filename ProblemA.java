


import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;

/**
 * The file contains the adjacency list representation of a simple undirected graph. There are 200 vertices labeled 1 to
 * 200. The first column in the file represents the vertex label, and the particular row (other entries except the first
 * column) tells all the vertices that the vertex is adjacent to. So for example, the 6th row looks like :
 * "6 155 56 52 120 ......". This just means that the vertex with label 6 is adjacent to (i.e., shares an edge with) the
 * vertices with labels 155,56,52,120,......,etc
 * 
 * Your task is to code up and run the randomized contraction algorithm for the min cut problem and use it on the above
 * graph to compute the min cut. (HINT: Note that you'll have to figure out an implementation of edge contractions.
 * Initially, you might want to do this naively, creating a new graph from the old every time there's an edge
 * contraction. But you should also think about more efficient implementations.)
 * 
 * (WARNING: As per the video lectures, please make sure to run the algorithm many times with different random seeds,
 * and remember the smallest cut that you ever find.)
 * 
 * Write your numeric answer in the space provided. So e.g., if your answer is 5, just type 5 in the space provided.
 * 
 * @author Alexey Grigorev
 */
  class UndirectedGraph {
    private int n;
    private final Map<Integer, List<Integer>> adj;
    private final Random random = new Random();

    public UndirectedGraph(int n) {
        this.n = n;
        this.adj = createAdjacentList(n);
    }

    private static Map<Integer, List<Integer>> createAdjacentList(int n) {
        Map<Integer, List<Integer>> res = new LinkedHashMap<Integer, List<Integer>>();

        int i = 0;
        while (i < n) {
            res.put(i, new ArrayList<Integer>());
            i++;
        }

        return res;
    }

    /**
     * Copy constructor
     * @param copy
     */
    private UndirectedGraph(UndirectedGraph copy) {
        this.n = copy.n;
        this.adj = new LinkedHashMap<Integer, List<Integer>>();
        
        for (Entry<Integer, List<Integer>> entry : copy.adj.entrySet()) {
            adj.put(entry.getKey(), new ArrayList<Integer>(entry.getValue()));
        }
    }
    
    /**
     * @return deep copy of the graph
     */
    public UndirectedGraph copy() {
        return new UndirectedGraph(this);
    }

    public void contract(int v, int u) {
        List<Integer> newList = new ArrayList<Integer>();

        for (int fromFirst : adj.get(v)) {
            if (fromFirst != u) {
                newList.add(fromFirst);
            }
        }

        for (int fromSecond : adj.get(u)) {
            if (fromSecond != v) {
                newList.add(fromSecond);
            }
        }

        adj.remove(v);
        adj.remove(u);
        n--;

        // updating the graph so 'u' now will point to 'v'
        for (Entry<Integer, List<Integer>> entry : adj.entrySet()) {
            List<Integer> row = entry.getValue();
            for (int i = 0; i < row.size(); i++) {
                if (row.get(i).intValue() == u) {
                    row.set(i, v);
                }
            }
        }

        // and keeping only 'v'
        adj.put(v, newList);
    }

    /**
     * Adds a directed edge from vertex v to vertex u
     * 
     * @param v vertex from
     * @param u vertex to
     */
    public void addEdge(int v, int u) {
        adj.get(v).add(u);
    }

    /**
     * Gets list of vertices adjacent to vertex v - connected with v by edges
     * 
     * @param v vertex
     * @return all adjacent vertices of v
     */
    public Iterable<Integer> adjacentTo(int v) {
        if (!adj.containsKey(v)) {
            throw new IllegalArgumentException(v + " is already removed");
        }
        return adj.get(v);
    }

    /**
     * @return randomly selected available vertex
     */
    // TODO may be implemented more efficiently
    public Pair<Integer, Integer> randomEdge() {
        int[] available = new int[n];

        int j = 0;
        for (Entry<Integer, List<Integer>> entry : adj.entrySet()) {
            if (!entry.getValue().isEmpty()) {
                available[j] = entry.getKey();
                j++;
            }
        }

        int vertexU = available[random.nextInt(j)];
        List<Integer> edges = adj.get(vertexU);
        int vertexV = edges.get(random.nextInt(edges.size()));
        return Pair.of(vertexU, vertexV);
    }

    public Map<Integer, List<Integer>> adjacencyList() {
        return ImmutableMap.copyOf(adj);
    }
    
    public int getN() {
        return n;
    }
}
public class ProblemA  {

    private UndirectedGraph graph;
    private UndirectedGraph initialGraphCopy;
    private int best;

    @Override
    public void run() {
        graph = readGraph(200);
        initialGraphCopy = graph.copy();
        best = Integer.MAX_VALUE;

        int trials = 200;

        while (trials > 0) {
            iteration();
            graph = initialGraphCopy.copy();
            trials--;
        }

        out.println(best);
    }

    private void iteration() {
        while (graph.getN() > 2) {
            Pair<Integer, Integer> randomVertex = graph.randomEdge();
            graph.contract(randomVertex.getLeft(), randomVertex.getRight());
        }

        Map<Integer, List<Integer>> adjacencyList = graph.adjacencyList();

        Iterator<Entry<Integer, List<Integer>>> iterator = adjacencyList.entrySet().iterator();
        List<Integer> first = iterator.next().getValue();
        List<Integer> second = iterator.next().getValue();
        assertEquals(first.size(), second.size());

        if (best > first.size()) {
            best = first.size();
        }
    }

    public UndirectedGraph readGraph(int n) {
        UndirectedGraph graph = new UndirectedGraph(n);

        for (int i = 0; i < n; i++) {
            String nextLine = scanner.nextLine();
            int[] line = Utils.parseIntArray(nextLine.split("\\s+"));

            int v = line[0];

            for (int j = 1; j < line.length; j++) {
                int u = line[j];
                graph.addEdge(v - 1, u - 1);
            }
        }

        return graph;
    }

}
