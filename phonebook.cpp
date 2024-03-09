#include <iostream>
#include <vector>
#include <string>
using namespace std;
void solve(vector<string> &ans, string digit, vector<string> mapping, int index, string output)
{
    if (index >= digit.length())
    {
        ans.push_back(output);
        return;
    }
    int number = digit[index] - '0';
    string value = mapping[number];
    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(ans, digit, mapping, index + 1, output);
        output.pop_back();
    }
}
vector<string> lettercombination(string digit)
{
    vector<string> ans;
    if (digit.length() == 0)
    {
        return ans;
    }
    string output = "";
    int index = 0;
    vector<string> mapping = {" ", " ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(ans, digit, mapping, index, output);
    return ans;
}
int main()
{
    string s;
    cout << "enter the string" << endl;
    cin >> s;
    vector<string> ans = lettercombination(s);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}