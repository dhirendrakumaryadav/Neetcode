class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        int m=matrix.size();
        int n=matrix[0].size();

        int res=INT_MIN;
        
        for(int l=0;l<n;l++){
            vector<int>sum(m);
            for(int r=l;r<n;r++){
                for(int i=0;i<m;i++)
                      sum[i]+=matrix[i][r];
                set<int>s={0};
                int r_s=0;
            for(int q:sum){
                r_s+=q;
                auto it=s.lower_bound(r_s-k);
                if(it!=end(s)){
                    res=max(res,r_s-*it);
                }
                s.insert(r_s);
            }
            }
            
          
        }
        return res;
        
        }
};