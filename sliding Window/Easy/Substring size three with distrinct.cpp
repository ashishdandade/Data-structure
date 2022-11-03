#include<iostream>
#include <bits/stdc++.h>

using namespace std;


int sub(string s){
	int rs=0;
	if(s.length()<3){
		return 0;
	}
	for(int i=0;i<=s.size()-3;i++){
		if(s[i]!=s[i+1] && s[i]!=s[i+2] && s[i+1]!=s[i+2]){
			rs++;
		}
	}
	return rs;
}

int main(){
	string s;
	cin>>s;
	cout<<sub(s)<<endl;
	return 0;
}
