#include<iostream>
using namespace std;
int number;
int name()
{
	if(number==5)
	{
		return 1;
	}
	number++;
	
	cout<<number<<"hello"<<endl;
	name();
	
}
int main()
{
   //Habibullah........
  name();
}

