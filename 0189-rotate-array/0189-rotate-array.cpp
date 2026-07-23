class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // int n=nums.size();
        //  int index=0;
        //  int temp[n];
        // k=k%n;
        //  for(int i=n-k;i<n;i++){
        //     temp[index++]=nums[i];
        //  }
        //  for(int i=0;i<n-k;i++){
        //     temp[index++]=nums[i];
        //  }
        //  for(int i=0;i<n;i++){
        //     nums[i]=temp[i];
        //  }
        int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.begin()+(n-k));
        reverse(nums.begin()+(n-k),nums.end());
        reverse(nums.begin(),nums.end());
    }
};