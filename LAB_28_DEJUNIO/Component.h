//
// Created by albin on 28/06/2019.
//

#ifndef LAB_28_DEJUNIO_COMPONENT_H
#define LAB_28_DEJUNIO_COMPONENT_H

#include "Event.h"
#include <functional>
class Component {
private:
    std::function<void(Event)> clickEvent;
    std::function<void(Event)> mouseMoveEvent;
public:
    Component();
    void Onclick(std::function<void(Event)>);
    void OnMouseMove(std::function<void(Event)>);
    void draw();

};


#endif //LAB_28_DEJUNIO_COMPONENT_H
