Algorithms 
// Containers 
// Functions
// Iterators


// Pairs 
void explainpair(){
    pair<int,int> p = {1,3};

    cout<< p.first <<" "<<p.second;
            //1              3
    pair<int, pair<int,int>> p ={1,{3,4}};

    cout<< p.first <<" "<<p.second.second << " "<<p.second.first;
           // 1             4                        3
    pair<int,int> arr[] = {{1,2}, {2,5}, {5,1}};
                //  index    0      1      2 
    cout<<arr[1].second;
                //  5    
}


// Vector 


void explainvector(){

        vector<int> v;

        v.push_back(1); // creates [1]
        v.emplace_back(2); // work same as push_back but its better than Push_back

        vector<pair<int,int>>vec;

        v.push_back({1,2}); //{1,2}
        v.emplace_back(1,2); // same as push_back

        vector<int> v(5,100);  // [100,100,100,100,100]

        vector<int>v(5); // [0,0,0,0,0]

        vector<int> v1(5,20);
        vector<int> v2(v1); // copying v1

        vector<int>::iterator it = v.begin(); // creates a vector which stores in memory 
        
        it++;
        cout<<*(it) <<" ";

        it = it +2;
        cout<<*(it) <<" ";

        vector<int>:: iterator it = v.end(); //{10,20,30} here v.end() does not points to 30 it points something after 30 in memory. it will only point 30 if we use it--. 
        v.back() // {10,20,30} here v.back points to 30
        

        for(vector<int>::iterator it =v,begin(); it! =v.end();it++){
                cout<< *(it)<<" ";
        }

        for( auto it = v.begin(); it! =v.end();it++){ // here auto automatically refers it to vector
                cout<<it<<" ";
        }

        for( auto it:v){ // for each loop 
                cout<< it<<" ";
        }

        // {10,20,12,23}
        v.erase(v.begin()+1); // +1 means 20 it will be deleted rest will ne return 

        // {10,20,12,23,35}
        v.erase(v.begin()+2, v.begin()+4);// {10,20,35} [start,end] // +2 (12) and +4 (35) are deleted and rest are printed.

        // Insert function

        vector<int>v(2,100); // {100,100}
        v.insert(v.begin(),300); // {300,100,100};
        v.insert(v.begin() +1,2,10);// {300,10,10,100,100}

        vector<int>(v.begin(), copy.begin(), copy.end()); // {50,50,300,10,10,100,100}

        // {10,20}
        cout<<v.size(); //2 

        //{10,20}
        v.pop_back(); // {10}

        // v1 -> {10,20}
        // v2 -> {30,40}
        v1.swap(v2); // v1 -> {30,40} , v2-> {10,20}

        v.clear(); // erases the entire vector

        cout<<v.empty();

}


// List 

void explainList(){
        list<int> ls;

        ls.push_back(2); //{2}
        ls.emplace_back(4); //{2,4}

        ls.push_front(5); //{5,2,4};

        ls.emplace_front(); {2,4};  

        // rest functions same as vector 
        // begin, end, rbegin, rend, clear, insert, size, swap
}


// Stack 
// LIFO
// complexity of all operations are O(1) constant

void explainStack(){
        stack<int> st;
        st.push(1); // {1}
        st.push(2); // {2,1}
        st.push(3); // {3,2,1}
        st.push(3); // {3,3,2,1}
        st.emplace(5); // {5,3,3,2,1}

        cout<<st.top(); //prints 5 

        st.pop(); //st looks like {3,3,2,1}

        cout<< st.top(); //3

        cout<< st.size(); // 4

        cout<< st.empty(); 

        stack<int>st1. st2;
        st1.swap(st2);
}


// Queue 
//FIFO
// complexity of all operations are O(1) constant

void explainQueue(){
        queue<int> q;
        q.push(1); // {1}
        q.push(2); // {1,2}
        q.emplace (4); // {1,2,4}

        q.back() += 5

        cout<<q.back(); // prints 9 

        // Q is {1,2,9}
        cout<< q.front(); // prints 1

        q.pop(); //{2,9}

        cout<<q.front(); // prints 2

        // size swap empty same as stack 
}


void explain(){
        priority_queue<int>pq;

        pq.push(5); //{5}
        pq.push(2); //{5,2}
        pq.push(8); //{8,5,2}
        pq.emplace(10); //{10,8,5,2}

        cout<<pq.top(); // prints 10 

        pq.top(); // {8,5,2}

        cout<< pq.top(); // prints 8 

        // size swap empty function same as others 

        // minimum heap 
        priority_queue<int, vector<int>, greater<int>> pq;
        pq.push(5); //{5}
        pq.push(2); //{2,5}
        pq.push(8); //{2,5,8}
        pq.emplace(10); // {2,5,8,10}

        cout<<pq.top(); // prints 2 
}

// Set 
// sorted and unique

void explainset(){
        set<int>st;
        st.insert(1);// {1}
        st.emplace(2); //{1,2}
        st.insert(2); //{1,2}
        st.insert(4); //{1,2,4}
        st.insert(3); //{1,2,3,4}

        // functionality of insert in vector
        // can be used also, that only increases 
        // efficiency
        
        // begin, end, rbegin, rend, clear, insert, size, swap

        //{1,2,3,4,5}
        auto it = st.find(3); // it returns an iterator refers to 3

        auto it = st.find(6); // it returns iterator st.end() 

        //{1,4,5}
        st.erase(5); // erase 5 // 
}



//  Uset 

void  explainUset(){
        unordered set<int> st;
        // unique, not sorted 
        // lower_bound and upper_bound function does not work, rest all functions are same
        // as above it does not stores any particular order it has better complexity 
        // than set in most cases, except some when collision happens  
}




