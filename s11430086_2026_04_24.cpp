//11430086 王泳翔
#include<iostream>
using namespace std;
void sort(double x,double y);
void sort2(double x,double y);
double fun(double x,double y);
double fun_1(double x,double y);
double fun_2(double x,double y);
int main(){
    double x,y;
    cin>> x>>y;
    if(x>=y)return 0;
    // double temp_1 = x;
    // double temp_2 = x;
    // double temp_3 = x;
    sort(x,y);
    cout<< "\n";
    sort2(x,y);
    cout<< "\n";
    cout<< fun(x,y)<< "\n";
    cout<< fun_1(x,y)<< "\n";
    cout<< fun_2(x,y);
}
void sort(double x, double y){
    if(x>y)return;
    cout<<x<<" ";
    x=x+1;
    sort(x,y); 
}
void sort2(double x,double y){
    if(y<x)return;
    cout<<y<<" ";
    y=y-1;
    sort2(x, y);
}
double fun(double x,double y){
    if(y==0) return 1;
    double result;
    result = x* fun(x,y-1);
    return result;
}
double fun_1(double x,double y){
    return  (x*x*5)+(y*y)-10;
};

double fun_2(double x,double y){
    double n;
    cin>> n;
    double fact =1;
    for(double i =1; i<=y; i++){
        fact = fact * i;
    }
    double result = n*(x/fact);
    return 1-result;
}