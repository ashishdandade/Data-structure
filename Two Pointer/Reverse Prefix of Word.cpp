class Solution {
public:
    string reversePrefix(string word, char ch) {
        for(int i = 0; i<word.length(); i++) {
            if(word[i] == ch) {
                reverse(begin(word), begin(word)+i+1);
                break;
            }
        }
        return word;
    }
};

////short code using find 
class Solution {
public:
    string reversePrefix(string word, char ch) {
        reverse(begin(word),begin(word)+word.find(ch)+1);
            return word;
        
    }
};
