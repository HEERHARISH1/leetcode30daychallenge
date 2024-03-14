#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& n) {
        int result = 0;
        for (int num : n) {
            result ^= num;
        }
        return result;
    }
};
