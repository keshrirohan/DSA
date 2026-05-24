// tried my best 
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int maxval=INT_MIN;
        int maxid=0;
        set<int> val(nums.begin(),nums.end());
        for(auto i:val){
            if(i>maxval){
                maxval=i;
            
            }
        }
        cout<<maxval;
        val.erase(maxval);
        maxval=INT_MIN;
        for(auto i:val){
            if(i>maxval){
                maxval=i;
            }
        }
        return maxval;
    }
};




// this is the optimal approach using min heap the time complexity is O(nlogk) and space complexity is O(k)
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int ,vector<int>, greater<int>> h;
        for (int i = 0; i < k; i++) {
            h.push(nums[i]);
        }
        for (int i = k; i < nums.size(); i++) {
           if(nums[i]>h.top()){
            h.pop();
            h.push(nums[i]);
           }
        }
        return h.top();
    }
};