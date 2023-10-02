//Lecture : 24
// if num=10 ,  0. 1. 2 3 4. 5 6. 7 8. 9. 10.
//Consider 0 and 1 as a non prime number
//first we remove all the multiple of 2, then 3,5,7
class Solution {
public:
    int countPrimes(int n) {
        vector<bool> primenum(n+1,true);  //initially we have to consider each number is prime
        primenum[0]=primenum[1]=false;
        int count=0;
        
        for(int i=2;i<n;i++){
            if(primenum[i]){
                count++;
                for(int j=i*2;j<n;j+=i){
                    primenum[j]=0;
                }
            }
        }
        return count;
        
    }
};