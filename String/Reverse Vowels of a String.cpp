class Solution
{
public:
    string reverseVowels(string s)
    {
        auto answer = s;
        int i = 0, j = answer.size() - 1;
        
        unordered_set<char> vowels {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'}; 
        
        while (i < j)
        {
            while (i < j && vowels.find(answer[i]) == end(vowels))
                i++;
            while (i < j && vowels.find(answer[j]) == end(vowels))
                j--;
            if (i < j)
                swap(answer[i++], answer[j--]);
        }
        
        return answer;
    }
};
