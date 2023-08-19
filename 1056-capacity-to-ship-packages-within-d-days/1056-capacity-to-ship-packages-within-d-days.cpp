class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
         int sum=0;

     for(int i=0;i<weights.size();i++){
        sum+=weights[i];
    }
    int start=0,end=sum;
    int mid=(start+end)/2;
    int ans=-1;
    
    while(start<=end){
        if(ispossible(weights,weights.size(),days ,mid)){
            ans=mid;
           end=mid-1; 
        }else{
            start=mid+1;
        }
       mid=(start+end)/2;  
    }
    return ans;
    }


    bool ispossible(vector<int>& arr,int n,int m,int mid){
  
    int weightsum=0;
    int daycount=1;
   
    for(int j=0;j<n;j++){
        if((weightsum+arr[j])<=mid)
        {
            weightsum+=arr[j];
        }else
        {
            daycount++;
            if(daycount>m || arr[j]>mid){
                return false;
            }
            weightsum=arr[j];
        }
    }
    return true;
}
};