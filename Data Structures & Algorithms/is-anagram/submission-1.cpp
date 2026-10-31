class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s == t) return true;
        else if(s.length() > t.length()) return false;
        else 
        {
            for(int i = 0;i < s.length();++i)
            {
                for(int j = 0;j < t.length();++j)
                {
                    if(s[i] == t[j])
                    {
                        t.erase(t.begin() + j);
                        break;
                    }
                }
            }
        }
        return t.empty();
    }

};
