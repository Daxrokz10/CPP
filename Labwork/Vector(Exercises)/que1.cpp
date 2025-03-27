//Reverse a vector

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1 = {1,2,3,4,5};
    vector<int> v2;

    cout<<"Non reversed vector: ";
    for(int i = 0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }

    for(int i = v1.size()-1;i >= 0;i--){
        v2.push_back(v1[i]);
    }
    v1.clear();
    v1 = v2;

    cout<<"Reversed vector: ";
    for(int i = 0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    return 0;
}