#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>


#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"

// https://leetcode.com/problems/distribute-candies/

// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        if (candies.empty()) return 0;
        unsigned long total = 0;
        set<int> seen;
        for (int i = 0; i < candies.size(); ++i) {
            if (!seen.count(candies[i])) {
                ++total;
                seen.insert(candies[i]);
            }
        }
        total = min(total, candies.size() / 2);
        return total;
    }
};

void test1() {
    vector<int> v1{1,1,2,2,3,3};

    cout << "3 ? " << Solution().distributeCandies(v1) << endl;

    vector<int> v2{1,1,2,3};

    cout << "2 ? " << Solution().distributeCandies(v2) << endl;
}

void test2() {

}

void test3() {

}