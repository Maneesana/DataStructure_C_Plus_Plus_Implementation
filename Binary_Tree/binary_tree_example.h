//
// Created by MEENECA MAIBAM on 09-01-2025.
//

#ifndef BINARY_TREE_EXAMPLE_H
#define BINARY_TREE_EXAMPLE_H
#include <iostream>
#include <ostream>

#include "../Shared/DataStructureExampleRunnable.h"

namespace DSA {
    class Binary_Tree_Example: public  DataStructureExampleRunnable{
        public:
        void runImplementationExample() override {
            std::cout << "binary_tree_example::runImplementationExample" << std::endl;
        }
    };

}
#endif //BINARY_TREE_EXAMPLE_H
