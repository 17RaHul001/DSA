class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int>freq;

        for(int val:nums1){
            freq[val]++;
        }

        // int mini=INT_MAX;
        for(int val:nums2){
            if(freq.find(val)!=freq.end()){

                return val;
            // mini=min(mini,val);
             }
        }


        // if(mini==INT_MAX){
        //     return -1;
        // }
        // return mini;

        return -1;
    }
};