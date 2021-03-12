#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string s;
	cin>>s;
	//sort(s.begin(), s.end());
	long long max = -1;
	long long sum = 1;
	for(int i=1; i<s.size(); i++){
		if(s[i] == s[i-1]){
			sum++;
		}else{
			sum = 1;
		}
		max = (max < sum)?sum : max;
	}
	cout<<((max < sum)? sum : max)<<"\n";
	return 0;
}
