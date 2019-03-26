//
//  main.cpp
//  cpp-practice
//
//  Created by Anil Kumar on 25/03/19.
//  Copyright © 2019 Anil Kumar. All rights reserved.
//

#include <iostream>
#include "lrucache.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    LRUCache mycache(2);
    mycache.set(2, 2);
    std::cout<<"\n Elem from mycache :"<<mycache.get(2)<<std::endl;
    std::cout<<"\n Elem from mycache :"<<mycache.get(1)<<std::endl;
    std::cout<<"\n---------------\n";
    mycache.set(1, 9);
    std::cout<<"\n Elem from mycache :"<<mycache.get(2)<<std::endl;
    std::cout<<"\n Elem from mycache :"<<mycache.get(1)<<std::endl;
    std::cout<<"\n---------------\n";
    mycache.set(1,7);
    mycache.set(2,3);
    mycache.set(2,6);
    std::cout<<"\n Elem from mycache :"<<mycache.get(2)<<std::endl;
    std::cout<<"\n Elem from mycache :"<<mycache.get(1)<<std::endl;
    return 0;
}
