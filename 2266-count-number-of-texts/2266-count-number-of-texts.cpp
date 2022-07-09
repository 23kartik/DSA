
class Solution {
public:vector<int> a, b;
    int countTexts(string s) {
        int maxi=1e5,mod=1e9+7;
       int a[100007]={0};
        int b[100007]={0};
        a[1]=1,a[2]=2,a[3]=4;
        b[1]=1,b[2]=2,b[3]=4,b[4]=8;
        for(int i=4; i<100007; i++)
        {
            a[i] = ((a[i-1] + a[i-2]) % mod + a[i-3]) % mod;
        }
         for(int i=5; i<100007; i++)
        {
            b[i] = ((((b[i-1]%mod + b[i-2]%mod) % mod + b[i-3]%mod) % mod) + b[i-4]%mod) % mod;
        }
        int n = s.size();
        long long int ans = 1;
        long long cnt = 1;
        int i = 0;
        while(i+1 < n)
        {
            while(i+1 < n && s[i] == s[i+1]) 
            {
                cnt++;
                i++;
            }
           
            if(s[i] != '7' && s[i] != '9')
                ans = (ans * a[cnt]) % mod;
            else
                ans = (ans * b[cnt]) % mod;
            
            cnt = 1;
            i++;
        }
        return ans%mod;

    }
};