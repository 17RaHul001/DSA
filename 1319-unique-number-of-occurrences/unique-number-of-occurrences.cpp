class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
    
    unordered_map<int,int>freq;;

    for(int i = 0; i < arr.size(); i++) {
            freq[arr[i]]++;
        }

        set<int>s;

        for(auto val:freq) {

            if(s.count(val.second)) {
                return false;
            }

            s.insert(val.second);
        }

        return true;
    }
};