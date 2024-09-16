#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of rows and columns (n m): ";
    cin >> n >> m;

    int array[n][m];
    
    cout << "Enter the elements of the " << n << "x" << m << " array:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> array[i][j];
        }
    }

    // Flatten the 2D array into a 1D array
    int size = n * m;
    int temp[size];
    int index = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            temp[index++] = array[i][j];
        }
    }

    // Sort the 1D array
    sort(temp, temp + size);

    // Put the sorted values back into the 2D array
    index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            array[i][j] = temp[index++];
        }
    }

    // Print the sorted 2D array
    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
