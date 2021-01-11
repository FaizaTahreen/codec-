#include<iostream>
using namespace std;
int main()
{
    int i,rem,sum=0;
    int a[4]={43,345,20,987};
    for(i=0;i<4;i++)
    {
        int temp=a[i];
        while(temp!=0)
        {
            sum=sum+(temp%10);
            temp=temp/10;
        }
    
    cout<<sum<<" ";
    sum=0;
    }
    return 0;
}