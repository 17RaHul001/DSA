class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {

        // int n=temperatures.size();    //TLE

        // vector<int>ans(n,0);

        // for(int i=0;i<n;i++){
            
        //     for(int j=i+1;j<n;j++){

        //         if(temperatures[i]<temperatures[j]){

        //              ans[i]=j-i;

        //             break;
        //         }
        //     }
        // }
        // return ans;

        int n=temp.size();

        vector<int>ans(n,0);

        stack<int>st;

        for(int i=0;i<n;i++){

            while(!st.empty() && temp[i]>temp[st.top()]){

                int idx=st.top();

                st.pop();

                ans[idx]=i-idx;

            }

            st.push(i);
        }
        return ans;
    }
};