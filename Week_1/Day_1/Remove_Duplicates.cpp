class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=1;
        int count=1;
        for(i=0;i<nums.size()-1;i++)
        {
            if(nums[i]!=nums[i+1])
            {
                count++;
                nums[j]=nums[i+1];
                j++;
            }
        }
        return count;
    }
};
