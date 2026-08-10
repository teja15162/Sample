class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        if(numRows == 1) {
            vector<int> temp = {1};
            ans.push_back(temp);
            return ans;
        }

        for(int i=0;i<=numRows;i++) {
            vector<int> temp;
            long long ans = 1;
            
            for(int j=0;j<=i;j++) {
                if(j == 0) {
                    temp.push_back(ans);
                    continue;
                }

                ans *= (i - j);
                ans /= j;
                temp.push_back(ans);
            }

            ans.push_back(temp);
        }

        return ans;
    }
};