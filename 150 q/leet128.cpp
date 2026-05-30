// used priority queue and tc is O(nlogn) and sc is O(n)
// better approach is to use hashset and tc is O(n) and sc is O(n)
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq;
        int first, second;
        int maxlcs = 1;
        int lcs = 1;
        
        if (nums.size() <= 1) {
            return nums.size();
        }

        for (int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
        }
        first = pq.top();
        cout << pq.top();
        pq.pop();
        while (!pq.empty()) {
            second = pq.top();
            pq.pop();
            if (first == second) {
                continue;
            } else if (first + 1 == second) {
                lcs++;
            } else {
                maxlcs = max(lcs, maxlcs);
                lcs = 1;
            }
            first=second;
        }
        maxlcs=max(lcs,maxlcs);
        return maxlcs;
    }
};



//optimal approach using hashset 
    class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            unordered_set<int> mp(nums.begin(),nums.end());//uses to store the unique elements of the array and allows for O(1) average time complexity for using find() function
            int curr;
            int len=0,ans=0;
            for(int num : mp){  
                if(mp.find(num-1)==mp.end()){// finding the continuous lowest among every number 
                    curr=num;
                    len=1;
                    while(mp.find(curr+1)!=mp.end()){// finding the continuous highest among every number
                        curr++;
                        len++;
                    }
                    ans=max(ans,len);// comparing if there is two consecutive sequence then we will take the maximum of them
                }
                
            }
            return ans;
        }
    };