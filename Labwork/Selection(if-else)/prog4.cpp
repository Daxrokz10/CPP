#include <iostream>
using namespace std;

int main(){
    string username;
    string password;

    cout<<"Enter Username : ";
    cin>>username; 
    cout<<"Enter Password : ";
    cin>>password;
    
    if(username == "daksh" && password == "9696"){
       cout<<"Welcome "<<username<<"!";
    }else{
        cout<<"Please Enter the correct credentials";
    }
}