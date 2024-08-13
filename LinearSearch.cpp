#include<iostream>
using namespace std;
int main()
{
    int data,pos=-1,size;
    cout<<"Enter the size of Array:";
    cin>>size;
    int arr[size];
    cout<<"Enter the element of Array:";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the Target value:";
    cin>>data;
    for(int i=0;i<size;i++)
    {
        if(data==arr[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {
        cout<<"Not found!"<<endl;
    }
    else
    {
        cout<<"The data is founded at position:"<<pos<<endl;
    }
    return 0;
}