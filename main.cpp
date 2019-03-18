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
    Punkt a = Punkt(4, 5, 6);
    Punkt b{2,7,8};
    Punkt c{3,9,10};
    list l1 = list();
    list l2 = list();
    a+=b;
    l1.addNode(a);
    l1.addNode(b);
    c = a+b;
    l2.addNode(c);
    l1.displayList();
    l2.displayList();
    cout << "new" << endl;
    list suml = l1 + l2;
    suml.displayList();
    cout << "l1" << endl;
    l1.displayList();
    l2.displayList();
    cout << "new" << endl;
    l1 += l2;
    l1.displayList();
    return 0;
}
