#include<iostream.h>
#include<string.h>

void main()
{
    int num, rev_num=0, c_num, ld;
    cout<<"Enter a number : ";
    cin>>num;
    c_num=num;
    while(num>0)
    {
        ld=num%10;
        rev_num=(rev_num*10)+ld;
        num /= 10;
    }
    if(rev_num == c_num)
    {
        cout<<endl<<c_num<<" is a palindrome";
    }
    else
    {
        cout<<endl<<c_num<<" is not a palindrome";
    }
}
