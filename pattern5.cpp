#include <iostream>
using namespace std;

int main(){
    //FLOYD TRIANGLE 
    int rows;
    cin>>rows;

    int count = 1;
    for(int i = 1; i<= rows; ++i ){
        for( int j = 1; j<=1; ++j ){
            cout<<count<<"  ";
            count++;
        }
        cout<<endl;
    }
    return 0; 
}