class Solution {
public:
    bool isAnagram(string s, string t)
    {
        if(s.size() != t.size())
        {
            return false;
        }
    for(int i=0;i<s.size();i++)
    {
        for(int j=0; j<(int)s.size()-i-1;j++)
        {
            if(s[j]>s[j+1])
            {
                swap(s[j],s[j+1]);
            }
        }
    }
    for(int i=0;i<t.size();i++)
    {
        for(int j=0; j<(int)t.size()-i-1;j++)
        {
            if(t[j]>t[j+1])
            {
                swap(t[j],t[j+1]);
            }
        }
    }
    if(s == t){
        return true;

    }
    return false;

    }
};