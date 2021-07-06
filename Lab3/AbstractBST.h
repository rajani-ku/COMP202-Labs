//
//  AbstractBST.h
//  Labs
//
//  Created by Rajani Chulyadyo on 4/5/20.
//  Copyright © 2020 KU. All rights reserved.
//

#ifndef AbstractBST_h
#define AbstractBST_h


class AbstractBST {
public:
    // Checks if the BST is empty
    virtual bool isEmpty() = 0;
    virtual void add(int key, int value) = 0;
    virtual void max(int &output) = 0;
    virtual void min(int &output) = 0;
    virtual bool exists(int targetKey) = 0;
    
    virtual void inorder() = 0;
};
#endif /* AbstractBST_h */
