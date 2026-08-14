class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int frequency=1;
        int ans=nums[0];
        for(int i=1 ;i<nums.size();i++){
           
            if(nums[i]==nums[i-1]){
                frequency++;
            }
            else{
                frequency=1;
                ans=nums[i];
            }

            if(frequency>n/2){
                return ans;
            }

        }
        return ans;
    }
};