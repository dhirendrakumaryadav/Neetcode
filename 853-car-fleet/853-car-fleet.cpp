class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector<pair<int,double>>cars;
        for(int i=0;i<n;i++){
            double time=double(target-position[i])/speed[i];
            cars.push_back({position[i],time});
        }
        int res=0;
        sort(cars.begin(),cars.end());
        double mt=0.0;
        for(int i=n-1;i>=0;i--){
            double t=cars[i].second;
            if(t>mt){
                mt=t;
                res++;
            }
        }
        return res;
    }
};