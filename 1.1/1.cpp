#include <string>
#include <iostream>

using namespace std;

class Solution {
    void rotate(string& str, int s, int e) {
        int len = (e - s) >> 1;
        for (int i = 0; i < len; ++i) {
            char tmp = str[e - 1 - i];
            str[e - 1 - i] = str[s + i];
            str[s + i] = tmp;
        }
    }
public:
    void rotateString(string& str, int cnt) {
        rotate(str, 0, cnt);
        rotate(str, cnt, str.size());
        rotate(str, 0, str.size());
    }
};

int main() {
    Solution solu;
    string str = "abcdefg";
    cout << str << endl;
    solu.rotateString(str, 3);
    cout << str << endl;
}
