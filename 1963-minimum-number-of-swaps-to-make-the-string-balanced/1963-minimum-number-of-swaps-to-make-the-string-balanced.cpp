class Solution {
public:
    int minSwaps(string str) {
        
        int n = str.size();
        
        int opening = 0;
        
        for(int i = 0; i < n; i++)
        {
            if(str[i] == '[')
            {
                opening++;
            }
            else
            {
                if(opening > 0)
                {
                    opening--;
                }
            }
        }
        
        return (opening + 1) / 2;
    }
};