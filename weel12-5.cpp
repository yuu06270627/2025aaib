//week12-5.cpp
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int N = nums.size();//�}�C�j�p
        vector<int> ans(N);//c++���}�C �j�p�]��N
        //�D�ػ�for�j�� ��Ҧ���i
        for(int i=0; i<N; i++){
            ans[i] = nums[nums[i]];
        }



        return ans;
    }
};
