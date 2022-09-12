class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int ans=0;
        sort(tokens.begin(),tokens.end());
        int i=0;
        int j=tokens.size()-1;
        int s=0;
        while(i<=j){
            if(power>=tokens[i]){
                s+=1;
                power=power-tokens[i];
                ans=max(ans,s);
                i++;
            }
            else if(s>0){
                s-=1;
                power+=tokens[j];
                j--;
            }
            else break;
        }
        return ans;
    }
};