class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
       
        vector<string>v;
         if(nums.empty())return v;
        int i=0;
        string s="";
        for(i=0;i<nums.size()-1;i++){
            if(nums[i+1]==nums[i]+1){
                if(s.empty()){
                    s=s+to_string(nums[i]);
                }
                
            }
            else{
                if(!s.empty()){
                    s=s+"->"+to_string(nums[i]);
                    v.push_back(s);
                    s.clear();
                    
                }
                else{
                    s=s+to_string(nums[i]);
                    v.push_back(s);
                    s.clear();
                }
            }
        }
        int n=nums.size();
        if(i==n-1){
            if(!s.empty()){
                s+="->"+to_string(nums[n-1]);
                v.push_back(s);
            }
            else{
                s+=to_string(nums[n-1]);
                v.push_back(s);
                s.clear();
            }
        }
        return v;
    }
};