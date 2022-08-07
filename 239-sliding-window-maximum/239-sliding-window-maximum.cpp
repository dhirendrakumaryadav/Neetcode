class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        deque<int>q;
        vector<int>ans;
        int s=0;
        int i=k;
        q.push_back(nums[0]);
        for(int e=1;e<k;e++){
            while(!q.empty()&&nums[e]>q.back()){
                q.pop_back();
            }
           q.push_back(nums[e]);
        }
         ans.push_back(q.front());
        for(;i<n;++i,++s){
            if(nums[s]==q.front()){
                q.pop_front();
            }
            while(!q.empty()&&nums[i]>q.back()){
                q.pop_back();
            }
            q.push_back(nums[i]);
            ans.push_back(q.front());
        }
        return ans;
    }
};