//11430086王泳翔
#include <iostream>
#include <vector>
#include <string>
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
class Drink: public MenuItem{
    private:
        string sugar;
    public:
        Drink(string ItemName, int ItemPrice, string sugar) : MenuItem(ItemName, ItemPrice)
        {
            this->sugar = sugar;
        }

        void display(void)
        {
            MenuItem::display();
            cout << " (" << sugar << ")";
        }

};
int main() {
    cout << "=== 階段 3 測試：類別繼承與特製屬性 ===" << endl;

    // 建立一個飲料物件
    // 珍珠奶茶繼承了 MenuItem 的名字與價格，並擁有自己專屬的 "半糖"
    Drink boba("珍珠奶茶", 60, "半糖");

    cout << "預期輸出 -> 珍珠奶茶 : $60 (半糖)" << endl;
    cout << "實際輸出 -> ";
    boba.display(); // 執行子類別覆寫後的 display
    cout << "\n====================================\n" << endl;

    return 0;
}
