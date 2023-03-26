#ifndef POINT_HPP
#define POINT_HPP

#ifdef POINT_EXPORTS
  #define POINTAPI __declspec(dllexport)
#else
  #define POINTAPI __declspec(dllimport)
#endif


#include <iostream>


class POINTAPI Point
{
    double m_x;
    double m_y;

public:
    Point();
    Point(double,double);
    double getX() const;
    double getY() const;
    Point * setX(double);
    Point * setY(double);
    friend std::ostream& operator<<(std::ostream&, const Point &);
};

POINTAPI std::ostream& operator<<(std::ostream& os, const Point &p);

#endif


