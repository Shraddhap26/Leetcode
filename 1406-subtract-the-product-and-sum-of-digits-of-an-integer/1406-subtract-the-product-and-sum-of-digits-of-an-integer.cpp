class Solution {
public:
    int subtractProductAndSum(int n) {
        int d,sum=0,pr=1;
        while(n!=0){
         d=n%10;
         sum =sum+d;
         pr=pr*d;
         n=n/10;
        }
        return (pr-sum);
    }
};