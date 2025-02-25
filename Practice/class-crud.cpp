#include<iostream>
using namespace std;

int main(){

    int size,index,element,temp=0;
    int arr[20];
    int choice;

    cout<<"Enter the size of the array: ";
    cin>>size;

    for(int i=0; i<size; i++)
    {
        cout<<"Enter element arr["<<i<<"] : ";
        cin>>arr[i];
    }
    
    do{
        cout<<"Enter 1 for View Elements: "<<endl;
        cout<<"Enter 2 for Insert Element: "<<endl;
        cout<<"Enter 3 for Update Element: "<<endl;
        cout<<"Enter 4 for Delete Element: "<<endl;
        cout<<"Enter 5 for Exit: "<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;


        cout<<endl;
        switch(choice)
        {
            case 1:
                cout<<"View All Elements"<<endl;
                for (int i = 0; i < size; i++)
                {
                    /* code */
                    cout<<"Element arr["<<i<<"] is: "<<arr[i]<<endl;
                }
                break;
            case 2:
                cout << "Insert Element" << endl;
                cout << "Enter the index where you want to insert the element: ";
                cin >> index;
                cout << "Enter the element you want to insert: ";
                cin >> element;
                
                for(int i=size;i>index;i--){
                    arr[i] = arr[i-1];
                }

                arr[index] = element;
                size++;
                    
                break;
            case 3:
                cout<<"Update an Element"<<endl;
                cout<<"Enter element to be updated: ";
                cin>>index;
                cout << "Enter the element you want to update: ";
                cin >> element;

                arr[index] = element;
                break;
            case 4:
                cout<<"Enter element to delete: ";
                cin>>index;
                
                for(int i=size-1;i>index;i--){
                    temp = arr[i];
                    arr[i-1] = temp;
                    
                }
                size-=1;
                break;
            case 5:
                cout<<endl<<"exit..."<<endl;
                break;
            default:
                cout<<"Wrong Choice.";
        }   
    }while(choice!=5);

    return 0;
}