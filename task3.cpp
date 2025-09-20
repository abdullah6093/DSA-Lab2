
#include <iostream>
using namespace std;

void analyze_pointer(int* ptr) {
    cout << "the memory adress pointed by pointer in analyze pointer function = " << ptr;
    cout << endl;
    cout << "value store at pointer in analyze pointer function = " << *ptr;
    cout << endl;
}

int main() {
    int iValue = 5;
    int* ptr = &iValue;
    cout << "the adress of vlaue in main = " << ptr;
    cout << endl;
    analyze_pointer(ptr);

	cout << "--------------------------" << endl;


    int* myInt = new int;

    // Assign value
    *myInt = 42;

    // Pass it to analyze_pointer
    analyze_pointer(myInt);

    // Free the allocated memory
    delete myInt;
}