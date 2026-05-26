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