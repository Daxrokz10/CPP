#include <iostream>
using namespace std;

int main(){
    string username;

    cout<<"Enter Username : ";
    cin>>username; 
    
    if(username == "daksh"){
        cout<<"Welcome "<<username<<endl;
    }else{
        cout<<"Please Enter the correct credentials";
    }
}