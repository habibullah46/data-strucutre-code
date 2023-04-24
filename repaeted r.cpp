#include<iostream>
using namespace std;
int n=0;
void name()
{
	if( n==5)
	{
		return ;
	}
	cout<<n<<" "<<"habibullah"<<endl;
	n++;
	name();
}
int main()
{
   //Habibullah........
   name();
}

