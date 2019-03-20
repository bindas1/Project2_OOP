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
    if(number == 0 && head!=NULL){
        head = head->next;
        delete temp;
    }
    else {
        while (temp != NULL && num != number) { /* when num equals number temp->next is our node to delete */
            num += 1;
            temp = temp->next;
        }
        if (num == number && temp!=NULL && temp->next!=NULL) {
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
    while(head!=nullptr){
        temp = head;
        head=head->next;
        delete temp;
    }
}

//operators

list list::operator+(const list & l) {
    list sumList;
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

list & list::operator+=(list &l) {
    node *temp;
    temp = l.gethead();
    while(temp != NULL){
        this->addNode(temp->pnt);
        temp=temp->next;
    }
    return *this;
}

Punkt list::operator[](int number){
    node *temp = head;
    int num = 1;
    if(number == 0 && head!=NULL){
        return head->pnt;
    }
    else {
        while (temp != NULL && num != number) { /* when num equals number temp->next is our node to delete */
            num += 1;
            temp = temp->next;
        }
        if(head==NULL){
            cout << "List is empty" << endl;
            return Punkt();
        }
        else if (num == number && temp!=NULL && temp->next!=NULL)
            return temp->next->pnt;
        else
            cout << "Number bigger than the number of elements in the list! Try with a smaller number. The last element of the list is element number " << num-2 << ":" << endl;
        return tail->pnt;
    }
}

/*list list::operator=(list &l){
    this->head = l.head;
    this->tail = l.tail;
    return *this;
}
*/
//friends

std::ostream & operator <<( std::ostream & os, const list &l )
{
    node *temp;
    temp = l.head;
    while(temp!=NULL){
        os << temp->pnt << endl;
        temp=temp->next;
    }
    return os;
}

void check_alloc(node *pointer){
    if(pointer==NULL)
        throw "Space not allocated!";
}
