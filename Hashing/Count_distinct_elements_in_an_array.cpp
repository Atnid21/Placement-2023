Count distinct elements in an array


Input :   arr[] = {10, 20, 20, 10, 30, 10}
Output : 3
There are three distinct elements 10, 20 and 30.


Code : 

int main(){
    
    vector<int> num ={10, 20, 20, 10, 20};
    
    unordered_map<int,int> memo;
    
    for(auto i : num)
        memo[i]++;
    
    // for(auto i : memo)
    //     cout<<i.first<<"-"<<i.second<<endl;
    
    cout<<memo.size()<<endl;
        
}
