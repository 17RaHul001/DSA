class Solution {
public:
    int longestSubstring(string s, int k) {
        
    //     unordered_map<char,int>mp;
    //     int ans=0;
    //     for(char ch:s){
    //         mp[ch]++;
    //     }
    //     for(auto val:mp){
    //         if(val.second>=k){
    //             ans +=val.second;
    //         }
    //     }
    //     return ans;
    // }   //wrong

    int n=s.size();
    if(s.size()<k){
        return 0;
    }

    vector<int>freq(26,0);

    for(char ch:s){
        freq[ch-'a']++;
    }

    for(int i=0;i<s.size();i++){
        if(freq[s[i]-'a']< k){

            int left=longestSubstring(s.substr(0,i),k);
            int right=longestSubstring(s.substr(i+1),k);

            return max(left,right);
        }
    }
        return s.size();
    }
};