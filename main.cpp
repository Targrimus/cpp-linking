#include <iostream>
#include "Point.h"

POINTAPI std::ostream& operator<<(std::ostream& , const Point&);

int main(int argc, char const *argv[])
{
    Point p(10, 2);

    std::cout << p << std::endl;

    p.setX(15)->setY(12);
    std::cout << p << std::endl;
    /* code */
    return 0;
}
