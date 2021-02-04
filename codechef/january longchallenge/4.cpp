#include <iostream>
#include<vector>
#include<cmath>
#include <string.h> 
#include<algorithm>
#define boost ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;




int main() {
	boost;
	int t;
	cin>>t;
	
	vector< pair <int, int> > a; 
	
	long int n,k,x,y;
	
	while(t>0){
		cin>>n>>k>>x>>y;
		if(((x-y)==0)||(x==0&&y==n)||(y==0&&4==n)){
			cout<<n<<'\t'<<n<<'\n';
			t--;
			continue;
		}
		else if((x-y)>0){
			y+=n-x;
			x=n;
			a.push_back(make_pair(x,y));
			swap(x,y);
			a.push_back(make_pair(x,y));
			y+=-x;
			x=0;
			a.push_back(make_pair(x,y));
			swap(x,y);
			a.push_back(make_pair(x,y));
		}
		else if((x-y)<0){
			x+=n-y;
			y=n;
			a.push_back(make_pair(x,y));
			swap(x,y);
			a.push_back(make_pair(x,y));
			x+=-y;
			y=0;
			a.push_back(make_pair(x,y));
			swap(x,y);
			a.push_back(make_pair(x,y));



		}
		
		cout<<a[(k-1)%4].first<<'\t'<<a[(k-1)%4].second<<'\n';



		


		
		a.clear();
		t--;
		
	}
return 0;
}