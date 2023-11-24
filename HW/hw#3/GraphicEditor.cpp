#include <iostream>
#include "GraphicEditor.h"
#include "Circle.h"
#include "Rect.h"
#include "Line.h"
#include "UI.h"
using namespace std;

void GraphicEditor:: start() 
{
    while (true) {
        int n;
        n = UI::seleteMenu();
        switch (n) {
        case 1:
            n = UI::seleteShape();
            switch (n) {
            case 1:
                v.push_back(new Line());
                break;
            case 2:
                v.push_back(new Circle());
                break;
            case 3:
                v.push_back(new Rect());
                break;
            default:
                cout << "잘못 선택하셨습니다.\n";
                break;
            }
            break;
        case 2: {
            n = UI::seleteDelIndex();
            if (n >= v.size() || n < 0) {
                cout << "없는 인덱스 입니다.\n";
                break;
            }
            it = v.begin();
            Shape* tmp = *(it + n);
            v.erase(it + n);
            delete tmp;
            break;
        }
        case 3:
            UI::showAll(v, it);
            break;
        case 4:
            return;
        default:
            cout << "잘못 입력하셨습니다.\n";
            break;
        }
    }
}