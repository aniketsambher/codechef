#include <iostream>
#include<vector>
#include<cmath>
using namespace std;




int main() {
	int t,i;
	cin>>t;
	
	long long int a,b,k,n,calc;
	
	while(t>0){

		
		scanf("%lli",&a);
		scanf("%lli",&b);
		scanf("%lli",&k);
		scanf("%lli",&n);
		
		calc=(abs(a-b))%(2*k);
		if(!calc)
			cout<<"YES"<<endl;
		else
			cout<<"YES"<<endl;
		


		t--;
	}
return 0;
}



