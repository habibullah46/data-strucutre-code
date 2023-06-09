#include<iostream>
using namespace std;
int  change(int &n)
{
	 n=n+20;
	cout<<"change value "<<n<<endl;
}
int main()
{
   //Habibullah........
   int n=90;
   change(n);
   cout<<"main value "<<n;
   
}

