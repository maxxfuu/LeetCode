class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.size() - 1; 
        int count = 0; 
        for(int i = size; i >= 0; i--) { 
            if(s[i] == ' ') { 
                size--; 
            } else {
                break; 
            }
        } 

        for(int j = size; j >= 0; j--) { 
            if(s[j] != ' ') {
                count++; 
            } else { 
                break; 
            }
        } 

        return count; 
    }
}