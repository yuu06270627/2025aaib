//week13-4.cpp
//Leetcode 3335
//"a"會變"b" "b"會變"c"
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
        for(char c : s){//c++的語法 可以把每個字母讀出來
            ans =(ans + helper(t+c-'a')) %1000000007;
        }
        return ans;
    }
};
