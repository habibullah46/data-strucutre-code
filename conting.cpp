#include<iostream>
using namespace std;
int counting=0;
void name()
{
     if(counting == 5)
       {
            return ;
         }
        cout<<"hello world";
        counting ++;
      name();  // recursion
}
int main()
{
         name();

}

