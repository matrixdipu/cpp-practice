//
//  DLinkedList.hpp
//  cpp-practice
//
//  Created by Anil Kumar on 25/03/19.
//  Copyright © 2019 Anil Kumar. All rights reserved.
//

#ifndef DLinkedList_hpp
#define DLinkedList_hpp

#include <stdio.h>
#include "node.hpp"

class DLinkedList{
    Node *front, *rear;
    bool isEmpty(){
        return (rear == NULL);
    }
public:
    DLinkedList() : front(NULL), rear(NULL) {}
    Node * addNodeToHead(int key,int value);
    void moveNodeToHead(Node *);
    void removeRearNode();
    Node *getRearNode();
    ~DLinkedList(){}
};

#endif /* DLinkedList_hpp */
