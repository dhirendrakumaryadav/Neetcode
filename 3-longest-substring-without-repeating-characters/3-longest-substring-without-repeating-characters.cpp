class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        
         int n = str.size();
        int longest = 0;
        unordered_map<char, int> mp;
        int left = 0;
        for(int right = 0; right < n; right++)
        {
            // increment the count of curr character
            mp[str[right]]++;
            // run below loop till count of curr character is greater than 1
            while(left <= right && mp[str[right]] > 1)
            {
                mp[str[left]]--; 
                left++;
            }
            // calculate the curr_length
            
            int curr_length = right - left + 1;
            
            // update the longest
            
            longest = max(longest, curr_length);
        }
        
        return longest;
        
        
        
       /*unordered_map<char,int>m;
        int left=0;
        int l=0;
        for(int r=0;r<s.size();r++){
            m[s[r]]++;
            while(left<=r&&m[s[r]]>1){
                m[s[l]]--;
                left++;
            }
            int st=r-left+1;
            l=max(st,l);
        }
        return l;*/
    }
};