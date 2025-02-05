#include<iostream>
using namespace std;

class Line {
public:
    void setLength(int l);
    int getLength(void);
    Line();                   // Empty constructor
    Line(int len);            
    Line(const Line &obj);     
    ~Line();                   
private:
    int* ptr;                
};

// Empty constructor
Line::Line() {
    ptr = new int;             
    *ptr = 1;                  
    cout << "Empty constructor" << endl;
}

// Parameterized constructor
Line::Line(int len) {
    ptr = new int;             
    *ptr = len;                
    cout << "Parameterized constructor" << endl;
}

// Copy constructor
Line::Line(const Line &obj) {
    ptr = new int;             
    *ptr = *obj.ptr;           
    cout << "Copy constructor" << endl;
}

// Destructor
Line::~Line() {
    delete ptr;               
    cout << "Destructor called" << endl;
}

// Set length
void Line::setLength(int l) {
    *ptr = l;
}

// Get length
int Line::getLength(void) {
    return *ptr;
}

int main() {
    Line l1;             
    Line l2(10);         
    Line l3 = l2;        

    cout << "Length of l1: " << l1.getLength() << endl;
    cout << "Length of l2: " << l2.getLength() << endl;
    cout << "Length of l3: " << l3.getLength() << endl;

    l1.setLength(20);    
    cout << "Updated length of l1: " << l1.getLength() << endl;

    return 0;
}

