//11430086王泳翔
#include <iostream>
#include <vector>
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

class Order{
    private:
        vector<MenuItem> items;
    public:
        void addItem(MenuItem item){
            items.push_back(item);
        }
        void showOrder(bool isStudent){
            float total = 0;
            cout<< "-------訂單明細-------" <<endl;
            for(int i=0; i<items.size(); i++){
                items[i].display();
                cout << endl;
                total += items[i].getPrice();
            }
            if(isStudent){
                total = total * 0.9;
            }
            cout << "總金額: $" << total << endl;
        }
};
int main() {
    cout << "=== 階段 2 測試：Vector 訂單與折扣邏輯 ===" << endl;

    Order myOrder;

    MenuItem item1("麥香魚", 45);
    MenuItem item2("大包薯條", 55);
    MenuItem item3("蘋果派", 35);


    myOrder.addItem(item1);
    myOrder.addItem(item2);
    myOrder.addItem(item3);

    myOrder.showOrder(true); 
    
    cout << "====================================\n" << endl;

    return 0;
}