//Q leet 11 is  Container With Most Water
class Solution {
public:
    int maxArea(vector<int>& height) {
        int s=0;
        int e=height.size()-1;
        int cal;
        int minval=INT_MAX;
        int maxval=INT_MIN;
        while(s<e){
            minval = min(height[s],height[e]);
            cal=minval*(e-s);
            if(cal>maxval){
                maxval=cal;
            }
            if(height[s]>height[e]){
                e--;
            }else{s++;}
        }
        return maxval;
    }
};