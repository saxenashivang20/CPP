#include <iostream>
using namespace std;

int main() {
    int marks[]={10,20,30,40};
    marks[2]=50;
    //cout<<marks[0]<<endl;
    //cout<<marks[1]<<endl;
    //cout<<marks[2]<<endl;
    //cout<<marks[3]<<endl;

    for (int i= 0; i<4; i++)
    {
        cout<<marks[i]<<endl;
    }

    return 0;
}