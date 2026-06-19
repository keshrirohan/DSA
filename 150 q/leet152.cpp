// brute force approach 
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxval=INT_MIN;
        int product=1;
        for(int i=0;i<nums.size();i++){
            product=1;
            for(int j=i;j<nums.size();j++){
                product *=nums[j];
                maxval=max(product,maxval); 
            }
        }
        return maxval;
        
    }
};


// optimal solution
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pref=1,suff=1;
        int maxpref=INT_MIN,maxsuff=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(pref==0) pref=1;
            if(suff==0) suff=1; 

            pref*=nums[i];
            maxpref=max(maxpref,pref);
            suff*=nums[nums.size()-1-i];
            maxsuff=max(maxsuff,suff);
            cout<<pref<<" " <<maxpref<<" " <<suff<<" " <<maxsuff<<" " <<endl;
        }

        return max(maxpref,maxsuff);
    }
};