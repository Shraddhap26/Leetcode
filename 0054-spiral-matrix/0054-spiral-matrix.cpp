class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int> arr;

        int startrow=0;
        int startcol=0;
        int endrow=row-1;
        int endcol=col-1;

        int total=col*row;
        int count=0;
        

        while(count<total){
            for(int index=startcol; count < total && index <= endcol;index++){
                arr.push_back(matrix[startrow][index]);
                count++;
            }
            startrow++;

             for(int index=startrow; count < total && index <= endrow;index++){
                arr.push_back(matrix[index][endcol]);
                count++;
            }
            endcol--;
            

             for(int index=endcol;count < total && index >=startcol;index--){
                arr.push_back(matrix[endrow][index]);
                count++;
            }
            endrow--;

             for(int index=endrow ; count<total && index>=startrow ;index--){
                arr.push_back(matrix[index][startcol]);
                count++;
            }
            startcol++;
        }
        return arr;
    }
};