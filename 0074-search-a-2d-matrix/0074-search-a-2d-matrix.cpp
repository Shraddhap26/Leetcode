class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int start=0;
        int end=col*row-1;
        int mid=start+(end-start)/2;

        while(start<=end){
            int element=matrix[mid/col][mid%col]; //here we are taking column size
                                                  //first to get row index of mid element we performed division 
                                                   //sencond to get column index of mid element we performed modulus
            if(element==target){
                return true;
            }else if(element<target){
                start=mid+1;

            }else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
       return false; 
    }
};