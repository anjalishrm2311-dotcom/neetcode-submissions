class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n =nums.size();
        for(int i=0 ;i<nums.size();i++){
            int frequency=0;
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