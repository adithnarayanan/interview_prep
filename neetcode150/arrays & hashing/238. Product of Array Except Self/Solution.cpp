class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //[2, 3, 4, 5]
        //[2, 6, 24, 120]
        //[120, 60, 20, 5]

        vector <int> output(nums);
        int total = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            nums[i] = total * nums[i];
            total=nums[i];
           // std::cout << nums[i] << std::endl;
        }
        total = output[output.size()-1];
        for (int i = output.size() -2; i >= 0; i--) {
            output[i] = total * output[i];
            total = output[i];
            //std::cout<< output[i]<<std::endl;
        }

        output[0] = output[1];
        for (int i = 1; i < output.size() - 1; i++) {
            output[i] = nums[i-1] * output[i+1];
        }
        output[output.size()-1] = nums[nums.size()-2];
        return output;
    }
};