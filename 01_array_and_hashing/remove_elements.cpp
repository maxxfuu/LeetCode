class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int counter = 0; 

        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) { 
                swap(nums[i], nums[counter]); 
                counter++;
            }
        }
        return counter; 
    }
};


