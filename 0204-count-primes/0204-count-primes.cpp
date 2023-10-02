//Lecture : 24
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