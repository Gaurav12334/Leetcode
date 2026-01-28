class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0;
        int write = 0;
        while(i < n)
        {
            int count = 0;
            char curr = chars[i];
            while( i < n && chars[i] == curr)
            {
                count++;
                i++;
            }
            chars[write] = curr;
            write++;

            if(count > 1)
            {
                string cnt = to_string(count);
                for(char c : cnt)
                {
                    chars[write++] = c;
                }

            }
        }
        return write;
    
        
    }
};
