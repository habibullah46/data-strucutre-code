#include<iostream>
using namespace std;
struct Employee
{
   char name[30];
   int Age;
   int phoneNo;
   int salary;
   	
};
int main()
{
   //Habibullah........
   Employee e;
   cout<<"Enter the employee name: ";
   cin>>e.name;
   cout<<"Enter the age of employee: ";
   cin>>e.Age;
   cout<<"enter the phone number of employee: ";
   cin>>e.phoneNo;
   cout<<"Enter the salary of employee: ";
   cin>>e.salary;
    
    cout<<"\t\t\n\nE.name"<<"\tE.Age"<<"\t\t\tE.phoneno"<<"t\tE.salary"<<endl;
    cout<<"\t"<<e.name<<"\t\t"<<e.Age<<"\t\t"<<e.phoneNo<<"\t\t"<<e.salary;
}

