//
//  list.cpp
//  Projekt_2_Bartlomiej_Binda
//
//  Created by Bartłomiej Binda on 12/03/2019.
//  Copyright © 2019 Bartłomiej Binda. All rights reserved.
//

#include "list.hpp"
using std::cout;
using std::endl;

void list::addNode(Punkt p){
    node *temp = new node;
    check_alloc(temp);
    temp->pnt = p;
    temp->next = NULL;
    if(head==NULL){
        head = temp;
        tail = temp;
        temp = NULL;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
}

void list::displayList(){
    node *temp;
    temp = head;
    while(temp!=NULL){
        cout << temp->pnt << endl;
        temp=temp->next;
    }
}

void removeNode(int number){
    node *temp;
    int num;
}

//destructor
list::~list(){
    node *temp;
    while(head!=NULL){
        temp=head;
        head=head->next;
        delete head;
    }
}

void check_alloc(node *pointer){
    if(pointer==NULL)
        throw "Space not allocated!";
}
