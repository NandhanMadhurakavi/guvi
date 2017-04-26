#include<iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;
 if(n%2==0 && n>=0)
 cout<<"Even";
 else if(n%2==1 && n>=0)
 cout<<"Odd";
 else
 cout<<"Invalid input";
 return 0;
}
