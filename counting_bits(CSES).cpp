#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)

#define N 1000006


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n; cin>>n;
    
    ll cnt=0;
    for(ll i=0;i<60;i++)
    {
        cnt +=  ((n+1)/(1LL<<(i+1))) * (1ll<<i);
      
        ll extra = ((n+1)%(1LL<<(i+1))) - (1ll<<i);
        cnt += max(0LL,extra);
    }
    
       cout<<cnt;
    
}