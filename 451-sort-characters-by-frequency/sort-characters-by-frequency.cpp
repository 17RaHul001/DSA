class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char,int>mp;

        vector<pair<char,int>>v;

        for(char ch:s){
            mp[ch]++;
        }

        for(auto val:mp){

            v.push_back({val.first,val.second});
          }

          sort(v.begin(),v.end(), [](pair<char,int>a ,pair<char,int>b){
            return a.second > b.second;
            });

            string ans= "";

            for(auto val:v){
            for(int i=0;i<val.second;i++){
                ans+=val.first;
            }
          }
          return ans;
    }
};