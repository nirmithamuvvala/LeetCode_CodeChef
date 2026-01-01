// LeetCode 26 - Remove Duplicates from Sorted Array
// Approach: Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)
//what i did is first i thought of uisng set from stl but it is not necessary as it takes O(logn) for each insertion and for each number it takes O(nlogn)
//we it is already sorted we require one pointer(treat thrm as two indices) to trverse (scan elements)
//another to maintain necessary condition and arrangement of the array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;

        int i = 0;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[i] != nums[j]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};
