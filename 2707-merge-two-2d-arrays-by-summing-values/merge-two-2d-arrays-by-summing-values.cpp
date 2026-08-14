class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1,
                                    vector<vector<int>>& nums2) {

        vector<vector<int>> ans;

        int i = 0;
        int j = 0;

        while (i < nums1.size() && j < nums2.size()) {

            int id1 = nums1[i][0];
            int id2 = nums2[j][0];

            if (id1 == id2) {

                ans.push_back({id1, nums1[i][1] + nums2[j][1]});

                i++;
                j++;

            } else if (id1 < id2) {

                ans.push_back(nums1[i]);
                i++;

            } else {

                ans.push_back(nums2[j]);
                j++;
            }
        }

        // Remaining elements from nums1
        while (i < nums1.size()) {
            ans.push_back(nums1[i]);
            i++;
        }

        // Remaining elements from nums2
        while (j < nums2.size()) {
            ans.push_back(nums2[j]);
            j++;
        }

        return ans;
    }
};