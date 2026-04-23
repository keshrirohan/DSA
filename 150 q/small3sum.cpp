class Solution {
  public:
    int countTriplets(int sum, vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        int count=0;
        int j,k;
        int n=arr.size();
        for(int i=0;i<n-2;i++){
          
            j=i+1;
            k=n-1;
            while(j<k){
                if(arr[j]+arr[k]<sum-arr[i]){
                    count+=k-j;
                   j++;
                }
                else{
                    k--;
                }
        }
         
            
        }
        return count;
        
    }
};