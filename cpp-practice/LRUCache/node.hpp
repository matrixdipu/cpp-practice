//
//  node.hpp
//  cpp-practice
//
//  Created by Anil Kumar on 25/03/19.
//  Copyright © 2019 Anil Kumar. All rights reserved.
//

#ifndef node_hpp
#define node_hpp
#include <stdio.h>

class Node{
public:
    int key;
    int value;
    class Node *next;
    class Node *prev;
    
    Node(int key,int value):key(key),value(value),next(NULL),prev(NULL){}
    
private:
    Node();
    Node & operator=(Node const&);
    Node(Node const&);
    
};

#endif /* node_hpp */
