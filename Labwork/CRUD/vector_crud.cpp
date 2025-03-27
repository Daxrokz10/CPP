#include<iostream>
#include<vector>
using namespace std;

class VectorCrud{
    public:
        vector<int> v1;

    void viewElement(){
        for(int i=0;i<v1.size();i++){
            cout<<"v1["<<i<<"] : "<<v1[i]<<endl;
        }
    }
    void insertElement(){
        int numElements;
        int element;
        cout<<"Enter number of elements to be inserted: ";
        cin>>numElements;
        for(int i=0;i<numElements;i++){
            cout<<"Enter new element "<<i<<" :";
            cin>>element;
            v1.push_back(element);
        }
        
    }
    void updateElement(int index,int element){
        if(index >= 0 && index < v1.size()){
            v1[index] = element;
        }else{
            cout<<"invalid index";
        }
    }
    void deleteElement(int index){
        v1.erase(v1.begin() + index);
    }
};

int main()
{
    VectorCrud vec;
    int element,index,choice;

    do{

        cout << "=============================" << endl;
        cout << "         CRUD MENU           " << endl;
        cout << "=============================" << endl;
        cout << "1. View Elements" << endl;
        cout << "2. Insert Element" << endl;
        cout << "3. Update Element" << endl;
        cout << "4. Delete Element" << endl;
        cout << "0. Exit" << endl;
        cout << "=============================" << endl;
        cout << "Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                vec.viewElement();
                break;
            case 2:
                vec.insertElement();
                break;
            case 3:
                cout<<"Enter index of element to update: ";
                cin>>index;
                cout<<"Enter new element: ";
                cin>>element;
                vec.updateElement(index,element);
                break;
            case 4:
                cout<<"Enter index of element to delete: ";
                cin>>index;
                vec.deleteElement(index);
                break;
            case 0:
                break;
            default:
                cout<<"Invalid choice"<<endl;
                break;
        }
    }while(choice != 0);

    return 0;
}