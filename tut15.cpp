#include <iostream>
using namespace std;
int main(){
    int a, b; 
    cin>>a>>b;
    for(int i= a; i<= b; i--){
    if(i > 9){
        if(i %2 ==0){
            cout<<"Even";
        }
        else{
            cout<<"odd";
        }
    }
    else if(i == 1){
        cout<<"one";
    }
    else if(i == 1){
        cout<<"two";
    }
    else if(i == 1){
        cout<<"three";
    }
    else if(i == 1){
        cout<<"four";
    }
    else if(i == 1){
        cout<<"five";
    }
    else if(i == 1){
        cout<<"six";
    }
    else if(i == 1){
        cout<<"seven";
    }
    else if(i == 1){
        cout<<"eight";
    }
    else if(i == 1){
        cout<<"nine";
    }
    cout<<"\n";
    }
    
    return 0; 
}