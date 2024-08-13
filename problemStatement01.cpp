#include<iostream>
using namespace std;
class Rectangle{
    private:
    double length;
    double width;
public:
 Rectangle(double l,double w)
 {
    length=l;
    width=w;
 }
 double calculateArea()
 {
    return length*width;
 }
 double calculatePerimeter()
 {
    return 2*(length+width);
 }
 void displayDimensions()
 {
    cout<<"length:"<<length<<endl;
    cout<<"width:"<<width<<endl;
 }
};
int main()
{
    Rectangle obj(12,19);
    obj.displayDimensions();
    cout<<"Area:"<<obj.calculateArea()<<endl;
    cout<<"Perimeter:"<<obj.calculatePerimeter()<<endl;
    return 0;
}