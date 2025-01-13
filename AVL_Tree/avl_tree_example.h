
#ifndef AVL_TREE_EXAMPLE_H
#define AVL_TREE_EXAMPLE_H
#include <iostream>
#include <ostream>
#include "avl_tree.h"
#include "../Shared/DataStructureExampleRunnable.h"

namespace DSA {
    class AVL_Tree_Example: public  DataStructureExampleRunnable{
        void runImplementationExample() override {
            auto avlTree = AVLTree<int>();
            avlTree.insert(10);
            avlTree.insert(20);
            avlTree.insert(19);
            avlTree.insert(25);
            avlTree.insert(28);
            avlTree.insert(28);
            avlTree.insert(8);
            avlTree.traverseInOrder();

        }

    public:
    };

}
#endif //AVL_TREE_EXAMPLE_H
