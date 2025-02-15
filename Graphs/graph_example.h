#ifndef GRAPH_EXAMPLE_H
#define GRAPH_EXAMPLE_H
#include "../Shared/DataStructureExampleRunnable.h"
#include  "graph.h"
namespace DSA{
class Graph_Example : public DataStructureExampleRunnable
{
    void runImplementationExample() override{
              std::cout<<"Running Graph Example"<<std::endl;
              Graph directedGraph;
              std::cout<<"Directed Graph Example"<<std::endl;
              directedGraph.addEdge(0,1,3,true);
              directedGraph.addEdge(1,2,4,true);
              directedGraph.addEdge(1,5,6,true);
              directedGraph.addEdge(3,4,1,true);
              directedGraph.addEdge(4,5,2,true);
              directedGraph.addEdge(5,1,4,true);
              directedGraph.printGraph();
              std::cout<<"Undirected Graph Example"<<std::endl;
              Graph undirectedGraph;
              undirectedGraph.addEdge(0,1,3,false);
              undirectedGraph.addEdge(1,2,3,false);
              undirectedGraph.addEdge(3,4,3,false);
              undirectedGraph.addEdge(5,6,3,false);
              undirectedGraph.addEdge(7,8,3,false);
              undirectedGraph.addEdge(0,8,3,false);
              undirectedGraph.addEdge(1,7,3,false);
              undirectedGraph.printGraph();
    }

};

}



#endif //GRAPH_EXAMPLE_H