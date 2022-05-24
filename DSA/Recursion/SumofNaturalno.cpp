#include<bits/stdc++.h>
using namespace std;


int sumOfNatural(int n){
	
	// base case
	if(n==1)
		return 1;
	
	
	int partialAns = sumOfNatural(n-1);
	
	return n + partialAns;
}





int main(){
	
	int n;
	cin>>n;
	
	cout<<sumOfNatural(n);

}