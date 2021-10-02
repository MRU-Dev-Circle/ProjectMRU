#include <iostream.h>
void main() 
{
	int a=0,b=1,c,no;
	cout<<"Enter how many numbers you want:";
	cin>>no;
	cout<<a<<" "<<b<<" ";
	for(int i=1;i<=no-2;i++)
	{
		c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;
	}
}
