//
//  main.cpp
//  Projekt_2_Bartlomiej_Binda
//
//  Created by Bartłomiej Binda on 12/03/2019.
//  Copyright © 2019 Bartłomiej Binda. All rights reserved.
//

#include "punkt.hpp"
#include "list.hpp"

int main(int argc, const char * argv[]) {
    //operations on points
    cout << "Set two new points a and b. (and check << for points)" << endl;
    Punkt a = Punkt(4, 5, 6);
    cout << "Point a: " << a << endl;
    Punkt b = Punkt(2,7,8);
    cout << "Point b: " << b << endl;
    cout << "a + b = " << a+b << endl;
    a+=b;
    cout << "a+=b " << endl << "a = " << a << endl;
    cout << "a-b = " << a-b << endl;
    b-=a;
    cout << "b-=a " << endl << "b = " << b << endl << endl;
    bool c = (a==b);
    cout << "check a==b " << c << endl;
    c = (a!=b);
    cout << "check a!=b " << c << endl;
    
    //operations on lists
    int num;
    cout << "Now let's conduct operations on lists! " << endl << "Create two lists l1 (containing points a and b) and l2 which number of elements You may choose yourself" << endl;
    list l1 = list();
    list l2 = list();
    l1.addNode(a);
    l1.addNode(b);
    
    cout << "l1:" << endl;
    cout << l1 << endl;

    cout << "Give me the number of points in list l2: " ;
    cin >> num;
    for(int i = 0; i<num; i++){
        double x, y, z;
        cout << "Element " << i << ":" << endl;
        cout << "Give me x coor " << endl;
        cin >> x;
        cout << "Give me y coor " << endl;
        cin >> y;
        cout << "Give me z coor " << endl;
        cin >> z;
        l2.addNode(Punkt(x,y,z));
    }
    cout << "l2:" << endl;
    cout << l2 << endl;
    cout << "Please type a number of element (counting from 0) that you want to remove from l2 " << endl;
    cin >> num;
    l2.removeNode(num);
    cout << "New l2: " << endl << l2 << endl;
    cout << "l1 + l2: " << endl << l1+l2 << endl;
    
    cout << "l1:" << endl;
    cout << l1 << endl;
    cout << "l2:" << endl;
    cout << l2 << endl;
    
    l1+=l2;
    cout << "l1+=l2" << endl;
    cout << "l1: " << endl << l1 << endl;
    
    cout << "Operator l1[1] " << endl << l1[1] << endl;
    cout << "Warning for too big number: " << endl << l1[6] << endl;
    return 0;
}
