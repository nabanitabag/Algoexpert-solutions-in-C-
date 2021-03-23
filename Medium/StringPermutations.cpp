//leetcode medium

vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>> ans;
       permutationHelper(0, nums, ans);
       return ans;
   }

   void permutationHelper(int i, vector<int>& nums,  vector<vector<int>> &ans)
   {
       if(i==nums.size())
       {
           ans.push_back(nums);
           return;
       }
       for(int j = i ; j < nums.size() ; j++)
       {
           swap(nums[i], nums[j]);
           permutationHelper(i+1,nums, ans);
           swap(nums[i], nums[j]);
       }
   }

   // O(n*n!) time | O(n*n!) space
