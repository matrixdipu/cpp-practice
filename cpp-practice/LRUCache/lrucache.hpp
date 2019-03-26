//
//  lrucache.hpp
//  cpp-practice
//
//  Created by Anil Kumar on 25/03/19.
//  Copyright © 2019 Anil Kumar. All rights reserved.
//

#ifndef lrucache_hpp
#define lrucache_hpp
#include "DLinkedList.hpp"
#include <map>

class LRUCache{
public:
    LRUCache(int x);
    int get(int x);
    void set(int x, int y);
    ~LRUCache();
    
private:
    int cacheSize;
    int capacity;
    DLinkedList *nodeList;
    std::map<int , Node* > nodeMap;
    
    LRUCache();
    
};

#endif /* lrucache_hpp */
