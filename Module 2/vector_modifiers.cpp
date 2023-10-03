// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     //  For assig value one vector to another vactor do like this 
//     // vector <int> (v) = {1,2,3,4,5};
//     // vector <int> v2;
//     // v2 = v;

//     // for (int i = 0; i < v2.size(); i++)
//     // {
//     //     // cout << v[i]<< " ";
//     //     cout << v2[i]<< " ";
//     // }
//     // cout << endl << v2.size() ;
//     // cout << endl << v.size() ;


//     // Push back new value on vector 
    
//     // before push 
//     vector <int> (v) = {1,2,3,4,5};

//     // for (int i = 0; i < v.size(); i++)
//     // {
//     //     cout << v[i]<< " ";
//     // }
//     // cout<< endl << v.size()<< endl;
//     // after push 
//     v.push_back(6);
//     v.push_back(7);
//     v.push_back(8);
//     v.push_back(9);
//     v.push_back(10);

//     // for (int i = 0; i < v.size(); i++)
//     // {
//     //     cout << v[i]<< " ";
//     // }
//     // cout<< endl << v.size() << endl;

//     // // Use Pop back on the vector 
//     // v.pop_back();
//     // v.pop_back();
//     // v.pop_back();
//     // v.pop_back();
//     // v.pop_back();

//     // for (int i = 0; i < v.size(); i++)
//     // {
//     //     cout << v[i]<< " ";
//     // }
//     // cout<< endl << v.size() << endl;

//     // // Use inser on same vector

//     // v.insert(v.end(),5, 10);
//     // for (int i = 0; i < v.size(); i++)
//     // {
//     //     cout << v[i]<< " ";
//     // }
//     // cout<< endl << v.size() << endl;
    
//     // // Erase 5 element on this vector 
    
//     // v.erase(v.begin(), v.begin()+5);
//     // for (int i = 0; i < v.size(); i++)
//     // {
//     //     cout << v[i]<< " ";
//     // }
//     // cout<< endl << v.size()<< endl;

//     // // Repalce the value form the vector whith this 
//     // replace(v.begin(), v.end(), 10, 99); 
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i]<< " ";
//     }
//     cout<< endl << v.size()<< endl;

//     // Find the numebr 

//     auto it = find(v.begin(), v.end(), 100);
//     if (it == v.end()) cout << "Not Found the given number\n";
//     else cout << "Found the number " << *it << endl;


    
//     return 0;
// }