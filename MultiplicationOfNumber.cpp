//Multiplication of numbers;
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter number\n";
	cin>>a;
	int i,mult;
	for(i=1;i<=10;i++)
	{
		mult=a*i;
		cout<<a<<"x"<<i<<"="<<mult<<"\n";
	}
	return 0;
}
