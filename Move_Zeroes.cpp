class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int m = 0;
        int n = a.size();
        for(int i = 0 ;i<n;i++){
            if(a[i]!=0){
                swap(a[i],a[m]);
                m++;}}}
};