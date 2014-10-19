#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,d;
   while(1)
   {
       cin>>a>>b;
       if(a==-1&&b==-1) break;
       if(a>=b)
        d=(a/(b+1));
       else
        d=(b/(a+1));
       cout<<ceil(d)<<"\n";
   }
    return 0;
}




