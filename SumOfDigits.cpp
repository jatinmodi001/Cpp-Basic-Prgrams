#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int i;
	int fl,sum=0;
	while(a!=0)
	{
		fl=a%10;
		sum=sum+fl;
		a=a/10;
	}
	cout<<sum;
	return 0;
}
