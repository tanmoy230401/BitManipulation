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
    // int cnt=0;
    // for(ll i=1;i<=n;i++)
    // {
    //     for(ll j=0;j<64;j++)
    //     {
    //         if(CheckBit(i,j)) cnt++;
    //     }
    // }
    
    // cout<<cnt;
    // Complexity is o(N*64)
    
    vector<ll>mem(n+2);
    
    mem[0]=0;
    
    for(int i=1;i<=n;i++)
    {
        mem[i]= mem[i/2] + i%2;
    }
    cout<<mem[6]<<endl;
}