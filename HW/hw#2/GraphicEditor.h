#pragma once
#include "Shape.h"

class GraphicEditor {
    Shape* pStart;
    Shape* pLast;
public:
    GraphicEditor() { pStart = pLast = NULL; }
    void insertItem(int type);
    void deleteItem(int index);
    void show();
    void run();
};
