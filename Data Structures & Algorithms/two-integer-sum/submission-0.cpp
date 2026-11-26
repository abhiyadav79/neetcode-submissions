class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        //BRUTE FORCE
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return {-1,-1};

        //OPTIMIZED

        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++){
            int sum=nums[i];
            int required=target-sum;

            if(mp.find(required)!=mp.end()){
                return {mp[required],i};
            }

            mp[sum]=i;
        }
        return {-1,-1};
    }
};
