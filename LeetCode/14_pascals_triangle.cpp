#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        res.push_back({1});
        for (int i = 0; i < numRows - 1; i++) {
            vector<int> Row = {0};
            Row.insert(Row.end(), res.back().begin(), res.back().end());
            Row.push_back(0);
            vector<int> row;
            for (int j = 0; j < Row.size() - 1; j++) {
                row.push_back(Row[j] + Row[j + 1]);
            }
            res.push_back(row); 
        }
        return res;
    }
};