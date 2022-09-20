#include <iostream> 
using namespace std;

int main(){
    int a= 10;
    float b= 10.999;

    cout<<"the value of a is"<<(float)a<<endl;
    cout<<"the value of b is"<<(int)b<<endl;
    int c= int (b);

    cout<<"the expression is"<<a+b;

    return 0;
}