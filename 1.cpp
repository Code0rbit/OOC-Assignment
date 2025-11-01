#include<iostream>
using namespace std;
class student
{
private:
char name[30];
int rollno;
float marks;
public:
void inputdetails()
{
cout<< "Enter name:";
cin>>name;
cout<<"Enter rollno:";
cin>>rollno;
cout<<"Enter marks:";
cin>>marks;
}
void displaydetails()
{
cout<<"enter name:"<<name;
cout<<"enter rollno:"<<rollno;
cout<<"enter marks:"<<marks;
}
};
int main()
{
cout << "Name  : Sakshi Dattatray Patil\n";
cout << "Roll No: 97\n";
cout << "Class : S.Y CSE (B)\n";
student studentObj;
studentObj.inputdetails();
cout<<"student details:";
studentObj.displaydetails();
return 0;
}
     


