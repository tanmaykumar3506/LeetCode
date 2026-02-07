class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int r= INT_MIN;
        sort(nums.begin(),nums.end());
        for (int x:nums){
            if (r==x){
                return true;
            }r=x;
        }return false;
    }
};