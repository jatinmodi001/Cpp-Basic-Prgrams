#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin>>ch;
	if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
		cout<<"The character is vowel";
	else 
		cout<<"The charcater is not vowel";
	return 0;
}
