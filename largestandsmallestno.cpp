#include<iostream>
using namespace std;
int main()
{
int a=3521,b=2452,c=1352,i,A,B,C,X1,X2,X3,X4;

for(i=1;i<=4;i++)
{
    A=a%10;
    B=b%10;
    C=c%10;
    if(i==1)
    {X4=A>B ? (A>C ? A:C) : (B>C ? B:C);}
    if(i==2)
    {X3=A<B ? (A<C ? A:C) : (B<C ? B:C);}
    if(i==3)
    {X2=A>B ? (A>C ? A:C) : (B>C ? B:C);}
    if(i==4)
    {X1=A<B ? (A<C ? A:C) : (B<C ? B:C);}
    a=a/10;
    b=b/10;
    c=c/10;
}
cout<<X1<<X2<<X3<<X4;
return 0;
}
