#include <bits/stdc++.h>
using namespace std;

// function to display list1
void display(list<int> &lst){
    list<int> :: iterator it;
    for(it = lst.begin(); it!= lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
    list <int> list1; // list of 0 length
    // list<int> list2(7); //empty list of size 7
    list1.push_back(5);
    list1.push_back(8);
    list1.push_back(12);
    list1.push_back(19);
    list1.push_back(21);

   /* no need for this beacuse of list function
    list<int> :: iterator iter;
    iter = list1.begin();
    cout<<*iter<<" ";
    iter++;
    cout<<*iter<<" ";
    iter++;
    cout<<*iter<<" ";
    iter++;
    cout<<*iter<<" ";
    iter++;
    cout<<*iter<<" "; */
    display(list1);

    list<int> list2(3); //empty list of length 3
    list <int> :: iterator it = list2.begin();
    *it = 45;
    it++;
    *it = 6;
    it++;
    *it = 9;
    it++;
    display(list2);
    
    // pop_back() and pop_front()
    //  list1.pop_back();
    // display(list1);
    // list1.pop_front();
    // display(list1);

    // list1.remove(9);
    // display(list1);

    // display(list1);
    // list1.sort();
    // display(list1);


    return 0;
}