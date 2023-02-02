#include<iostream>
using namespace std;

int main()
{

  //first example
  for(int i=1; i<=10; i++)
  {
    cout << "Let's do it."<<endl;
  }

 //second example
  int arr[] {10,20,30,40,50,60,70,80,90};
  for (auto  element: arr)
  {
    cout << element << " ";
  }

  //third example
  for(int i=0, j=10, k=20; (i+j+k) <100; j++, k--, i=+k)
  {
    cout<< i<< " "<< j <<" "<< k << "\n ";
  }
  return 0;
}