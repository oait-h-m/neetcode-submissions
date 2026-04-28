class Solution {
public:
    string newStr(string text, int size)
    {
        string newText;
        for (int i = 0; i < size; i++) 
        {
            if (text[i] >= 'a' && text[i] <= 'z')
                text[i] = text[i] - 32;
        }
        int j = 0;
        for (int i = 0; i < size; i++)
        {
            if (isalpha(text[i]) || isdigit(text[i]))
            {
                newText.push_back(text[i]);
                j++;
            }
        }
        return newText;
    }
    bool isPalindrome(string s) 
    {
        int size = s.length();
        s = newStr(s, size);
        size = s.length();
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != s[--size])
                return false;
        }
        return true;
    }
};
