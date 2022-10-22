//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int mod=100000000;
  int get(int n,vector<int>&dp){
      if(n==0)return 1;
      if(dp[n]!=-1)return dp[n];
      int l=get(n-1,dp)%mod;
      int r=0;
      if(n>1)r=get(n-2,dp)%mod;
      return dp[n]=(l+r)%mod;
  }
    int fillingBucket(int n) {
        // code here
        vector<int>dp(n+1,-1);
        return get(n,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
// } Driver Code Ends