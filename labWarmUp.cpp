#include<iostream>
using namespace std;

int main() {
    int arraySize;
    cout<<"Enter Array Element Number: ";
    cin>>arraySize;
    int myNumbers[arraySize];
    int sum = 0;


    cout << "Enter " << arraySize << " numbers:" << endl;
    for (int i = 0; i < arraySize; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> myNumbers[i];
    }


    for (int i = 0; i < arraySize; i++) {
        sum += myNumbers[i];
    }


    double average = double(sum) / arraySize;

    cout << "The average of the array elements is: " << average << endl;

    return 0;
}
