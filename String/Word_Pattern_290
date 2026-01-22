class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int count = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != ' ' && (i == 0 || s[i - 1] == ' '))
                count++;
        }
        if(pattern.size() != count) return false;

        vector<string>words;
        string temp="";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] != ' ')
                temp+=s[i];
            else {
                 if(!temp.empty())
            {
                words.push_back(temp);
                temp="";
            }
            }
           
        }
        if(!temp.empty())
            words.push_back(temp);

        unordered_map<char, string>mpp1;
        unordered_map<string, char>mpp2;

        for(int i = 0; i < pattern.size(); i++)
        {
            char c = pattern[i];
            string t = words[i];

            if(mpp1.count(c) && mpp1[c] != t)
                return false;
             if(mpp2.count(t) && mpp2[t] != c)
                return false;
            
            mpp1[c] = t;
            mpp2[t] = c;
        }
        return true;
    }
};
