class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
    //     int low=0,high=n-1;
    //     while(low<high){
    //         int mid=(low+high)/2;
    //         if((mid%2==0&&nums[mid]==nums[mid+1])||(mid%2==1&&nums[mid]==nums[mid-1]))
    //         {
    //             low=mid+1;
    //         }
    //         else{
    //             high=mid;
    //         }
    //     }
    //     return nums[low];
    // }
    unordered_map<int,int> ans;
    for(int i=0;i<n;i++){
        ans[nums[i]]++;
    }
    for(auto it:ans){
        if(it.second==1){
            return it.first;
        }
    }
    return -1;}
};