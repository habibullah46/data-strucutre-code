#include<iostream>
using namespace std;
struct Student
{
	int id;
string name;
	int RollNO;
	string Class;

	
};
void line()
{
	cout<<"--------------------------------------------"<<endl;
}
void S1()
{
	 Student s1;
   s1.id=1234;
   s1.name="habibullah";
   s1.RollNO=46;
   s1.Class ="BSCS3rd";
   
   cout<<"ID of the student is: "<<s1.id<<endl;
cout<<"name of the student is: "<<s1.name<<endl;
cout<<"Roll_No of the student is: "<<s1.RollNO<<endl;
cout<<"Class of the student is : "<<s1.Class<<endl;

   
  
}
void s2()
{
   Student s2;
   s2.id = 567;
   s2.name= "Muhammad Aqeeel";
   s2.RollNO = 56;
   s2.Class="BSCS1st";
   cout<<"ID of the student is: "<<s2.id<<endl;
cout<<"name of the student is: "<<s2.name<<endl;
cout<<"Roll_No of the student is: "<<s2.RollNO<<endl;
cout<<"Class of the student is : "<<s2.Class<<endl;
   
}
int main()
{
   //Habibullah........
  S1();
  line();
  s2();

   
}

