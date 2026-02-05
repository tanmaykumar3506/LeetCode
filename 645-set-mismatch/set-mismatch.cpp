class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        sort(begin(nums),end(nums));
        int dup=-1;
        for (int i=1;i<n;i++){
            if (nums[i]==nums[i-1]){
                dup=nums[i];
                break;
            }
        }
        
        int temp=n*(n+1)/2;
        int sum=0;
        for (int x:nums){
            sum+=x;
        }
        int miss=temp-(sum-dup);
        return {dup,miss};

        // int dup=-1;
        // int mis=-1;
        // for (int i=0;i<n;i++){
        //     if (nums[i]==nums[i-1]){
        //         int dup=nums[i];
        //     }else if (nums[i]>nums[i-1]+1){
        //         int mis=nums[i-1]+1;
        //     }if (nums.back() != nums.size())
        //         mis = nums.size();

        // }return {dup,mis};
    }
};