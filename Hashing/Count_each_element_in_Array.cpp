Count each element in array

Approach-1 : O(n2)

#include<bits/stdc++.h>
using namespace std;


int main(){
    
    vector<int> num ={1,2,1};
    
    vector<bool>visited(num.size(),false);
    
    
    for(int i=0;i<num.size();++i){
        
        if(visited[i] == true)
            continue;
        
        
        int count=1;
       for(int j=i+1;j<num.size();++j){
         if(num[i]==num[j]){
            visited[j] = true;
            count++;
       }
       
       }
       cout<<num[i]<<"-"<<count<<endl;
        
    }
    
 }



Approach-2 : Hashing 


#include<bits/stdc++.h>
using namespace std;


int main(){
    
    vector<int> num ={1,2,1};
    
    map<int,int>memo;
    
    for(int i=0;i<num.size();++i)
        memo[num[i]]++;
    
    
    for(auto i : memo)
        cout<<i.first<<" "<<i.second<<endl;
    
}