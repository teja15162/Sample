class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;

        // if numRows = 1, then just return [1]
        if(numRows == 1) {
            vector<int> temp = {1};
            triangle.push_back(temp);
            return triangle;
        }

        for(int i=0;i<numRows;i++) {
            vector<int> temp;
            long long ans = 1;
            R
            for(int j=0;j<=i;j++) {
                if(j == 0) {
                    temp.push_back(ans);
                    continue;
                }

                ans *= (i - j +1);
                ans /= j;
                temp.push_back(ans);
            }

            triangle.push_back(temp);
        }
