#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, i = 1, diff = 2;
    cin >> n;

    // printing first half.
    while (i <= n / 2) {
        // printing spaces.
        int spaces = (n / 2) - i;
        while (spaces) {
            cout << " ";
            spaces--;
        }

        // printing 1st triangle.
        int j = 1;
        spaces = (n / 2) - i;
        while (j <= (n / 2) - spaces) {
            cout << "*";
            j++;
        }

        // printing 2nd triangle
        int k = 1;
        while (k <= i - 1) {
            if (i != 1) {
                cout << "*";
            }
            k++;
        }
        cout << endl;
        i++;
    }

    // printing second half.
    while (i != n + 1) {
        // printing spaces.
        int spaces = i - (n / 2) - 1;
        while (spaces) {
            cout << " ";
            spaces--;
        }

        // printing 3rd triangle
        spaces = i - (n / 2) - 1;
        int j = 1;
        while (j <= (n / 2) - spaces) {
            cout << "*";
            j++;
        }
        // printing 4th triangle
        int k = 1;
        while (k <= i - diff) {
            if (i != n) {
                cout << "*";
            }
            k++;
        }
        cout << endl;
        diff += 2;
        i++;
    }

    return 0;
}