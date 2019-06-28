//
// Created by albin on 28/06/2019.
//

#ifndef LAB_28_DEJUNIO_WINDOW_H
#define LAB_28_DEJUNIO_WINDOW_H
#include <vector>
#include "Component.h"

class Window {
private:
    std::vector<*Component> controls;
public:
    Window();
    void setStatus();
    void notify();
    void addComponent(Component *comp);
    void removeComponent(Component *comp):

};


#endif //LAB_28_DEJUNIO_WINDOW_H
