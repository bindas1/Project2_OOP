//
//  punkt.hpp
//  Projekt_2_Bartlomiej_Binda
//
//  Created by Bartłomiej Binda on 12/03/2019.
//  Copyright © 2019 Bartłomiej Binda. All rights reserved.
//

#ifndef punkt_hpp
#define punkt_hpp

#include <iostream>

class Punkt{
private:
    double x, y, z;
public:
    //constructors
    Punkt();
    Punkt(double xc, double yc, double zc);
    //destructor
    ~Punkt();
    //methods
    double get_xc();
    double get_yc();
    double get_zc();
    //operators
    Punkt operator+(Punkt p);
    Punkt& operator+=(Punkt p);
    Punkt operator-(Punkt p);
    Punkt& operator-=(Punkt p);
    bool operator==(const Punkt &p);
    bool operator!=(const Punkt &p);

    //friends
    friend std::ostream & operator <<( std::ostream & os, const Punkt & p );
};

#endif /* punkt_hpp */
