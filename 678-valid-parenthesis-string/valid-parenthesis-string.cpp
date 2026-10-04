class Solution {
public:
    bool checkValidString(string s) {

        //TLE
      
    //   stack<int>x;
    //   stack<int>star;

    //   for(int i=0;i<s.size();i++){

    //     if(s[i]=='('){
    //         x.push(i);
    //     }else if(s[i]=='*'){
    //         star.push(i);
    //     }
    //     else{
    //         if(!x.empty()){
    //             x.pop();
    //         }else if(!star.empty()){
    //             star.pop();
    //         }else{
    //             return false;
    //         }
    //     }
    //   }
    //   while(!x.empty() && !star.empty()){

    //     if(x.top()>star.top()){
    //         return false;
    //     }
    //   }
    //   return x.empty();

    // Using greedy  

    int low=0;
    int high=0;

    for(char ch:s){

        if(ch=='('){
            low++;
            high++;
        }else if(ch==')'){
            low--;
            high--;
        }else{
            low--;
            high++;
        }

        if(low<0){
            low=0;
        }
        if(high<0){
            return false;
        }
    }
    return low==0;
    }
};