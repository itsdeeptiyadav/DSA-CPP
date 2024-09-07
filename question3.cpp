#include<iostream>
#include<vector>
#include<string>
using namespace std;
void convertOpposite(string& str)
{
    int ln = str.length();
 
    // Conversion according to ASCII values
    for (int i = 0; i < ln; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            // Convert lowercase to uppercase
            str[i] = str[i] - 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            // Convert uppercase to lowercase
            str[i] = str[i] + 32;
    }
}
 
// Driver function
int main()
{
    string str = "GeEkSfOrGeEkS";
 
    // Calling the Function
    convertOpposite(str);
 
    cout << str;
    return 0;
}