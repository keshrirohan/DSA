    /*Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, return -1.


    Example 1

    Input: nums = [8, 8, 7, 6, 5]

    Output: 7

    Explanation:

    The largest value in nums is 8, the second largest is 7

    Example 2

    Input: nums = [10, 10, 10, 10, 10]

    Output: -1

    Explanation:

    The only value in nums is 10, so there is no second largest value, thus -1 is returned*/

    #include<iostream>
    #include<vector>
    #include<climits>

    using namespace std;



    int secondmax(vector<int> &arr){
        int n = arr.size();
        int maxval=arr[0],secondmax=-1;
        for(int i=1;i<n;i++){
            if(maxval>arr[i]){
        
                secondmax=max(arr[i],secondmax);

            }else if(maxval==arr[i]){
                maxval=arr[i];
            }
            else{
                secondmax=maxval;
                maxval=arr[i];
            
            }
        }
    
        return secondmax;
    }
    int main(){
        vector<int> arr={10, 5, 20, 20, 8,8};
        cout<<secondmax(arr);
    }