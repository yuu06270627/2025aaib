//week13-4.cpp
//Leetcode 3335
//"a"�|��"b" "b"�|��"c"
class Solution {
public:
    int a[200000]={};
    int helper(int t){
        if(a[t] >0) return a[t];
        if(t<26) return 1;
        a[t] = helper(t-26)+helper(t-26+1) %1000000007;
        return a[t];
    }
    int lengthAfterTransformations(string s, int t) {
        int ans = 0;
        for(char c : s){//c++���y�k �i�H��C�Ӧr��Ū�X��
            ans =(ans + helper(t+c-'a')) %1000000007;
        }
        return ans;
    }
};
