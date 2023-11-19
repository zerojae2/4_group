#pragma once
class UI {
public:
    static int getMenu() {
        int key;
        cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >>";
        cin >> key;
        return key;
    }
    static int getShapeTypeToInsert() {
        int key;
        cout << "선:1, 원:2, 사각형:3 >>";
        cin >> key;
        return key;
    }
    static int getShapeIndexToDelete() {
        int key;
        cout << "삭제하고자 하는 도형의 인덱스 >>";
        cin >> key;
        return key;
    }
};