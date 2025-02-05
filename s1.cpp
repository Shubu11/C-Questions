#include<iostream>
using namespace std;

class line {
public:
    void setLength(int l);
    int getLength(void);  
    line();              // Default constructor declaration
    line(int i);         // Parameterized constructor declaration
private:
    int len;
};

// Default constructor definition
line::line() {
    len = 0;  
    cout << "Default constructor called. Length of obj1: " << len << endl;
}


line::line(int i) {
    len = i;
    cout << "Parameterized constructor called. Length of obj2: " << len << endl;
}

void line::setLength(int l) {
    len = l;
}

int line::getLength(void) {
    return len;
}

int main() {
    line l1;      
    line l2(15);   

    l1.setLength(15);  
    cout << "Length of obj1: " << l1.getLength() << endl;  

    return 0;
}


       
