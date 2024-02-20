#include<iostream>
using namespace std;

int main() {
    int sizeOfArray;
    cout<<"Enter Number of Array Element: ";
    cin>>sizeOfArray;
    int arr[sizeOfArray];

    // Taking input from the user
    cout << "Enter " << sizeOfArray << " numbers for the array:" << endl;
    for (int i = 0; i < sizeOfArray; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }

    int biggerValue = arr[0];
    int lowerValue = arr[0];

    for (int i = 0; i < sizeOfArray; i++) {
        if (biggerValue < arr[i]) {
            biggerValue = arr[i];
        }
        if (lowerValue > arr[i]) {
            lowerValue = arr[i];
        }
    }

    cout << "Bigger Value is: " << biggerValue << endl;
    cout << "Lower Value is: " << lowerValue << endl;

    return 0;
}
