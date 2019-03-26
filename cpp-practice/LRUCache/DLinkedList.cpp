//
//  DLinkedList.cpp
//  cpp-practice
//
//  Created by Anil Kumar on 25/03/19.
//  Copyright © 2019 Anil Kumar. All rights reserved.
//

#include "DLinkedList.hpp"

Node * DLinkedList::addNodeToHead(int k, int val){
    Node *node = new Node(k,val);
    
    if ((front == NULL) && (rear == NULL) ){
        front = node;
        rear = node;
    } else {
        node->next = front;
        front->prev = node;
        front = node;
    }
    
    return node;
}

void DLinkedList::moveNodeToHead(Node *node){
    if (front == node)
        return;
    
    if ( node == rear){
        rear = rear->prev;
        rear->next = NULL;
    } else {
        node->next->prev = node->prev;
        node->prev->next = node->next;
    }
    
    // Now Move node to front
    node->next = front;
    front->prev = node;
    node->prev = NULL;
    front=node;
}

Node * DLinkedList::getRearNode(){
    if (isEmpty())
        return NULL;
        
    return rear;
}

void DLinkedList::removeRearNode(){
    if (isEmpty())
        return;
    
    if ( front == rear){
        delete(front);
        front = NULL;
        rear = NULL;
    } else {
        Node *deleteit = rear;
        rear = rear->prev;
        delete deleteit;
        
    }
    
}
