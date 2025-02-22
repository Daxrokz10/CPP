#include <iostream>
using namespace std;

int main() {
    int arr[10];

    for (int i = 0; i < 5; i++) {
        cout<<"Enter The value for arr["<<i<<"]: ";
        cin>>arr[i];
    }
    cout << endl<<endl;

    for(int e : arr){
        cout<<e;
        cout<<endl;
    }

    return 0;
}