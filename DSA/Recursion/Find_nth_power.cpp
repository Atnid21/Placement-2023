#include<bits/stdc++.h>
using namespace std;

// int Pow(int x,int n){
	
// 	if(n==0) return 1;
	
// 	return x * Pow(x,n-1);
// }


int Pow(int x,int n){
	
	if(n==0) return 1;
	
	int temp = Pow(x,n/2);
	
	if(n%2==1) return temp * temp * x;
	
	return temp * temp;
}



int main(){
	
	int x,n;
	cin>>x>>n;
	
	cout<<Pow(x,n);
		
}