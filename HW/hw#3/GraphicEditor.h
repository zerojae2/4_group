#pragma once
#include <vector>
#include "Shape.h"

class GraphicEditor {
    vector<Shape*> v;
    vector<Shape*>::iterator it;
public:
    GraphicEditor() {
        cout << "�׷��� �������Դϴ�.\n";
        start();
    }
    void start();
};
