#include <iostream>
#include <vector>

using namespace std;

// 283. Move Zeroes
// https://leetcode.com/problems/move-zeroes/description/
// 时间复杂度: O(n)
// 空间复杂度: O(n)

class Solution {
public:

    void moveZeroes(vector<int> &nums) {
        vector<int> nonZeroElements;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i]) {
                nonZeroElements.push_back(nums[i]);
            }
        }
        for (int i = 0; i < nonZeroElements.size(); ++i) {
            nums[i] = nonZeroElements[i];
        }
        for (int i = nonZeroElements.size(); i < nums.size(); ++i) {
            nums[i] = 0;
        }
    }
};

int main() {

    int arr[] = {0, 1, 0, 3, 12};
    vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));

    Solution().moveZeroes(vec);

    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    cout << endl;

    return 0;
}