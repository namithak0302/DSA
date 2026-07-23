class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size(),low=0,high=n-1;
        // int mid=(low+high)/2;
        // int mini=nums[mid];
        // int smin=nums[mid];
        // while(low<mid){
        //     if(nums[low]<mini){
        //         mini=nums[low];
        //     }
        //     low++;
        // }
        //  while(high>mid){
        //     if(nums[high]<smin){
        //         smin=nums[high];
        //     }
        //     high--;
        // }
        // return min(mini,smin);
        while(low<high){
            int mid=(low+high)/2;
            if(nums[mid]>nums[high]){
                low=mid+1;
            }
            else{
                high=mid;
            }
        }
        return  nums[low];
     }
};