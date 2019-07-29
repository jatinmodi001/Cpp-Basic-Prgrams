#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long int a,b,sum=0,ct=0;
	cin>>a;
	while(a!=0)
	{
		b=a%10;
		b=pow(2,ct)*b;
		sum=sum+b;
		ct++;
		a=a/10;
	}
	cout<<sum;
}
