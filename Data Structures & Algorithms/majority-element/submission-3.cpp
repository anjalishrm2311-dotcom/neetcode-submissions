class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int frequency=0;
        int n =nums.size();
        for(int i=0 ;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    frequency++;
                }
            }
            if(frequency>n/2){
               return nums[i];
            }
        }
    }
};