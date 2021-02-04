#include <iostream>
#include<vector>
#include<cmath>
#include <string.h> 
#define boost ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;




int main() {
	boost;
	int t,val;
	cin>>t;
	string str,out,sub;
	char cr;
	
	
	
	while(t>0){
		out="";
		cin>>val;
		cin>>str;
		
		
		for(int i=0;i<str.length();i+=4){
			sub=str.substr(i,4);
			
			val=stoi(sub, 0, 2);
			out+=(char)(val+97) ;
		}
		cout<<out<<'\n';

		
		
		t--;
	}
return 0;
}