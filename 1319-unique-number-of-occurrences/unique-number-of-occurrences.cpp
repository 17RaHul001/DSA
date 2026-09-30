class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
    
    unordered_map<int,int>mp;
    
    for(int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }

        set<int>s;

        for(auto val : mp) {

            if(s.count(val.second)) {
                return false;
            }

            s.insert(val.second);
        }

        return true;
    }
};