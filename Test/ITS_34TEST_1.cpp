#include<iostream>
#include <iomanip>
using namespace std;
void Boy(float height);
void Girl(float height);
int main(){
    float height;
    int sex;
 while(cin >> height >> sex){

        if(sex == 1){
            Boy(height);
        }
        else if(sex == 2){
            Girl(height);
        }

        cout << endl; 
    }
    return 0;
}
void Boy(float height){
    float result = ( height-80 )*0.7;
    cout << fixed << setprecision(1) <<result;
}
void Girl(float height){
    float result= ( height-70 )*0.6;
    cout << fixed << setprecision(1) <<result;
}