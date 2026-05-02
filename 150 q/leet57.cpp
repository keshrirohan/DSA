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


//final apprpoach
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {
        int lst = 1;
        int frst = 0;
       
        vector<vector<int>> finalans;
        for (auto interval : intervals) {
            if (interval[lst] < newInterval[frst]) {
                finalans.push_back(interval);
            } 
            else if (newInterval[lst] < interval[frst]) {
                finalans.push_back(newInterval);
                newInterval=interval;
            }
            else {
                newInterval[frst]= min(interval[frst],newInterval[frst]);
                newInterval[lst]= max(interval[lst],newInterval[lst]);
            }
        }
        finalans.push_back(newInterval);
        return finalans;
    }
};