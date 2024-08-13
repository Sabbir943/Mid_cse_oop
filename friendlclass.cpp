#include<iostream>
using namespace std;
class GFG{
    private:
    int private_variable;

    protected:
    int protected_variable;

    public:
    GFG()
    {
        private_variable=10;
        protected_variable=90;
    }
    friend class F;
};
class F{
   public:
   void display(GFG obj)
   {
    cout<<"The value of private Variable ="<<obj.private_variable<<endl;
    cout<<"The value of protected variable="<<obj.protected_variable<<endl;

   }
};
int main()
{
    GFG g;
    F fri;
    fri.display(g);
    return 0;

}