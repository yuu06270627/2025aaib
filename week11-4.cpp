//week11-4.cpp
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans =0; //�j���ح�ans�O0
        for(int i=0;i<nums.size();i++){
            int now = nums[i];//�{�b�n�B�znums[i]
            //Q:�p�󪾹Dnums[i]�O�X���?
            int digits= 0;//���X���
            while(now>0){
                digits++;
                now = now/10;
            }

            if(digits%2==0) ans++;//�j���,���ƪ���ƬO,ans++
        }
        return ans;
    }
};
