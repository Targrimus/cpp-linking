#include <iostream>
#include "Point.h"

POINTAPI Point::Point(): m_x(0), m_y(0){
}

POINTAPI Point::Point(double val_x=0, double val_y=0): m_x(val_x), m_y(val_y){
}

POINTAPI double Point::getX() const{
    return this->m_x;
}

POINTAPI double Point::getY() const{
    return this->m_y;
}

POINTAPI Point * Point::setX(double val){
    this->m_x = val;
    return this;
}

POINTAPI Point * Point::setY(double val){
    this->m_y = val;
    return this;
}

POINTAPI std::ostream& operator<<(std::ostream& os, const Point &p){
    os << "Point: (" << p.getX() << "," << p.getY() << ")" << std::endl;
    return os;
}