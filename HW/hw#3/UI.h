#include <vector>

#pragma once
class UI {
public:
    static int seleteMenu() {
        int n;
        cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
        cin >> n;
        return n;
    }
    static int seleteShape() {
        int n;
        cout << "��:1, ��:2, �簢��:3 >> ";
        cin >> n;
        return n;
    }
    static int seleteDelIndex() {
        int n;
        cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
        cin >> n;
        return n;
    }
    static void showAll(vector<Shape*>& v, vector<Shape*>::iterator& it) {
        int i = 0;
        for (it = v.begin(); it != v.end(); it++, i++) {
            cout << i << ": ";
            v.at(i)->paint();
        }
    }
};