#include <iostream>
#include<vector>
#include<cmath>
#define boost ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;




int main() {
	boost;
	int t;
	cin>>t;
	
	long long int n,m,num,i,orig;
	vector<long long int>p;
	while(t>0){

		
		scanf("%lli",&n);
		scanf("%lli",&m);
		for(i=0;i<m;++i){
			scanf("%lli",&num);
			p.push_back(num);
		}
		i=0;
		orig=n;
		while(i<m){
			if(p[i]%n){
				n--;
				i=0;

			}
			else
				++i;
		}

		cout<<orig-n<<"\n";
		p.clear();
		t--;
	}
return 0;
}



