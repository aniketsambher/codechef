#include <iostream>
#include<vector>
using namespace std;




int main() {
	int t,i;
	cin>>t;
	string s;
	char cr;
	long long int days,num,sum;
	float calc;
	while(t>0){

		sum=0;
		scanf("%lli",&days);
		string str; 
		scanf("%c",&cr);
		getline(cin, str);
		for(char c:str)
			if(c=='1')
				sum++;
		
		
        calc=(float)((120-days+sum)/(float)120);
        //cout<<calc<<" "<<sum;
        if(calc>=0.75)
        	printf("YES\n");
        else
        	printf("NO\n");
		


		t--;
	}
}



