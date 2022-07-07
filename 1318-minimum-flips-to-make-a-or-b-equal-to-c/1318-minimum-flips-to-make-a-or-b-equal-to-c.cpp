class Solution {
public:
    int minFlips(int a, int b, int c) {
       int cnt=0;
        while(a||b||c){
           int temp1=a%2;
            int temp2=b%2;
            int temp3=c%2;
            // cout<<temp1<<" "<<temp2<<" "<<temp3<<endl;
            if(temp3==0&&temp1!=0&&temp2!=0) cnt+=2;
            else if(temp3==1&&temp1!=1&&temp2!=1) cnt+=1;
            else if(temp3==0&&(temp1==1||temp2==1)) {
                
                cnt++;}
            a/=2;
            b/=2;
            c/=2;
        }
        return cnt;
    }
};