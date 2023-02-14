#include<iostream>
using namespace std;

int main()
  {
   //declare vairable outside the loop
   int a = 8;
   cout << a << endl;

   //declare variable inside loop
   for(int a=1 ; a<=5 ; a++)
   {
    cout << a << endl;
   }

   //declare variable inside if statement
   if(true)
   {
    cout << a << endl;
    if(true)
    {
      int a = 4;
      cout << a << endl;

      if(true)
      {
        cout << a << endl;
      }
    }
   }
  
  }
