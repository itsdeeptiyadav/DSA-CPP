#include <iostream>
#include <vector>
using namespace std;
bool searchmatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int column = matrix[0].size();
    int s = 0;
    int e = row * column - 1;
    int mid = s + ((e - s) / 2);
    while (s <= e)
    {
        int element = matrix[mid / column][mid % column];
        if (element == target)
        {
            return 1;
        }
        if (element > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return 0;
}
int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << boolalpha;
    cout << searchmatrix(arr, 25);
}