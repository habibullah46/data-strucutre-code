#include<iostream>
using namespace std;
class dog 
{
  private : 
  int a=23;; 
   public: 
    void action()
    {
    	cout<<"a value is "<<a;
    	
	}
};
class dog2 :dog
{
	private:
	 void animal1()
	{
		cout<<"animal is drinking";
	}
	
};
int main()
{
   //Habibullah........
   dog obj;
   obj.action();
   

}

