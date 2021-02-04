#include <iostream>
#include<vector>
#include<cmath>
using namespace std;




int main() {
	int t,i;
	cin>>t;

	char c;
	long long int zero,one;
	string str;
	scanf("%c",&c);
	while(t>0){
		zero=0;
		one=0;
		
		getline(cin, str);
		for(char c:str){
			if(c=='1')
				one++;
			else if(c=='0')
				zero++;
		}
		//cout<<str;
		if((one+zero)&1||!one||!zero)
			cout<<-1<<"\n";
		
		else
		{
			cout<<abs(one-zero)/2<<"\n";
		}
		


		t--;
	}
return 0;
}



