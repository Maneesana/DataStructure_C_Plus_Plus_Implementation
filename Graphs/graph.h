#ifndef GRAPH_H
#define GRAPH_H
#include <unordered_map>
#include <list>
#include<iostream>

// Graph Implementation - Collection of Nodes and Edges
class Graph {
private:
    std::unordered_map<int,std::list<std::pair<int,int>>> ajacencyList ;


public:
    void addEdge(int a, int b, int weight, bool directed) {
        // a->b
        if (directed==1) {
            ajacencyList[a].push_back(std::pair<int,int>(b,weight));
        }else {
            ajacencyList[b].push_back(std::pair<int,int>(a,weight));
            ajacencyList[a].push_back(std::pair<int,int>(b,weight));
        }
    }
    void printGraph() {

        for (auto itr: ajacencyList) {

            std::cout<<itr.first<<" - "<<"{";
            for (auto it : itr.second) {
                std::cout<<"("<<it.first<<","<<it.second<<")";
            }
            std::cout<<"}"<<std::endl;
        }

    }



};




#endif //GRAPH_H
