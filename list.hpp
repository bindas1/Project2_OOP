//
//  list.hpp
//  Projekt_2_Bartlomiej_Binda
//
//  Created by Bartłomiej Binda on 12/03/2019.
//  Copyright © 2019 Bartłomiej Binda. All rights reserved.
//

#ifndef list_hpp
#define list_hpp

#include <iostream>
#include "punkt.hpp"

struct node{
    Punkt pnt;
    node *next;
};

class list{
private:
    node *head;
    node *tail; //last piece of the list (implemented to save time)
public:
    list(){
        head=NULL;
        tail=NULL;
    }
    ~list();
    void addNode(Punkt p);
    void removeNode(int number);
    void displayList();
    
};

//helper function
void check_alloc(node *pointer);

#endif /* list_hpp */
