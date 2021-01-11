#include<iostream>
using namespace std;
int main()
{
    int i, count=0;
    string str="asfddagha";
    int freq[26]={0};
     int len=str.size();
     for(i=0;i<len;i++)
     freq[str[i]-'a']++;
     for(i=0;i<26;i++)
     {
         if(freq[i]==1)
         {
             count++;
         }
     }
     cout<<count;
     return 0;
}