//week05-4.cpp
//LeetCode 3191. Minimum Operations to Make Binary Array Elements Equal to One I
//�n���X�� �T�Ӽ�½�P �~������ܦ�1
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0;//�n½�P½�X��

        for(int i=0; i<nums.size()-2; i++){
            if(nums[i]==0){
                ans++;
                nums[i+1] = 1 - nums[i+1];
                nums[i+2] = 1 - nums[i+2];
            }
        }
        int N = nums.size();
        if(nums[N-1]==0|| nums[N-2]==0)return -1;
        return ans;
    }
};
