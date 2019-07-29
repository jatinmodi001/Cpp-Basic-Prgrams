//Factorial
#include<iostream>
using namespace std;
int fact(int a)
{
	if(a==1)
	{
		return 1;
	}
	else
		return (a*fact(a-1));
}
int main()
{
	int a;
	cin>>a;
	long long int r=fact(a);
	cout<<r;
	return 0;
}
