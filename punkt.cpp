//
//  punkt.cpp
//  Projekt_2_Bartlomiej_Binda
//
//  Created by Bartłomiej Binda on 12/03/2019.
//  Copyright © 2019 Bartłomiej Binda. All rights reserved.
//

#include "punkt.hpp"
#include <iostream>

Punkt::Punkt() : x(0), y(0), z(0) {
}

Punkt::Punkt(double xc, double yc, double zc) : x(xc), y(yc), z(zc) {
}

Punkt::~Punkt() { 
    std::cout << "Bye!" << this->x << std::endl;
}


Punkt Punkt::operator+(Punkt p) { 
    //return {this->x + p.x, this->y + p.y, this->z + p.z};
    return Punkt(this->x + p.x, this->y + p.y, this->z + p.z);
}

Punkt& Punkt::operator+=(Punkt p) {
    this->x += p.x;
    this->y += p.y;
    this->z += p.z;
    return *this;
}

Punkt Punkt::operator-(Punkt p) { 
    return {this->x - p.x, this->y - p.y, this->z - p.z};
}

Punkt& Punkt::operator-=(Punkt p) {
    this->x -= p.x;
    this->y -= p.y;
    this->z -= p.z;
    return *this;;
}

bool Punkt::operator==(const Punkt &p) {
    if (this->x == p.x && this->y==p.y && this->z==p.z)
        return true;
    else
        return false;
}

bool Punkt::operator!=(const Punkt &p) { 
    return !(*this == p);
}

//methods
double Punkt::get_xc() {
    return this->x;
}

double Punkt::get_yc() { 
    return this->y;
}

double Punkt::get_zc() { 
    return this->z;
}



//friends
std::ostream & operator <<( std::ostream & os, const Punkt & p )
{
    return os << '<' << p.x << ',' << p.y << ',' << p.z << '>';
}
