class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        for(int x : nums2) {
            nums1.push_back(x);
        }

        sort(nums1.begin(),nums1.end());

        bool odd = false;

        if(nums1.size() % 2 != 0) {
            odd = true;
        }

        double med = 0;

        if(!odd) {
            int idx = nums1.size() / 2;

            med = nums1[idx] + nums1[idx-1];
            med /= 2;

            return med;
        }

        return nums1[nums1.size() / 2];
    }
};