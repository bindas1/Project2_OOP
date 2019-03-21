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
    //check point operations on sample a and b points
    checkPoint(a, b);
    //operations on lists
    checkList(a, b);
    return 0;
}
