#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key;

    cout << "Enter value to search: ";
    cin >> key;

    int found=-1;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == key) {
          
            found = i;
            
        }
    }
      cout << "Found at index: " << found << endl;

    if (!found) {
        cout << "Not found!" << endl;
    }

    return 0;
}
