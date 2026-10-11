class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        // unordered_map<int,int>freq;

        // for(int val:nums1){
        //     freq[val]++;
        // }

        
        // for(int val:nums2){
        //     if(freq.find(val)!=freq.end()){

        //         return val;
            
        //      }
        // }


        // return -1;

        int st1=0;
        int st2=0;

        while(st1<nums1.size() && st2<nums2.size()){

            if(nums1[st1]==nums2[st2]){
                return nums1[st1];
            }else if(nums1[st1]<nums2[st2]){
                st1++;
            }else{
                st2++;
            }
        }
        return -1;
    }
};