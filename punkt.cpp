//
//  punkt.cpp
//  Projekt_2_Bartlomiej_Binda
//
//  Created by Bartłomiej Binda on 12/03/2019.
//  Copyright © 2019 Bartłomiej Binda. All rights reserved.
//

#include "punkt.hpp"

Punkt::Punkt() {
    x = 0;
    y = 0;
    z = 0;
}

Punkt::Punkt(double xc, double yc, double zc) : x(xc), y(yc), z(zc) {
}

Punkt::~Punkt() {
}


Punkt Punkt::operator+(const Punkt & p) const {
    return {this->x + p.x, this->y + p.y, this->z + p.z};
    // return Punkt(this->x + p.x, this->y + p.y, this->z + p.z); it's the same :)
}

Punkt& Punkt::operator+=(Punkt p) {
    this->x += p.x;
    this->y += p.y;
    this->z += p.z;
    return *this;
}

Punkt Punkt::operator-(const Punkt & p) const {
    return {this->x - p.x, this->y - p.y, this->z - p.z};
}

Punkt& Punkt::operator-=(Punkt p) {
    this->x -= p.x;
    this->y -= p.y;
    this->z -= p.z;
    return *this;;
}

bool Punkt::operator==(const Punkt &p) const {
    return (this->x == p.x && this->y==p.y && this->z==p.z);
}

bool Punkt::operator!=(const Punkt &p) const {
    return !(*this == p);
}

//methods
double Punkt::get_xc() const{
    return this->x;
}

double Punkt::get_yc() const{
    return this->y;
}

double Punkt::get_zc() const{
    return this->z;
}

//friends
std::ostream & operator <<( std::ostream & os, const Punkt & p )
{
    os << "<" << p.x << "," << p.y << "," << p.z << ">";
    return os;
}
