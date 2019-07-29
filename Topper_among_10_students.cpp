//Class of 10 students and find the topper of class.
#include<iostream>
using namespace std;
class stud
{
	int rno;
	int p,c,m;
	char name[50];
	int result;
	public:
	void read();
	int calc();
	void disp();
};
void stud::read()
{
	
	cin>>rno>>p>>c>>m>>name;
}
int stud::calc()
{
	result=(float)(p+c+m)/3;
	return result;
}
void stud::disp()
{
	cout<<"Roll No:-"<<rno<<"\nPercentage:-"<<result<<"%\nName:-"<<name<<"\n";
}
int main()
{
	stud p[10];
	int i,index;
	cout<<"Enter roll numbers,marks in 3 subjects and name\n";
	for(i=0;i<10;i++)
		p[i].read();
	for(i=0;i<10;i++)
		p[i].calc();
	int max=p[0].calc();
	for(i=0;i<10;i++)
	{
		if(max<=p[i].calc())
		{
			max=p[i].calc();
			index=i;
		}
	}
	for(i=0;i<10;i++)
		p[i].disp();
	cout<<"-----------------------------------------------------------\nTopper of class is\n";
	p[index].disp();
	return 0;
}
