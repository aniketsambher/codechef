#include <iostream>
#include<vector>
#include<cmath>
#include <string.h> 
#include <climits>
#include<algorithm>
#define boost ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;




int main() {
	boost;
	int t,i;
	cin>>t;
	int n,k;

	
	while(t>0){
		cin>>n>>k;
		int height[n+1];
		int suffix[n+1];
		int dp[n+1][k+1];
		int flag=0;
		suffix[n]=0;
		for(int i=0;i<n;++i)
			cin>>height[i];
		sort(height,height+n);
		for(int i=n-1;i>=0;--i)
			suffix[i]=suffix[i+1]+height[i];
		for(int i=0;i<=n;++i)
			for(int j=0;j<=k;++j)
				dp[i][j]=INT_MAX;

		for(int i=n-1;i>=0;--i)
			for(int j=k;j>=0;--j)
			{if(j<=height[i])
				dp[i][j]=height[i];
			else if(dp[i+1][j-height[i]]==INT_MAX)
				dp[i][j]=INT_MAX;
			else
				dp[i][j]=min(dp[i+1][j],dp[i+1][j-height[i]]+height[i]);

			}
		for(int i=n-1;i>=0;--i)
			if(suffix[i]-dp[i][k]>=k){
				cout<<n-i<<'\n';
				flag=1;
				break;

			}

		if(flag==0)
			cout<<-1<<'\n';

		t--;
			}
return 0;	



	}


