#include <iostream>
using namespace std;
int main() {
    int rows, collums;

    
    cout << "Enter number of rows (maximum of 3): ";
    cin >> rows;
    while (rows < 1 || rows > 3) {
   cout << "Invalid input. Please enter a value between 1 and 3: ";
       cin >> rows;
    }

    cout << "Enter number of columns (maximum of 3): ";
    cin >> collums;
    while (collums < 1 || collums > 3) {
        cout << "Invalid input. Please enter a value between 1 and 3: ";
       cin >> collums;
    }

    
    double** array = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new double[collums];
    }
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < collums; ++j) {
            array[i][j] = i * collums + j; 
        }
    }

 
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < collums; ++j) {
            cout << "array[" << i << "][" << j << "] = " << array[i][j] << endl;
        }
    }

    
    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
