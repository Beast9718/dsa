class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int output = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'a')
                output += 1;
            else
                output -= 1;
        }
        return abs(output);
    }
};