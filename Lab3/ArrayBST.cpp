//
//  ArrayBST.cpp
//  Lab3
//
//  Created by Rajani Chulyadyo on 4/5/20.
//  Copyright © 2020 KU. All rights reserved.
//

#include <iostream>

#include "ArrayBST.h"

ArrayBinarySearchTree::ArrayBinarySearchTree() {
    for (int i = 0; i < MAX_NUM_NODES; i++) {
        nodes[i] = NULL;
    }
}
ArrayBinarySearchTree::~ArrayBinarySearchTree() {}

bool ArrayBinarySearchTree::isEmpty() {
    return this->nodes[1] == NULL ;
}

void ArrayBinarySearchTree::add(int key, int value) {
    ArrayNode* newData(new ArrayNode(key, value));
    
    for (int i = 1; i < MAX_NUM_NODES; ) {
        ArrayNode* node = this->nodes[i];
        
        if (node == NULL) {
            this->nodes[i] = newData;
            break;
        } else if (node->key < key) {
            i = 2 * i + 1;
        } else {
            i = 2 * i;
        }
    }
    
}

bool ArrayBinarySearchTree::exists(int targetKey) {
    
    int i = 1;
    bool found = false;
    while (i < MAX_NUM_NODES) {
        ArrayNode* node = this->nodes[i];
        if (node == NULL) {
            break;
        } else if (node->key == targetKey) {
            found = true;
            break;
        } else if (node->key < targetKey) {
            i = 2 * i + 1;
        } else {
            i = 2 * i;
        }
    }
    return found;
}

void ArrayBinarySearchTree::min(int &output) {
    
    if (isEmpty()) {
        std::cout << "The tree is empty!" << std::endl;
    } else {
        int i = 1;
        while (i < MAX_NUM_NODES) {
            if (nodes[2 * i] == NULL) {
                break;
            } else {
                i = 2 * i;
            }
        }
        if (i < MAX_NUM_NODES) {
            output = nodes[i]->key;
        }
    }
}


void ArrayBinarySearchTree::max(int &output) {
    
    if (isEmpty()) {
        std::cout << "The tree is empty!" << std::endl;
    } else {
        int i = 1;
        while (i < MAX_NUM_NODES) {
            if (nodes[2 * i + 1] == NULL) {
                break;
            } else {
                i = 2 * i + 1;
            }
        }
        if (i < MAX_NUM_NODES) {
            output = nodes[i]->key;
        }
    }
}

void ArrayBinarySearchTree::inorder() {
    std::cout << "Inorder traversal yields " << std::endl;
    this->inorder(1);
    std::cout << std::endl;
}

void ArrayBinarySearchTree::inorder(int index, char sep) {
    if (index < MAX_NUM_NODES && nodes[index] != NULL) {
        this->inorder(2 * index);
        std::cout << nodes[index]->key << sep;
        this->inorder(2 * index + 1);
    }
}
