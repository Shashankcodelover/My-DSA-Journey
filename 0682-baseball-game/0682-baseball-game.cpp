class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack <int> sum;
        int s,summ=0,s1;
        for(string ch: operations){
            if( ch=="+"){
                    s1=sum.top();
                    sum.pop();
                    s=s1+sum.top();
                    sum.push(s1);
                    sum.push(s);
            }
            else if(ch == "D"){
                    sum.push(2*sum.top());
            }
            else if(ch == "C"){
                    sum.pop();
            }
            else{
                sum.push(stoi(ch));
            }
        }
        
        while(!sum.empty()){
            summ+=sum.top();
            sum.pop();
        }
        return summ;


    }
};