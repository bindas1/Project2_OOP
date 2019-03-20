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
using std::cin;

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
    double get_xc() const;
    double get_yc() const;
    double get_zc() const;
    //operators
    Punkt operator+(const Punkt & p) const;
    Punkt & operator+=(Punkt p);
    Punkt operator-(const Punkt & p) const;
    Punkt & operator-=(Punkt p);
    bool operator==(const Punkt & p) const;
    bool operator!=(const Punkt & p) const;

    //friends
    friend std::ostream & operator <<( std::ostream & os, const Punkt & p );
};

#endif /* punkt_hpp */
