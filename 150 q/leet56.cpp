//approach by me 

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int m = intervals.size();
        vector<int> x ={};
        int n = intervals[0].size();
        int lst = n - 1;
        int first = 0;
        vector<vector<int>> ans;
        for (int i = 0; i < m - 1; i++) {
            if (intervals[i][lst] >= intervals[i + 1][first]) {
                
              intervals[i][lst] = max(intervals[i][lst], intervals[i+1][lst]);
                intervals[i + 1].erase(intervals[i + 1].begin(),
                                       intervals[i + 1].end());
            }
        }
        for (auto g : intervals) {
            if (g == x) {
                continue;
            }
            ans.push_back(g);
        }
        return ans;
    }
};

//approach using yt 
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        
        int  first=0;
        int lst=1;
        vector<vector<int>> finalans;
        sort(intervals.begin(),intervals.end());
        vector<int> ans=intervals[0];
        
        
        for(int i=0;i<intervals.size();i++){
           
                if(ans[lst]>=intervals[i][first]){
                    ans[lst]=max(ans[lst],intervals[i][lst]);
                    
                }else{
                    finalans.push_back(ans);
                    ans=intervals[i];
                }

            
        }
        finalans.push_back(ans);
        return finalans;
    }
};