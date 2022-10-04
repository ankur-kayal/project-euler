#include<bits/stdc++.h>
#define ll long long
using namespace std;


/*
    Time Complexity : O(sqrt(N)) per test case
    Space Complexity : O(1) per test  case
*/

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll maxi=0;
        while(n%2==0)
        {
            maxi=2;
            n>>=1;
        }
        for(ll i=3;i<=sqrt(n);i+=2)
        {
            while(n%i==0)
            {
                maxi=i;
                n/=i;
            }
        }
        if(n>2)
        {
            maxi=max(maxi,n);
        }
        cout<<maxi<<"\n";
    }
    return 0;
}
