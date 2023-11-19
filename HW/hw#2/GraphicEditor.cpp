#include <iostream>
#include "GraphicEditor.h"
#include "Circle.h"
#include "Rect.h"
#include "Line.h"
#include "UI.h"

void GraphicEditor::insertItem(int type) 
{
    Shape* p = NULL;
    switch (type) {
    case 1:
        p = new Line();
        break;
    case 2:
        p = new Circle();
        break;
    case 3:
        p = new Rectangle();
        break;
    default:
        break;
    }
    if (pStart == NULL) {
        pStart = p;
        pLast = p;
        return;
    }
    pLast->add(p);
    pLast = pLast->getNext();
}

void GraphicEditor::deleteItem(int index)
{
    Shape* pre = pStart;
    Shape* tmp = pStart;
    if (pStart == NULL) {
        cout << "������ �����ϴ�!" << endl;
        return;
    }
    for (int i = 1; i < index; i++) {
        pre = tmp;
        tmp = tmp->getNext();
    }
    if (tmp == pStart) {
        pStart = tmp->getNext();
        delete tmp;
    }
    else {
        pre->add(tmp->getNext());
        delete tmp;
    }
}

void GraphicEditor::show() 
{
    Shape* tmp = pStart;
    int i = 1;
    while (tmp != NULL) {
        cout << i++ << ": ";
        tmp->paint();
        tmp = tmp->getNext();
    }
}

void GraphicEditor::run() 
{
    cout << "�׷��� �������Դϴ�." << endl;
    int menu, index, type;
    while (true) {
        menu = UI::getMenu();
        switch (menu) {
        case 1:
            type = UI::getShapeTypeToInsert();
            insertItem(type);
            break;
        case 2:
            index = UI::getShapeIndexToDelete();
            deleteItem(index);
            break;
        case 3:
            show();
            break;
        default:
            return;
        }
    }
}