#include <iostream>
#include<vector>
#include<cmath>
using namespace std;
#define boost ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

long int longest(vector<long int>& a){
	long int prev=-1;
	long int l;
	l=0;
	
	for(int i=0;i<a.size();++i)
		if(a[i]!=prev){
			l++;
			prev=a[i];
		}

		return l;

}



int main() {
	boost;
	int t;
	cin>>t;
	
	long int n,q,num,x,y,i,len;
	vector<long int> a;
	while(t>0){
		cin>>n;
		cin>>q;
		for(int i=0;i<n;++i){
			cin>>num;
			a.push_back(num);
		}
        len=longest(a);
		for(i=0;i<q;++i){
			long int get=0;
			cin>>x>>y;
			if(x>=2 && a[x-2]==a[x-1])
			    get++;
			if(x<n && a[x]==a[x-1])
			    get++;
			a[x-1]=y;
			if(x>=2&&a[x-2]==a[x-1])
			    get--;
			if(x<n&&a[x]==a[x-1])
			    get--;
			len+=get;
		    cout<<len<<'\n';
		    
		}





		a.clear();
		t--;
	}
return 0;
}