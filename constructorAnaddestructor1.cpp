#include<iostream>
using namespace std;
class Line{
private:
double length;
public:
void setLength(double len)
{
    length=len;
}
double getLength()
{
    return length;
}
Line()
{
    cout<<"object is being created"<<endl;
}
~Line()
{
    cout<<"object is being deleted"<<endl;
}

};
int main()
{
 Line line;
 line.setLength(9.0);
 cout<<"Length of line:"<<line.getLength()<<endl;
 return 0;
}