//
// Created by albin on 28/06/2019.
//

#ifndef LAB_28_DEJUNIO_CIRCLE_H
#define LAB_28_DEJUNIO_CIRCLE_H

#include "Component.h"

class Circle: public Component {
private:
    int x;
    int y;
    int weight;
    int height;
public:
    Circle(int x, int y, int weight, int height): x{x}, y{y}, weight{weight}, height{height}{}

};


#endif //LAB_28_DEJUNIO_CIRCLE_H
