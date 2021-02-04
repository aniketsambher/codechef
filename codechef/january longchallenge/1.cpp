#include <iostream>
#include<vector>
using namespace std;




int main() {
	int t,n,i;
	cin>>t;
	
	long int k,d,num,sum;
	vector<long int>a;
	
	while(t>0){
		cin>>n>>k>>d;
		sum=0;
		for(i=0;i<n;++i){
			cin>>num;
			sum+=num;

		}
		if((sum/k)<d)
			cout<<sum/k<<'\n';
		else
			cout<<d<<'\n';



		a.clear();

		
		


		t--;
	}
}
