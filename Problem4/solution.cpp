#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
using namespace std;
bool check(ll n)
{
    vector<ll>v;
    while(n>0)
    {
        v.pb(n%10);
        n/=10;
    }
    for(ll i=0;i<v.size()/2;i++)
    {
        if(v[i]!=v[v.size()-i-1])
        {
            return false;
        }
    }
    return true;
}

/*
    Time Complexity : O(Nlog(sqrt(N))
    Space Complexity : O(Nlog(sqrt(N)))
*/

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        ll n;
        cin>>n;
        ll maxi=0;
        for(ll i=990;i>=100;i-=11)
        {
            for(ll j=999;j>=100;j--)
            {
                if(check(i*j)&&((i*j)<n))
                {
                    if(maxi<(i*j))
                    {
                        maxi=i*j;
                        break;
                    }
                }
                if(maxi>(i*j))
                {
                    break;
                }
            }
        }
        cout<<maxi<<"\n";
    }
}
