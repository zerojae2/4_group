#pragma once

#include <iostream>
using namespace std;

class Shape {
    Shape* next;
protected:
    virtual void draw() = 0;
public:
    Shape() { next = NULL; }
    virtual ~Shape() {}
    Shape* add(Shape* p);
    void paint();
    Shape* getNext() { return next; }
};