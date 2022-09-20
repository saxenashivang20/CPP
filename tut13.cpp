#include <iostream>
using namespace std;

int main(){
   /* int a= 3; 
    int* b = &a;
    // & ---> (address of) operator
    cout<<&a<<endl;
    cout<<b<<endl;
    // * ---> (value at) dereference operator 
    cout<<*b<<endl;*/
    int marks[]={10,20,30,40};
    int* p= marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    //cout<<"the value of *p is "<<*p<<endl;
    //cout<<"the value of *p is "<<*(p+1)<<endl;
    //cout<<"the value of *p is "<<*(p+2)<<endl;
    //cout<<"the value of *p is "<<*(p+3)<<endl;
 return 0; 

}
