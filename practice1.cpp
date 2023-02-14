#include<iostream>
using namespace std;

int main()
{
  //given a no. n , return difference between the product and sum of the digits

  int prod = 1;
  int sum = 0;
  int n = 234;

  while(n!=0)
  {
    int digit = n%10;
    prod = prod * digit;
    sum = sum + digit;

    n = n/10;
  }
  int answer = prod - sum;
  cout<< answer << endl;
  
}