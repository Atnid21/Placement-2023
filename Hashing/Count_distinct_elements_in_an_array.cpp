Count distinct elements in an array


Input :   arr[] = {10, 20, 20, 10, 30, 10}
Output : 3
There are three distinct elements 10, 20 and 30.


Code : 

Brute force 

#include <iostream>
using namespace std;

int countDistinct(int arr[], int n)
{
	int res = 1;

	// Pick all elements one by one
	for (int i = 1; i < n; i++) {
		int j = 0;
		for (j = 0; j < i; j++)
			if (arr[i] == arr[j])
				break;
		cout<<"Value of i= "<<i<< "j= "<<j<<endl;
		// If not printed earlier, then print it
		if (i == j)
			res++;
	}
	return res;
}

Optimal code
// Driver program to test above function
int main()
{
	int arr[] = { 10 , 10, 20,30};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << countDistinct(arr, n);
	return 0;
}








int main(){
    
    vector<int> num ={10, 20, 20, 10, 20};
    
    unordered_map<int,int> memo;
    
    for(auto i : num)
        memo[i]++;
    
    // for(auto i : memo)
    //     cout<<i.first<<"-"<<i.second<<endl;
    
    cout<<memo.size()<<endl;
        
}
