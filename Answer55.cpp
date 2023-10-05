// It is the same structure but by using the in-built list STL data structures of C++

class Graph{
    int numVertices;
    list<int> *adjLists;
    
  public:
    Graph(int V);
    void addEdge(int src, int dest);
};