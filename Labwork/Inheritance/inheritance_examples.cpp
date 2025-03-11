#include <iostream>
using namespace std;

// Single Inheritance
class Parent {
    public:
        int pid;
        string parent_name;

        void setParent() {
            cout << "Enter pid: ";
            cin >> pid;
            cout << "Enter parent name: ";
            cin >> parent_name;
        }

        void getParent() {
            cout << "Parent id is: " << pid << endl;
            cout << "Parent name is: " << parent_name << endl;
        }
};

class Child : public Parent {
    public:
        int cid;
        string child_name;

        void setChild() {
            cout << "Enter cid: ";
            cin >> cid;
            cout << "Enter child name: ";
            cin >> child_name;
        }

        void getChild() {
            cout << "Child id is: " << cid << endl;
            cout << "Child name is: " << child_name << endl;
        }
};

// Multiple Inheritance
class Father {
    public:
        string father_name;

        void setFather() {
            cout << "Enter father name: ";
            cin >> father_name;
        }

        void getFather() {
            cout << "Father name is: " << father_name << endl;
        }
};

class Mother {
    public:
        string mother_name;

        void setMother() {
            cout << "Enter mother name: ";
            cin >> mother_name;
        }

        void getMother() {
            cout << "Mother name is: " << mother_name << endl;
        }
};

class ChildMultiple : public Father, public Mother {
    public:
        string child_name;

        void setChild() {
            cout << "Enter child name: ";
            cin >> child_name;
        }

        void getChild() {
            cout << "Child name is: " << child_name << endl;
        }
};

// Multilevel Inheritance
class GrandChild : public Child {
    public:
        int gcid;
        string grandchild_name;

        void setGrandChild() {
            cout << "Enter gcid: ";
            cin >> gcid;
            cout << "Enter grandchild name: ";
            cin >> grandchild_name;
        }

        void getGrandChild() {
            cout << "Grandchild id is: " << gcid << endl;
            cout << "Grandchild name is: " << grandchild_name << endl;
        }
};

// Hierarchical Inheritance
class Sibling : public Parent {
    public:
        int sid;
        string sibling_name;

        void setSibling() {
            cout << "Enter sid: ";
            cin >> sid;
            cout << "Enter sibling name: ";
            cin >> sibling_name;
        }

        void getSibling() {
            cout << "Sibling id is: " << sid << endl;
            cout << "Sibling name is: " << sibling_name << endl;
        }
};

// Hybrid Inheritance
class HybridChild : public Father, public Parent {
    public:
        int hcid;
        string hybrid_child_name;

        void setHybridChild() {
            cout << "Enter hcid: ";
            cin >> hcid;
            cout << "Enter hybrid child name: ";
            cin >> hybrid_child_name;
        }

        void getHybridChild() {
            cout << "Hybrid child id is: " << hcid << endl;
            cout << "Hybrid child name is: " << hybrid_child_name << endl;
        }
};

int main() {
    // Single Inheritance
    cout << "Single Inheritance:" << endl;
    Child c1;
    c1.setParent();
    c1.setChild();
    c1.getParent();
    c1.getChild();
    cout << endl;

    // Multiple Inheritance
    cout << "Multiple Inheritance:" << endl;
    ChildMultiple cm1;
    cm1.setFather();
    cm1.setMother();
    cm1.setChild();
    cm1.getFather();
    cm1.getMother();
    cm1.getChild();
    cout << endl;

    // Multilevel Inheritance
    cout << "Multilevel Inheritance:" << endl;
    GrandChild gc1;
    gc1.setParent();
    gc1.setChild();
    gc1.setGrandChild();
    gc1.getParent();
    gc1.getChild();
    gc1.getGrandChild();
    cout << endl;

    // Hierarchical Inheritance
    cout << "Hierarchical Inheritance:" << endl;
    Sibling s1;
    s1.setParent();
    s1.setSibling();
    s1.getParent();
    s1.getSibling();
    cout << endl;

    // Hybrid Inheritance
    cout << "Hybrid Inheritance:" << endl;
    HybridChild hc1;
    hc1.setFather();
    hc1.setParent();
    hc1.setHybridChild();
    hc1.getFather();
    hc1.getParent();
    hc1.getHybridChild();
    cout << endl;

    return 0;
}
