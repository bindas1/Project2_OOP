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

using std::cout;
using std::endl;

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
    list(node* phead);
    ~list();
    void addNode(Punkt p);
    void removeNode(int number);
    //void displayList();
    node * gethead() const ; // return the adress of head
    node * gettail() const ;
    //operators
    list operator+(const list & l) ;
    list & operator+=(list &l);
    Punkt operator[](int number) const;
    //friends
    friend std::ostream & operator <<( std::ostream & os, const list & l );
    
};

void setList(list &l2, int num);
void checkPoint(Punkt &a, Punkt &b);
void checkList(Punkt a, Punkt b);

//helper function
void check_alloc(node *pointer);

#endif /* list_hpp */
