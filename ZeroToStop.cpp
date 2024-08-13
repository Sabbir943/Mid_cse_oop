#include<iostream>
using namespace std;
int main()
{
    int n;
    int positiveCount=0;
    int negativeCount=0;
    cout<<"Enter the Number(0 to stop):";
    
    while(true)
    {
        cin>>n;
        if(n==0)
        {
          break;
        }
       
        if(n>0)
    {
        positiveCount++;
    }
    else if(n<0){
        negativeCount++;
    }
    }
    
    cout<<"Number of positive:"<<positiveCount<<endl;
    cout<<"Number of Negative:"<<negativeCount<<endl;
}