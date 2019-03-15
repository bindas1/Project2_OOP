//
//  main.cpp
//  Projekt_2_Bartlomiej_Binda
//
//  Created by Bartłomiej Binda on 12/03/2019.
//  Copyright © 2019 Bartłomiej Binda. All rights reserved.
//

#include <iostream>
#include "punkt.hpp"
#include "list.hpp"

int main(int argc, const char * argv[]) {
    Punkt a = Punkt(4, 5, 6);
    Punkt b{2,7,8};
    list l = list();
    l.addNode(a);
    l.addNode(b);
    l.displayList();
    return 0;
}
