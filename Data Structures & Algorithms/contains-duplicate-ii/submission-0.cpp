class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> window;

        for (int i = 0; i < nums.size(); i++) {
            
            // Remove element outside window
            if (i > k) {
                window.erase(nums[i - k - 1]);
            }

            // Check duplicate in window
            if (window.count(nums[i])) {
                return true;
            }

            // Add current element
            window.insert(nums[i]);
        }

        return false;
    }
};