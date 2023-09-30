class Solution {
public:
    int compress(vector<char>& chars) 
    {
        int i=0;
        int index=0;
        
        int len=chars.size();
        while(i<len)
        {
         
           int j=i+1;
            while(j<len && chars[i]==chars[j])
            {
                j++;
            }

            chars[index++]=chars[i];
            int count=j-i;

            if(count>1)
            {
               string str=to_string(count);
               for(char ch:str)
               {
                   chars[index++]=ch;
               }
            }
            i=j;
        }
         return index;
    }
   
};