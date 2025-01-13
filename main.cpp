#include <iostream>
#include <memory>
#include <vector>
#include "./Shared/DataStructureExampleRunnable.h"
#include "./Big_O_Notation/big_o_notation_example.h"
#include "./Binary_Tree/binary_tree_example.h"
#include "./AVL_Tree/avl_tree_example.h"


void runDataStructures(std::vector<std::unique_ptr<DSA::DataStructureExampleRunnable>> &runnables) {
    std::cout<<"Entry Point of running all Data Structure examples"<<std::endl;
    for (auto &runnable : runnables) {
        runnable->runImplementationExample();
    }
}


int main() {
    std::cout << "| WELCOME TO DATA STRUCTURE IMPLEMENTATION USING C++ |" << std::endl;

    std::vector<std::unique_ptr<DSA::DataStructureExampleRunnable>> runnables;

    // 1. Big O Notation
    // runnables.push_back(std::make_unique<DSA::Big_O_Notation_Example>());
    // 2. Binary Tree
    // runnables.push_back(std::make_unique<DSA::Binary_Tree_Example>());
    runnables.push_back(std::make_unique<DSA::AVL_Tree_Example>());
    runDataStructures(runnables);

    return 0;
}