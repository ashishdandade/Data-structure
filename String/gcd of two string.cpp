class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        int n1 = str1.length();
        int n2 = str2.length();
        int g = gcd(n1, n2);
        string s = "";
        if (str1 + str2 == str2 + str1)
        {
            s = str1.substr(0, g);
        }
        return s;
        
    }
};
