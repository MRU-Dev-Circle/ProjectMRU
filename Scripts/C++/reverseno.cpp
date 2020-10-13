#include <iostream.h>
void main() 
{
	int rev=0,r,no;
	cout<<"Enter a number:";
	cin>>no;
	while(no>0)
	{	r=no%10;
		rev=(rev*10)+r;
		no=no/10;
	}
	cout<<"Reverse of the number is:"<<rev;
}