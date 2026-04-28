class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector <int> vars;
        int size = nums.size();
        for (int i = 0; i < size; i++)    
        {
            for (int j = i + 1; j < size; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    vars.push_back(i);
                    vars.push_back(j);
                }
            }
        }
        return vars;
    }
};
