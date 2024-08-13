#include<iostream>
using namespace std;
class Max{
public:
    static const int MaxSize=100;
    int arr[MaxSize];
    int size;
    void readArr()
    {
        cout<<"Enter the size of Array:";
        cin>>size;
        if(size>MaxSize)
        {
            cout<<"Out of Range!";
            size=MaxSize;
        }
        cout<<"Enter the Element of Array:";
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
    }
    void FindMax()
    {
        if(size==0)
        {
            cout<<"The array empty!";
            return;
        }
        int max=arr[0];
        for(int i=0;i<size;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }
        cout<<"The Maximum number:"<<max<<endl;
    }
    void FindMin()
    {
      if(size==0)
      {
          cout<<"The array is empty!"<<endl;
          return ;
      }
      int min=arr[0];
      for(int i=1;i<size;i++)
      {
          if(min>arr[i])
          {
              min=arr[i];
          }
      }
      cout<<"The minimum number is :"<<min<<endl;

    }
};
int main()
{
    Max obj;
    obj.readArr();
    obj.FindMax();
    obj.FindMin();
    return 0;
}
