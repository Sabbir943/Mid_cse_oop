#include<iostream>
//using namespace std;
class Student{
private:
std::string name;
int rollNumber;
double marks;
public:
Student(std::string StudentName,int roll,double studentMarks)
{
    name=StudentName;
    rollNumber=roll;
    marks=studentMarks;
}
void setMarks(double newMarks)
{
    marks=newMarks;
}
double getMarks()
{
    return marks;
}
std::string getGrade()
{
    if(marks>=80)
    return "A+";
    else if(marks>=70)
    return "A-";
    else if(marks>=60)
    return "B";
    else if(marks>=50)
    return "C";
    else
    return "F";
}
void displayStudentInfo()
{
    std::cout<<"Name:"<<name<<std::endl;
    std::cout<<"Roll Number:"<<rollNumber<<std::endl;
    std::cout<<"Marks:"<<marks<<std::endl;
    std::cout<<"Grade:"<<getGrade()<<std::endl;
}

};
int main()
{
    Student obj("Abu sayed",101,78);
    obj.displayStudentInfo();
   

    return 0;
}