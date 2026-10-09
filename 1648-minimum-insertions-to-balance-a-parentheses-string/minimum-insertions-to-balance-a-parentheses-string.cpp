class Solution {
public:
    int minInsertions(string s) {
        
      int ans=0;
      int bracket=0;

      for(char ch:s){

        if(ch=='('){

            if(bracket%2==1){
                ans++;
                bracket--;
            }
                bracket+=2;
        
        }

            else{
                bracket--;

            if(bracket<0){
                ans++;
                bracket=1;
            }
        }
      }
      return ans+bracket;
    }
};