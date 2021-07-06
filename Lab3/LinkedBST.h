//
//  BinarySearchTree.h
//  Lab3
//
//  Created by Rajani Chulyadyo on 12/17/18.
//  Copyright © 2018 KU. All rights reserved.
//

#ifndef BinarySearchTree_h
#define BinarySearchTree_h

#include "AbstractBST.h"

struct Data {
    int key;
    int data;
};

struct Node {
    Data data;
    
    Node* leftChild;
    Node* rightChild;
};

class LinkedBinarySearchTree : public AbstractBST {
public:
    LinkedBinarySearchTree();
    ~LinkedBinarySearchTree();
    
    // Checks if the BST is empty
    bool isEmpty();
    void add(int key, int value);
    
    void max(int &output);
    void min(int &output);
    
    bool exists(int targetKey);
    
    void inorder();
    
private:
    Node* root;
    
    void add(Node* root, Node* newNode);
    void inorder(Node* node, char sep = ' ');
};
#endif /* BinarySearchTree_h */
