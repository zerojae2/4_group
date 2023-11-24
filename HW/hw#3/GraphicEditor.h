#pragma once
#include <vector>
#include "Shape.h"

class GraphicEditor {
    vector<Shape*> v;
    vector<Shape*>::iterator it;
public:
    GraphicEditor() {
        cout << "그래픽 에디터입니다.\n";
        start();
    }
    void start();
};
