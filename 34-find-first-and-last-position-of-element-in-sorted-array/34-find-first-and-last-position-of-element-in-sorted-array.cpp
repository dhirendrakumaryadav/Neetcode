class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int t) {
        vector<int>v(2,-1);
        int i=0;
        int j=nums.size()-1;
        while(i<=j){
            int m=(i+j)/2;
            if(nums[m]>t){
                j=m-1;
            }
            else if(nums[m]<t){
                i=m+1;
            }
            else{
                if(m==0||nums[m]!=nums[m-1]){v[0]=m;
                                            break;
                                            }
                else{
                    j=m-1;
                }
            }
        }
        i=0;
        j=nums.size()-1;
          while(i<=j){
            int m=(i+j)/2;
            if(nums[m]>t){
                j=m-1;
            }
            else if(nums[m]<t){
                i=m+1;
            }
            else{
                if(m==nums.size()-1||nums[m]!=nums[m+1]){v[1]=m;break;}
                else{
                    i=m+1;
                }
            }
        }
        return v;
    }
};