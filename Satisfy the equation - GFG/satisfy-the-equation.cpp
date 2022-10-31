//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:


vector<int> satisfyEqn(int A[], int N) {

        // code here

    map<pair<int,int>,int> mp;

    vector<int> v;

    for(int i=0;i<N;i++)

    {

        for(int j=i+1;j<N;j++)

        {

            int sum=A[i]+A[j];

             mp[{i,j}]=sum;

        }

    }

    for(auto it: mp)

    {

        for(auto itr:mp)

        {

            if(it.second==itr.second && it.first.first!=itr.first.first && it.first.second!=itr.first.second && it.first.second!=itr.first.first)

            {

              

                    v.push_back(it.first.first);

                    v.push_back(it.first.second);

                    v.push_back(itr.first.first);

                    v.push_back(itr.first.second);

                    return v;

            }

            

        }

    }

                    v.push_back(-1);

                    v.push_back(-1);

                    v.push_back(-1);

                    v.push_back(-1);

                    return v;

    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        vector<int> ptr = ob.satisfyEqn(A,N);
        
        cout<<ptr[0]<<" "<<ptr[1]<<" "<<ptr[2]<<" "<<ptr[3]<<endl;
    }
    return 0;
}
// } Driver Code Ends