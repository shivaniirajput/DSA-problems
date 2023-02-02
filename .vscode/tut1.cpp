#include<iostream>
using namespace std;

int main()
{
  int a = 123;
  cout<< a << endl;

  char b ='v';
  cout<< b << endl;

  bool bl = true;
  cout << bl <<endl; 

  float f = 1.2;
  cout << f << endl;

  double d = 1.33;
  cout << d << endl;

  int size = sizeof(a);
  cout<<"Size of a is:"<< size<<endl;

  int size1 = sizeof(f);
  cout<<"Size of f is:"<< size1<<endl;
  
  return 0;
}