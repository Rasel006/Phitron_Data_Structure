#include<bits/stdc++.h>
using namespace std;
int main()

{

    map<string, int> mp; //Hashing 
    /*mp.insert({"Niloy Biswass", 7});
    mp.insert({"Shamin", 79});
    mp.insert({"Shakib Al Hasan", 75});
    mp.insert({"Piloy Biswass", 1});*/

    /*for(auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }*/
    // cout << mp["Shamin"] << endl;
    // cout << mp["Morsalin"] << endl; //Not available in map
    /*if(mp.count("Piloy Biswass"))
    {
        cout << "Available" << endl;
    }
    else 
    {
        cout << "Not Available" << endl;
    }*/
    

    //Another way to inser in map
    mp["Niloy"] = 10; // O(log N)
    mp["Hridiy"] = 0;
    mp["Tamin"] = 100;
    mp["Tahsin"] = 20;
    
    for(auto it = mp.begin(); it != mp.end(); it++) // NlogN
    {
        cout << it->first << " " << it->second << endl; //O(log N)
    }

    return 0;
}