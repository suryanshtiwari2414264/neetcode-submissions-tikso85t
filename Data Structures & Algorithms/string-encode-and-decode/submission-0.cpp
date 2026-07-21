class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";

        for (const string& s : strs) {
            encoded += to_string(s.size()) + "#" + s;
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;

        while (i < s.size()) {
            int j = i;

            // Find '#'
            while (s[j] != '#') {
                j++;
            }

            // Get length
            int length = stoi(s.substr(i, j - i));

            // Move to actual string start
            j++;

            // Extract string
            result.push_back(s.substr(j, length));

            // Move pointer
            i = j + length;
        }

        return result;
    }
};