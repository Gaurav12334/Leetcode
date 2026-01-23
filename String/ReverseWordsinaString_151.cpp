class Solution {
public:
    string reverseWords(string s) {
        vector<string>words;
        string temp = "";
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != ' ')
                temp += s[i];
            else 
            {
                if(!temp.empty())
                {
                    words.push_back(temp);
                    temp = "";
                }
            }
        }

        if(!temp.empty())
            words.push_back(temp);

        int i = 0;
        int j = words.size() - 1;
        while( i < j)
        {
            swap(words[i], words[j]);
            i++;
            j--;
        }

        string ans = "";
        for(int i = 0; i < words.size() - 1; i++)
        {
            ans += words[i] ;
            ans += ' ';
        }
        ans += words[words.size() - 1];

        return ans;
        
    }
};
