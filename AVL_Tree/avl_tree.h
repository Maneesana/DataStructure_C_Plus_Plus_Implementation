#ifndef AVL_TREE_H
#define AVL_TREE_H
#include <iostream>
#include <ostream>
#include <algorithm>

// AVLTree - Self-balancing tree
template<typename T>
class AVLTree {
private:

    class AVLNode {
    public:
        T value;
        AVLNode* leftChild;
        AVLNode* rightChild;
        int height;
        AVLNode(T value) : value(value), leftChild(nullptr), rightChild(nullptr) {}
    };
    AVLNode* root=nullptr;

    AVLNode* insert(AVLNode* root,T value) {
        if (root == nullptr) {
            return new AVLNode(value);
        }
        if (value < root->value) {
            root->leftChild=insert(root->leftChild, value);
        }else{
            root->rightChild=insert(root->rightChild, value);
        }
        setHeight(root);

        return balance(root);


    }
    void setHeight(AVLNode* node) {
        node->height=std::max(this->height(node->leftChild),this->height(node->rightChild))+1;
    }
    void tranverseInOrder(AVLNode* node) {
        if (node == nullptr) {
            return ;
        }
        std::cout<<node->value<<"(h="<<node->height<<")"<<" "<<std::endl;
        tranverseInOrder(node->leftChild);
        tranverseInOrder(node->rightChild);
    }
    AVLNode* balance(AVLNode* node) {
        // 10 - (-2)
        //  30 - (1)
        // 20
        if (isLeftHeavy(node)) {
            if (balanceFactor(node->leftChild) < 0) {
                node->leftChild=rotateLeft(node->leftChild);
            }
            return rotateRight(node);

        }else if (isRightHeavy(node)) {
            if (balanceFactor(node->rightChild) > 0) {
                node->rightChild=rotateRight(node->rightChild);
            }
            return rotateLeft(node);
        }
        return node;

    }
    int height(AVLNode* node) {
        return node == nullptr ? -1 : node->height;
    }

    bool isRightHeavy(AVLNode* node) {
        return balanceFactor(node) < -1;
    }

    bool isLeftHeavy(AVLNode* node) {
        return balanceFactor(node) >1;
    }
    int balanceFactor(AVLNode* node) {
        return node==nullptr ? 0 : height(node->leftChild) - height(node->rightChild);
    }

    AVLNode* rotateRight(AVLNode* node) {
        auto newRoot= node->leftChild;
        node->leftChild= newRoot->rightChild;
        newRoot->rightChild= node;
        setHeight(node);
        setHeight(newRoot);
        return newRoot;
     }
    AVLNode* rotateLeft(AVLNode* node) {
        auto newRoot = node->rightChild;
        node->rightChild = newRoot->leftChild;
        newRoot->leftChild = node;
        setHeight(node);
        setHeight(newRoot);
        return newRoot;
    }

public:
    AVLTree() {
        std::cout << "AVL Tree" << std::endl;
    }
    void insert(T value) {
        this->root=this->insert(this->root, value);
    }


    void traverseInOrder() {
        // root->left->right
        std::cout<<"|----- Traversing Tree ---------|"<<std::endl;
        tranverseInOrder(this->root);

        std::cout<<"\n|---------------------------------|"<<std::endl;

    }

};


#endif //AVL_TREE_H
