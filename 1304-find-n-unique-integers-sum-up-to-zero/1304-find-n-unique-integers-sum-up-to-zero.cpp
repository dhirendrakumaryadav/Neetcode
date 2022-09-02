class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>a(n);
        if(n%2==0){
            a[0]=-(n)/2;
            a[n-1]=n/2;
             for(int i=1;i<n/2;i++){
                 a[i]=a[i-1]+1;
                 a[n-i-1]=a[n-i]-1;
             }
        }
        else{
            a[0]=-n/2;
            a[n/2]=0;
            a[n-1]=n/2;
            for(int i=1;i<n/2;i++){
                a[i]=a[i-1]+1;
                a[n-i-1]=a[n-i]-1;
            }
        }
        return a;
    }
};