#include<iostream>
using namespace std;
class base{
    private:
    int private_variable;
    protected:
    int protected_variable;
    public:
    base()
    {
     private_variable=10;
     protected_variable=90;
    }
    friend void friendfuntion(base& obj);
};
void friendfuntion(base& obj)
{
    cout<<"private variable:"<<obj.private_variable<<endl;
    cout<<"protected variable:"<<obj.protected_variable<<endl;
}
int main()
{
    base obj1;
    friendfuntion(obj1);
    return 0;
}