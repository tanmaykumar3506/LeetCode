class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int indx=-1;
        for (int i=n-1;i>0;i--){
            if (nums[i]>nums[i-1]){
                indx=i-1;
                break;
            }
        }
        if (indx!=-1){
            int swap_indx=indx;
            for (int i=n-1;i>indx;i--){
                if (nums[i]>nums[indx]){
                    swap_indx=i;
                    break;

                }
            }swap(nums[swap_indx],nums[indx]);

        }
        reverse(nums.begin()+indx+1,nums.end());
        

        // next_permutation(nums.begin(),nums.end());
    }
};