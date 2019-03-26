//
//  lrucache.cpp
//  cpp-practice
//
//  Created by Anil Kumar on 25/03/19.
//  Copyright © 2019 Anil Kumar. All rights reserved.
//

#include "lrucache.hpp"

LRUCache::LRUCache(int x){
    capacity = x;
    cacheSize = 0;
    
    nodeList = new DLinkedList();
    nodeMap = std::map<int,Node *>();
}

LRUCache::~LRUCache(){
    std::map<int, Node*>::iterator iter;
    
    for (iter = nodeMap.begin();iter!=nodeMap.end();iter++){
        delete iter->second;
    }
    
    delete (nodeList);
    capacity = 0;
    cacheSize = 0;
}

int LRUCache::get(int x){
    if ( nodeMap.find(x) == nodeMap.end())
        return -1;
    
    int val = nodeMap[x]->value;
    
    nodeList->moveNodeToHead(nodeMap[x]);
    
    return val;
    
}

void LRUCache::set(int key, int value){
    //if elem is already in the cache
    if (nodeMap.find(key) != nodeMap.end()){
        nodeMap[key]->value = value;
        nodeList->moveNodeToHead(nodeMap[key]);
    }
    
    if ( cacheSize == capacity){
        //get rear key
        int rearKey = nodeList->getRearNode()->key;
        nodeMap.erase(rearKey);
        
        nodeList->removeRearNode();
        cacheSize--;
        
    }
    
    
    Node *elem = nodeList->addNodeToHead(key, value);
    nodeMap[key] = elem;
    cacheSize++;
}
