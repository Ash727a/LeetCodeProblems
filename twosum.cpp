class Solution {
public:

    std::vector<int> twoSum(const std::vector<int>& nums, int target) 
    {
        std::unordered_map<int,int> valmap; 
        std::vector<int> sumindx; 

        for(int i = 0; i < nums.size(); i++) // init the map 
        {
            valmap.insert(std::make_pair(nums[i],i)); 
        }

        for(int i = 0; i < nums.size(); i++)
        {
            // find the index make sure its not the same index as the current index
            if(valmap.find(target - nums[i]) != valmap.end() && valmap[target - nums[i]] != i)
            {
                sumindx.push_back(valmap[target - nums[i]]); 
                sumindx.push_back(i); 

                break; 
            }
            
        }

        return sumindx; 

    }
};
