//uppercase to lower case

class Solution {
public:
    string toLowerCase(string s) {
        for(char &a:s){
            if(a>='A' && a<='Z')
                a+=32;
        }
        return s;
        
    }
};
//lowercase to uppercase
class Solution {
public:
    string toLowerCase(string s) {
        for(char &a:s){
            if(a>='A' && a<='Z')
                a-=32;
        }
        return s;
        
    }
};
