class Solution {
public:

    string encode(vector<string>& strs) {
        string result;

        for (string& s : strs) {
            result += to_string(s.size()) + "#" + s;
        }

        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;

        int i = 0;

        while (i < s.size()) {

            // Find '#'
            int j = i;

            while (s[j] != '#') {
                j++;
            }

            // Get length
            int len = stoi(s.substr(i, j - i));

            // Move past '#'
            j++;

            // Extract exactly len characters
            result.push_back(s.substr(j, len));

            // Move to next encoded string
            i = j + len;
        }

        return result;
    }
};