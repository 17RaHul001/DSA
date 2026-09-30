class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        if(k==nums.size()){
            return nums;
        }

        unordered_map<int ,int>mp;

        vector<int>ans;

        for(int i=0;i<nums.size();i++){

            mp[nums[i]]++;

        }

        for(int i=0;i<k;i++){

            int freq=0;
            int element=0;

            for(auto val:mp){

                if(val.second>freq){

                    freq=val.second;
                    element=val.first;
                }
            }
            ans.push_back(element);
            mp[element]=0;

        }

        return ans;
    }
};