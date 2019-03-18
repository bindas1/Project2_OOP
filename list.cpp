//
//  list.cpp
//  Projekt_2_Bartlomiej_Binda
//
//  Created by Bartłomiej Binda on 12/03/2019.
//  Copyright © 2019 Bartłomiej Binda. All rights reserved.
//

#include "list.hpp"

void list::addNode(Punkt p){
    node *temp = new node;
    check_alloc(temp);
    temp->pnt = p;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
        tail = temp;
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

void list::removeNode(int number){
    node *temp = head;
    node *tobedeleted;
    int num = 1;
    if(number == 0){
        head = head->next;
        delete temp;
    }
    else {
        while (temp != NULL && num != number) { /* when num equals number temp->next is our node to delete */
            num += 1;
            temp = temp->next;
        }
        if (num == number && temp!=NULL) {
            tobedeleted = temp->next;
            temp->next = temp->next->next;
            delete tobedeleted;
        }
        else
            cout << "Number bigger than the size of list! Try with smaller number" << endl;

    }
}

node * list::gethead() const{
    return this->head;
}

node * list::gettail() const{
    return this->tail;
}

//destructor
list::list(node* phead){
    head = phead;
    tail = phead;
};

list::~list(){
    node *temp;
    while(head!=NULL){
        temp=head;
        head=head->next;
        delete temp;
    }
}

//operators

list list::operator+(const list & l) const{
    list sumList = list();
    node * temp1;
    temp1 = this->gethead();
    while(temp1 != NULL){
        sumList.addNode(temp1->pnt);
        temp1=temp1->next;
    }
    temp1 = l.gethead();
    while(temp1 != NULL){
        sumList.addNode(temp1->pnt);
        temp1=temp1->next;
    }
    return sumList;
}

list & list::operator+=(list l) {
    this->tail->next = l.gethead();
    return *this;
}

//friends
/*
std::ostream & operator <<( std::ostream & os, const Punkt & p )
{
    node *temp;
    temp = head;
    while(temp!=NULL){
        return os << temp->pnt << endl;
        temp=temp->next;
    }
}*/
// commited ???

void check_alloc(node *pointer){
    if(pointer==NULL)
        throw "Space not allocated!";
}
