
#include <bits/stdc++.h>
using namespace std;
#define CheckBit(x,k) ((x>>k)&1)
int main()
{
	int n; cin>>n;
	int w[n];
	for(int i=0;i<n;i++)
	{
		cin>>w[i];
	}
	
	int ans=(1<<30);
	for(int i=0;i<(1<<n);i++)
	{
		int s1=0;
		int s2=0;
		
		for(int j=0;j<n;j++)
		{
			if(CheckBit(i,j)) s1+=w[j];
			else s2+=w[j];
		}
		ans=min(ans,abs(s1-s2));
	}
	cout<<ans<<endl;
}