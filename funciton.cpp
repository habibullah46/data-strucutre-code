#include<iostream>
using namespace std;
int ValueOne;
int ValueTwo;
void ADD()
{

	cout<<"Enter ValueOne: ";
	cin>>ValueOne;
	cout<<"Enter ValueTwo: ";
	cin>>ValueTwo;
	cout<<"\nSum of two number is : "<<ValueOne+ValueTwo;
}
void SUB()
{

	cout<<"Enter ValueOne: ";
	cin>>ValueOne;
	cout<<"Enter ValueTwo: ";
	cin>>ValueTwo;
	cout<<"\n\nSub  of two number is : "<<ValueOne-ValueTwo;
}
void MUL()
{
	cout<<"Enter ValueOne: ";
	cin>>ValueOne;
	cout<<"Enter ValueTwo: ";
	cin>>ValueTwo;
	cout<<"\n\nMUl of two number is : "<<ValueOne*ValueTwo;
}
void DIVID()
{
	int  ValueOne;
	int ValueTwo;
	cout<<"Enter ValueOne: ";
	cin>>ValueOne;
	cout<<"Enter ValueTwo: ";
	cin>>ValueTwo;
	cout<<"\n\nMUl of two number is : "<<ValueOne/ValueTwo;
}
int main()
{
   //Habibullah........
   int Press;
   cout<<"\n\n\n\t\t\t\tCALCULATOR\n\n"<<endl;
   cout<<"Press 1 for Addition"<<endl;
   cout<<"Press 2 for subtruction"<<endl;
   cout<<"Press 3 for Multiplication"<<endl;
   cout<<"Press 4 for Division"<<endl;
   cin>>Press;
   
   if(Press ==1)
   {
   	cout<<"\t\t\tADDTION OF TWO NUMBER"<<endl;
   	ADD();
   }
   if(Press==2)
   {
   	cout<<"\t\t\tSUBTRUCTION OF TWO NUMBER"<<endl;
   	SUB();
   }
   if(Press==3)
   {
   	cout<<"\t\t\tMULTIPLICATION OF TWO NUMBER"<<endl;
   	MUL();
   }
   if(Press==4)
   {
   	cout<<"\t\t\tDIVISION OF TWO NUMBER"<<endl;
   	DIVID();
   }
}

