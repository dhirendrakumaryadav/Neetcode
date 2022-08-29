class Solution {
public:
    int get(int n,vector<int>&memo){
       
        memo[0]=1;
        memo[1]=1;
        if(memo[n]!=-1)return memo[n];
        return memo[n]=get(n-1,memo)+get(n-2,memo);
    }
    int climbStairs(int n) {
        vector<int>memo(n+1,-1);
        return get(n,memo);
   
    }
};