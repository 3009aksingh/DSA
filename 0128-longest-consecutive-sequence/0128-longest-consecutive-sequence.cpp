class Solution {
public:
    int findLength(std::unordered_map<int, bool>& hm, int k) {
        int length = 0;
        while (hm.find(k) != hm.end()) {
            ++length;
            ++k;
        }
        return length;
    }
    int longestConsecutive(vector<int>& nums) {
        std::unordered_map<int, bool> hm;

        // Populate the hash map
        for (int num : nums) {
            hm[num] = true;
        }

        // Mark numbers that are not the start of a sequence
        for (int num : nums) {
            if (hm.find(num - 1) != hm.end()) {
                hm[num] = false;
            }
        }

        // Find the maximum length of consecutive sequences
        int maxLength = 0;
        for (const auto& pair : hm) {
            if (pair.second) {
                maxLength = std::max(maxLength, findLength(hm, pair.first));
            }
        }

        return maxLength;
    }
};