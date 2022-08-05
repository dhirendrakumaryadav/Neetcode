class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        int i=0;
        int j=n.size()-1;
        vector<int>ans;
        while(i<=j){
            if((n[i]+n[j])>target)j--;
            else if((n[i]+n[j])<target)i++;
            else {
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }
        }
        return ans;
    }
};