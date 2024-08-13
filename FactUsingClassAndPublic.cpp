#include<iostream>
using namespace std;
class factorial{
public:
int i,fact=1,n;
void display()
{
    cout<<"Enter n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial:"<<fact<<endl;
}
};
int main()
{
    factorial obj;
    obj.display();
    return 0;
}