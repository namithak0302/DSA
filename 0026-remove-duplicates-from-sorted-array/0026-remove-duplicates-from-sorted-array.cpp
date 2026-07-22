class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        // for(int j=1;j<n;j++){
        //     if(nums[i]!=nums[j]){
        //         i++;
        //         nums[i]=nums[j];
        //     }
        // }
        // return i+1;
        set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
       int index=0;
        for(auto it:st){
            nums[index]=it;
            index++;
        }
        return index;
    }
};