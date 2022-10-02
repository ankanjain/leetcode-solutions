class Solution
{
private:
    bool isValid(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            return 1;
        }
        return 0;
    }

    char toLower(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        {
            return ch;
        }
        return ch - 'A' + 'a';
    }
    bool checkPalidrome(string s)
    {
        int start = 0;
        int n = s.length();
        int end = n - 1;

        while (start <= end)
        {
            if (s[start] != s[end])
            {
                return false;
            }
            else
            {
                start++;
                end--;
            }
        }
        return true;
    }

public:
    bool isPalindrome(string s)
    {

        string temp = "";

        for (int i = 0; i < s.length(); i++)
        {
            if (isValid(s[i]))
            {
                temp.push_back(s[i]);
            }
        }

        for (int j = 0; j < temp.length(); j++)
        {
            temp[j] = toLower(temp[j]);
        }

        return checkPalidrome(temp);
    }
};