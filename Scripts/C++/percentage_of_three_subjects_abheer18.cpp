#include<iostream.h>
#include<stdlib.h>
int main
{  system ("cls");
   float sub1, sub2, sub3, marks, perc;
   cout<<"Enter the marks obtained in 3 subjects:";
   cin>>sub1>>sub2>>sub3;
   marks=sub1+sub2+sub3;
   perc=(marks/300)*100;
   cout<<"\n"<<"The percentage marks are:"<<perc<<"%";
   return 0;
}   
