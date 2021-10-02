#include<iostream.h>
#include<string.h>

void main()
{
    char string[50];
    int len, i, x, flag=0;
    cout<<"Enter a String(max 49 characters): ";
    cin.getline(string,50);
    len = strlen(string);
    for(i=0, x=len-1;i<=len/2;i++, x--)
    {
        if(string[i]!=string[x])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"\n\nString is palindrome";
    }
    else
    {
        cout<<"\n\nString is not a palindrome";
    }
}
