#include<iostream>
using namespace std;
class rect{
    private:
    int length;
    int width;
    public:
    rect(int len,int wid)
    {
        length=len;
        width=wid;
    }

    //getter funtion:
    int getLen()
    {
        return length;
    }
    int getwid()
    {
        return width;
    }

    //setter funtion

    void setLen(int len)
    {
        length=len;
    }
    void setWid(int wid)
    {
        width=wid;
    }
    
};
int main()
{
    rect obj(2,4);
    cout<<"length:"<<obj.getLen()<<endl;
    cout<<"width:"<<obj.getwid()<<endl;
    obj.setLen(7);
    obj.setWid(9);
    cout<<"new length:"<<obj.getLen()<<endl;
    cout<<"new width:"<<obj.getwid()<<endl;

    return 0;
}