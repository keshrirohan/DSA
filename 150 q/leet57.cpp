//tried
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<int> ans=intervals[0];
        vector<vector<int>> finalans;
        int frst=0,lst=1;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<intervals.size()-1;i++){
            if(intervals[i][lst]>newInterval[frst] && newInterval[lst] >intervals[i+1][frst]){
                ans[lst]=max(ans[lst],intervals[i][lst]);
            }
            else {
                finalans.push_back(ans);
                ans=intervals[i];
            }

        }
        finalans.push_back(ans);
        return finalans;
    }
};