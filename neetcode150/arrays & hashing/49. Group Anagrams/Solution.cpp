class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ordered_string_to_list;
        for (string s : strs) {
            string k = s;
            std::sort(k.begin(), k.end());
            ordered_string_to_list[k].push_back(s);
        }

        vector<vector<string>> ret;
        for (auto kv : ordered_string_to_list) {
            ret.push_back(kv.second);
        }

        return ret;
    }
};