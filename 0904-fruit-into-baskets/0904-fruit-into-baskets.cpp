class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int type1=-1,type2=-1;
        int maxl=0,curl=0;
        int consecutive_last_fruit = 0;

        for(int fruit: fruits){
            if(fruit == type1 || fruit == type2)    curl++;
            else    curl=consecutive_last_fruit+1;

            if(fruit==type2)    consecutive_last_fruit++;
            else{
                consecutive_last_fruit=1;
                type1=type2;
                type2=fruit;
            }
            maxl=max(maxl,curl);
        }
          
        return maxl;
    }
};