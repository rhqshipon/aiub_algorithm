#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 4, 3, 1, 4, -2, 0};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    cout << "Print before sorting: ";
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    int maxVal = arr[0];
    for (int i = 1; i < arrSize; i++) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
        if (arr[i] < 0){
            cout << "Error: Negative number(s) detected! Cannot perform sorting operation." << endl;
            return 0;
        }

    }


    int countSize = maxVal + 1;
    int count[countSize];
    for (int i = 0; i < countSize; i++)
        count[i] = 0;


    for (int i = 0; i < arrSize; i++)
        count[arr[i]]++;


    int output[arrSize];
    int index = 0;
    for (int i = 0; i < countSize; i++) {
        while (count[i] > 0)    {
            output[index++] = i;
            count[i]--;
        }
    }

    for (int i = 0; i < arrSize; i++)   {
        arr[i] = output[i];
    }


    cout << "Sorted array: ";
    for (int i = 0; i < arrSize; i++)
        cout << arr[i] << " ";
    cout << endl;


    return 0;
}
