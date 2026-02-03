class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        unordered_map<int, vector<int>> mt;
         
        for (int i=0; i<m;i++){
            for (int j=0;j<n;j++){
                mt[i-j].push_back(mat[i][j]);
            }
        }

        for (auto &it : mt){
            sort(it.second.begin(),it.second.end());
        }

        for (int i=m-1; i>=0;i--){
            for (int j=n-1;j>=0;j--){
                mat[i][j]=mt[i-j].back();
                mt[i-j].pop_back();
            }    
        }return mat;
    }
};