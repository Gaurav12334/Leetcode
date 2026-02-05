class Solution {
public:
    string intToRoman(int num) {
        string roman;
        vector<string>notations = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        vector<int>values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

        for(int pos = 0; num > 0; pos++)
        {
        //     if(num >= values[pos])
        //     {
        //         int count = num/values[pos];
        //         while(count--)
        //         {
        //             roman += notations[pos];
        //         }
        //         num = num%values[pos];
        //     }

            while(num >= values[pos])
            {
                roman += notations[pos];
                num -= values[pos];
            }
        }

        return roman;


        
    }
};

