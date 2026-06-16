//11430086王泳翔
#include <iostream>
using namespace std;

class MenuItem {
    private:
        string name;
        int price;

    public:
        MenuItem(string n, int p) {
            this->name = n;
            if (p < 0) {
                this->price = 0;
            } else {
                this->price = p;
            }
        }

        void display() {
            cout << this->name << " : $" << this->price;
        }
        int getPrice() {
            return this->price;
        }
};
int main() {
    cout << "=== 階段 1 測試：基礎餐點與封裝防錯 ===" << endl;

    MenuItem burger("麥香魚", 45);
    cout << "預期輸出 -> 麥香魚 : $45" << endl;
    cout << "實際輸出 -> ";
    burger.display();
    cout << "\n\n";


    MenuItem errorItem("神祕招待券", -50);
    cout << "預期輸出 -> 神祕招待券 : $0 (觸發防錯)" << endl;
    cout << "實際輸出 -> ";
    errorItem.display();
    cout << "\n====================================\n" << endl;

    return 0;
}