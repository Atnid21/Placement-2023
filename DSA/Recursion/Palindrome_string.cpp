#include<bits/stdc++.h>
using namespace std;


bool palindromeHelper(int l , int r  , string &s){
	
	
	if(l>=r) return true;
	
	if(s[l] != s[r]) return false;
	
	return palindromeHelper(l+1 , r-1 , s);
	
}


bool isPalindrome(string &s){
	
	return palindromeHelper(0,s.size()-1,s);
}




int main(){
	
	string s;
	cin>>s;
	
	cout<<isPalindrome(s);
	
	
}