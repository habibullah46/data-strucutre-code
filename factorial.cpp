#include<iostream>
using namespace std;
int n=5;
int factorial(int n)
{
	 n= n*factorial(n-1);
	 cout<<n;
}
int main()
{
   //Habibullah........
   factorial(4);
}

