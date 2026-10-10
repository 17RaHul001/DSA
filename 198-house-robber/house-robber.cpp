// class Solution {
// public:
//     int rob(vector<int>& nums) {
        
//         int n=nums.size();
//         int ans=0;
//         for(int i=1;i<=n;i++){
//             if(i%2==1){
//                 ans+=nums[i];
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int rob(vector<int>& nums) {

        int n = nums.size();

        if(n == 1){
            return nums[0];
        }

        int prev2 = nums[0];
        int prev1 = max(nums[0], nums[1]);

        for(int i = 2; i < n; i++){

            int curr = max(prev1, prev2 + nums[i]);

            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};