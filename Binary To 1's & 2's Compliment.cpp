#include<iostream>
#include<vector>
using namespace std;
int main()
{
	char a[100];
	cout<<"Enter a binary number\n";
	cin>>a;
	int b;
	vector<int> v;
	for(int i=0;a[i]!='\0';i++)
	{
		b=a[i]-48;
		if(b==0)
			b=1;
		else if(b==1)
			b=0;
		else
		{
			cout<<"Wrong Binary Number\n";
			return 0;
		}
		v.push_back(b);
	}
	cout<<"1's compliment\n";
	for(int i=0;i<v.size();i++)
		cout<<v[i];
	int carry=0;
	for(int i=v.size()-1;i>=0;i--)
	{
		if(v[i]==1 && i==0 && carry==1)
		{
			v[i]=10;
		}
		else if(v[i]==1)
		{
			v[i]=0;
			carry=1;
		}
		else if(v[i]==0 && carry==0 && i==v.size()-1)
		{
			v[i]=1;
			break;
		}
		else if(v[i]==0 && carry==0)
		{
			break;
		}
		else if(v[i]==0 && carry==1)
		{
			v[i]=1;
			break;	
		}
	}
	cout<<"\n2's compliment\n";
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i];
	}
	return 0;
}
