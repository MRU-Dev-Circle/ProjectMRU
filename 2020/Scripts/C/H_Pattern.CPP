
/*

1     4
2     3
3     2
4 3 2 1
3     2
2     3
1     4

//*/

#include <iostream>
using namespace std;
 
// Function to print the desired
// Alphabet H Pattern
void alphabetPattern(int N)
{
 
    // Declaring the values of left,
    // middle, right side
    int left = 0, middle = N - 1, right = N + 1;
 
    // Main Row Loop
    for (int row = 0; row < 2 * N - 1; row++) {
 
        // Condition for the left Values
        if (row < N)
            cout << ++left;
        else
            cout << --left;
 
        // Loop for the middle values
        for (int col = 1; col < N - 1; col++) {
 
            // Condition for the middleValues
            if (row != N - 1)
 
                // Two spaces for perfect alignment
                cout << " "
                     << " ";
            else
                cout << " " << middle--;
        }
 
        // Condition for the right Values
        if (row < N)
            cout << " " << --right;
        else
            cout << " " << ++right;
        cout << endl;
    }
}
 
int main()
{
    // Size of the Pattern
    int N = 4;
 
    alphabetPattern(N);
 
    return 0;
}
