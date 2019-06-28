//
// Created by albin on 28/06/2019.
//

#ifndef LAB_28_DEJUNIO_RECTANGE_H
#define LAB_28_DEJUNIO_RECTANGE_H

#include "Component.h"
class Rectange: public Component {
private:
    int x;
    int y;
    int weight;
    int height;
public:
    Rectange(int x, int y, int weight, int height): x{x}, y{y}, weight{weight}, height{height}{}


};


#endif //LAB_28_DEJUNIO_RECTANGE_H
