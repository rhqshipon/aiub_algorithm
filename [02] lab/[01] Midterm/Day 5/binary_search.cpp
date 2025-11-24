#include <iostream>
using namespace std;

int main()  {
    int sizee;
    cout << "Enter array size: ";
    cin >> sizee;
    int arri[sizee];
    for (int i = 0; i < sizee; i++) {
        cin >> arri[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    int high = sizee - 1;
    int low = 0;
    int result = -1;

    while (low <= high)   {
        int middle = low + (high - low) / 2;
        int value = arri[middle];
        cout << "Middle: " << middle << endl;

        if (value == target) {
            result = middle;
            break;
        }
        else if (value < target) high = middle - 1;
        else low = middle + 1;
    }

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
