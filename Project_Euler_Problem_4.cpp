//  The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
//  Find the largest palindrome made from the product of two n -digit numbers.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Please Enter Two n-Digit Numbers : ";
    int x,y,ans=0;
    cin>>x>>y;
    for(int i=x;i<=y;i++)
    {
        for(int j=x;j<=y;j++)
        {
            int n=i*j;
            int rev=0;
            while(n>0)
            {
                rev=rev*10+n%10;
                n/=10;
            }
            if(i*j==rev)
             if(ans<rev)
                ans=rev;
            

        }
    }
    cout<<ans<<endl;
    
 return 0;
}