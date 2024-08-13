#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of Array:";
    cin>>size;
    int arr[size];
    cout<<"Enter the Element of Array:";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int fl,sl;//fl=First largest and sl=second largset
    if(arr[0]>arr[1])
    {
        fl=arr[0];
        sl=arr[1];
    }
    else{
        fl=arr[1];
        sl=arr[0];
    }
    for(int i=2;i<size;i++)
    {
        if(arr[i]>fl)
        {
            sl=fl;
            fl=arr[i];
        }
        else if(arr[i]>sl&&arr[i]!=fl){
          sl=arr[i];
        }
    }
    cout<<"second largest:"<<sl<<endl;
    return 0;
}