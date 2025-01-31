#include <iostream>
using namespace  std;
class Box{
protected :
	double width;
	double length;
	double breadth;
	};
//smallbox is the derived class
class SmallBox:Box
{
public: 
	void setSmallWidth(double width);
	double getSmallWidth();
	void setSmallLength(double length);
	double getSmallLength();
	void setSmallBreadth(double breadth);
	double getSmallBreadth();
};
//member function of the child class
double SmallBox::getSmallWidth()
{
return width;
}
void SmallBox::setSmallWidth(double width)
{
width=width;
}
double SmallBox::getSmallBreadth()
{
return breadth;
}
void SmallBox::setSmallBreadth(double breadth)
{
breadth=breadth;
}
double SmallBox::getSmallLength()
{
return length;
}
void SmallBox::setSmallLength(double length)
{
length=length;
}
int main()
{
SmallBox box;
//set box width using member function 
box.setSmallWidth(5.0);
box.setSmallBreadth(6.0);
box.setSmallLength(7.0);
cout<<"Width of box"<<box.getSmallWidth()<<endl;
cout<<"Length of box"<<box.getSmallLength()<<endl;
cout<<"Breadth of box"<<box.getSmallBreadth()<<endl;
return 0;
}
