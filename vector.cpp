 #include <bits/stdc++.h>
 using namespace std;
 void display(vector<int> &v){
   for(int i =0;i<v.size();i++){
   cout<<v[i]<<" ";
  }
cout<<endl;
}
 int main(){
   // ways to create a vector
    vector<int> vec1; // zero lenghth integer vector 
    vector<char> vec2;// 4-element character vector
    vector<int> vec3(6,5); // 6 element vector of 5s.
    display(vec3);
    int element,size;
    /*cout<<"size of vector"<<endl;
    cin>>size;
    for(int i =0;i<size;i++){
      cout<<"enter elements of vector : ";
      cin>>element;
      vec1.push_back(element);
    }
    display(vec1);
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter+1, 2, 500); 
      // iterator, no. of times, element
    display(vec1);*/
    return 0;
 }