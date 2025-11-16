#include <iostream>
using namespace std;

template<typename T>
void mergeFunc(T leftArray[], T rightArray[], T mainArray[], int leftSize, int rightSize) {
    int i = 0, l = 0, r = 0;

    // Check conditions for merging
    while (l < leftSize && r < rightSize) {
        if (leftArray[l] < rightArray[r]) {
            mainArray[i] = leftArray[l];
            i++;
            l++;
        }
        else {
            mainArray[i] = rightArray[r];
            i++;
            r++;
        }
    }

    while (l < leftSize) {
        mainArray[i] = leftArray[l];
        i++;
        l++;
    }

    while (r < rightSize) {
        mainArray[i] = rightArray[r];
        i++;
        r++;
    }
}

template<typename T>
void mergeSort(T mainArray[], int arraySize) {
    if (arraySize <= 1) { return; } // Base case

    int middle = arraySize / 2;
    T* leftArray = new T[middle];
    T* rightArray = new T[arraySize - middle];

    // Populate left and right arrays
    for (int i = 0; i < middle; i++) {
        leftArray[i] = mainArray[i];
    }
    for (int i = middle; i < arraySize; i++) {
        rightArray[i - middle] = mainArray[i];
    }

    mergeSort(leftArray, middle);
    mergeSort(rightArray, arraySize - middle);
    mergeFunc(leftArray, rightArray, mainArray, middle, arraySize - middle);

    delete[] leftArray;
    delete[] rightArray;
}

int main() {
    int mainArray[] = {7, 2, 9, 4, 3, 8, 6, 1};
    int arraySize = sizeof(mainArray) / sizeof(mainArray[0]);

    mergeSort(mainArray, arraySize);

    for (int i = 0; i < arraySize; i++) {
        cout << mainArray[i] << " ";
    }
    cout << endl;

    return 0;
}
