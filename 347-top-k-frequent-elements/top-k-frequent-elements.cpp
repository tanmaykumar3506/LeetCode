class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int, int> mp;
        for (int &num:nums){
            mp[num]++;
        }

        vector<vector<int>> bucket(n+1);
//Index = freq
//value = elements
//bucket[i] = elements having i frequency
        for (auto &it:mp){
            int element=it.first;
            int freq=it.second;

            bucket[freq].push_back(element);
        }
        vector<int> result;
        for (int i=bucket.size()-1;i>=0 && result.size()<k;i--){
            for(int x:bucket[i]){
                result.push_back(x);
                if (result.size()==k){
                    break;
                }
            }
        }return result;
    }


};