class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length()!=0 && s.find(part) < s.length()){
            s.erase(s.find(part),part.length());
            // Position of the first character to be erased.and Number of characters to erase(here s.find method gives the first index of substring occurence and part.length gives the length of substring)
        }
        return s;
    }
};