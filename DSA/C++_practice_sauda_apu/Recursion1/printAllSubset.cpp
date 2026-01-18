#include <iostream>
#include <vector>
using namespace std;

void printSubsets(vector<int>& arr, vector<int>& subset, int index)
{
    // Base case: reached end of array
    if (index == arr.size())
    {
        cout << "{ ";
        for (int x : subset)
            cout << x << " ";
        cout << "}" << endl;
        return;
    }

    // Case 1: Exclude current element
    printSubsets(arr, subset, index + 1);

    // Case 2: Include current element
    subset.push_back(arr[index]);
    printSubsets(arr, subset, index + 1);

    // Backtrack
    subset.pop_back();
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<int> subset;

    printSubsets(arr, subset, 0);
    return 0;
}
