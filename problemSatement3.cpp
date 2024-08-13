#include<iostream>
using namespace std;
class Date{
private:
int day;
int month;
int year;
public:
Date(int d,int m,int y)
{
    day=d;
    month=m;
    year=y;
}
void setDay(int d)
{
    day=d;
}
void setMonth(int m)
{
    month=m;
}
void setYear(int y)
{
    year=y;
}
int getDay()
{
    return day;
}
int getMonth()
{
    return month;
}
int getYear()
{
    return year;
}
bool isValidDate()
{
    if(month<1||month>12)
    {
        return false;
    }
    if(day<1||day>31)
    {
        return false;
    }
    if(month==4||month==6||month==9||month==11&&day>30)
    {
        return false;
    }
    //cheak leap year
    if(month==2)
    {
        if(year%4==0&&year%100!=0||year%400==0)
        {
            if(day>29)
            {
                return false;
            }
        }
        if(day>28)
        {
            return false;
        }
    }
    else
    {
        return true;
    }
}
void displayDate()
{
    cout<<day<<"-"<<month<<"-"<<year<<endl;
}
};
int main()
{
    Date obj(30,12,2003);
    obj.displayDate();
    if(obj.isValidDate())
    {
        cout<<"valid date"<<endl;
    }
    else{
        cout<<"Invaild date"<<endl;
    }


}