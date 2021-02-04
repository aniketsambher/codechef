#include <iostream>
#include<vector>
#include<cmath>
#include <string.h> 
#include<algorithm>
#define boost ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;




int main() {
	boost;
	int t,val,n,m,count,j;
	cin>>t;
	long int t1,t2;
	vector<int>a;
	vector<int>b;
	
	
	
	
	while(t>0){
		cin>>n>>m;
		t1=0;
		t2=0;
		for(int i=0;i<n;++i){
			cin>>val;
			t1+=val;
			a.push_back(val);
		}
		for(int i=0;i<m;++i){
			cin>>val;
			t2+=val;
			b.push_back(val);
		}
		j=0;
		count=0;
		if(t1>t2){
			cout<<0<<endl;
			continue;
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end(),greater<int>());
		
		for(int i=0;i<n;++i){
			if(j<m){
				
				     
					t1+=b[j]-a[i];
					t2+=a[i]-b[j];
					swap(a[i],b[j]);
					count++;
					j++;
					if(t1>t2)
						break;
				}
				
		}
		cout<<count<<endl;


		
		
		t--;
	}
return 0;
}