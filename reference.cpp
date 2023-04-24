#include<iostream>
#include<windows.h>
using namespace std;
void line()
{
	cout<<"------------------------------------"<<endl;
}
void loading()
{
	for(int i=0;i<8;i++)
	{
	
	cout<<".";
	Sleep(1000);
}
}
void Result()
{
	cout<<"\n\n\n\t\t\tResult card of student"<<endl;
	string name;
	int RollNO;
	string Class;
	int maths ;
	int programming;
	int phys;
	int obtainmarks;
	float percentage;
	float total = 300;
	int student;
	cout<<"enter the number of student:";
	cin>>student;
	for(int i=1; i<=student;i++)
	{
	cout<<"Enter the student name:";
	cin>>name;
	cout<<"Enter the rollNo:";
	cin>>RollNO;
	cout<<"Enter the class: ";
	cin>>Class;
	line();
	cout<<"\n\n\t\t\t\tNow enter the subject number of the student"<<endl;
	cout<<"Enter the maths number: ";
	cin>>maths;
	cout<<"Enter the programming number: ";
	cin>>programming;
	cout<<"Enter the pys number : ";
	cin>>phys;
	obtainmarks = maths+ programming+ phys;
	 percentage = (obtainmarks/total)*100;
	 cout<<"\n\n";
   cout<<"loading";
   loading();//function calling
   system("cls");
	cout<<"\n\n\t\t\toutput"<<endl;
	
	
	cout<<"Name of the student is :"<<name<<endl;
	cout<<"Rollno of the student is: "<<RollNO<<endl;
	cout<<"class of the student is : "<<Class<<endl;
	cout<<"\n\n\n\t\t\t subject marks"<<endl;
	cout<<"Marks of Maths: "<<maths<<endl;
	cout<<"Programming marks: "<<programming<<endl;
	cout<<"Physics marks: "<<phys<<endl;
	cout<<"sum of subject is : "<<obtainmarks<<endl;
	cout<<"percentage : "<<percentage<<endl;
	line();
}

	
}
int main()
{
   //Habibullah........
   Result();
  
}

