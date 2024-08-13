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
    int fs,ss;//fl=First largest and sl=second largset
    if(arr[0]>arr[1])
    {
        fs=arr[1];
        ss=arr[0];
    }
    else{
        fs=arr[0];
        ss=arr[1];
    }
    for(int i=2;i<size;i++)
    {
        if(arr[i]<fs)
        {
            ss=fs;
            fs=arr[i];
        }
        else if(arr[i]<ss&&arr[i]!=fs){
          ss=arr[i];
        }
    }
    cout<<"second largest:"<<ss<<endl;
    return 0;
}