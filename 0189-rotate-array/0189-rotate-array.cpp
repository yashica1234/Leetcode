class Solution {
public: 
     void reverse(vector<int>& nums, int left, int right)
    {
        while(left < right)
        {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }

    void rotate(vector<int>& nums, int k)
    {
        int n = nums.size();

        k = k % n;

        // Reverse first n-k elements (A)
        reverse(nums, 0, n-k-1);

        // Reverse last k elements (B)
        reverse(nums, n-k, n-1);

        // Reverse the entire array
        reverse(nums, 0, n-1);
    }



};