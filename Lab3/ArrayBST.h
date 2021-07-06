//
//  ArrayBST.h
//  Labs
//
//  Created by Rajani Chulyadyo on 4/5/20.
//  Copyright © 2020 KU. All rights reserved.
//

#ifndef ArrayBST_h
#define ArrayBST_h

#define MAX_NUM_NODES 128

#include "AbstractBST.h"

struct ArrayNode {
    int key;
    int value;
    
    ArrayNode(int key, int value) : key(key), value(value) {}
};

class ArrayBinarySearchTree : public AbstractBST {
public:
    ArrayBinarySearchTree();
    ~ArrayBinarySearchTree();
    
    // Checks if the BST is empty
    bool isEmpty();
    void add(int key, int value);
    
    void max(int &output);
    void min(int &output);
    
    bool exists(int targetKey);
    
    void inorder();
    
private:
    ArrayNode* nodes[MAX_NUM_NODES];
    
    void inorder(int index, char sep = ' ');
};

#endif /* ArrayBST_h */
