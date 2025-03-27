#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<int> v1(n);
    vector<int> v2;

    for(int i=0;i<v1.size();i++){
        cout<<"Enter v1["<<i<<"] : ";
        cin>>v1[i];
    }

    for(int i = 1;i<v1.size()-2;i++){
        if(v1[i] < v1[i-1] && v1[i]<v1[i+1]){
            v2.push_back(v1[i]);
        }
    }
    cout<<"Only printing the elements who's adjacent elements are larger than the element"<<endl;
    for(int elm : v2){
        cout<<elm<<" ";
    }
    return 0;
}