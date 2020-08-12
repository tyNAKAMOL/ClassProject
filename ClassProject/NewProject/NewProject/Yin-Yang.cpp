#include <iostream>
using namespace std;

int main() {
    int n, i, j, k, l;
    cout << "Enter Input : ";
    cin >> n;

    i = 1;
    while (i <= n + 1) {
        j = i;
        while (j <= n + 1) {
            cout << ".";
            j++;
        }
        k = 1;
        while (k <= i) {
            cout << "#";
            k++;
        }
        l = 1;
        while (l <= n + 2) {
            if ((i == 1 || i == n + 2) || (l == 1 || l == n + 2))cout << "+";
            else cout << "#";
            l++;
        }
        i++;
        cout << endl;
    }
    i = 1;
    while (i <= 2 * n + 4) {
        if (i <= n + 2)cout << "#";
        else cout << "+";
        i++;
    }cout << endl;
    i = 1;
    while (i <= 2 * n + 4) {
        if (i <= n + 2)cout << "#";
        else cout << "+";
        i++;
    }cout << endl;
    i = n + 1;
    while (i >= 1) {
        j = 1;
        while (j <= n + 2) {
            if ((i == 1 || i == n + 2) || (j == 1 || j == n + 2))cout << "#";
            else cout << "+";
            j++;
        }
        k = 1;
        while (k <= i) {
            cout << "+";
            k++;
        }
        l = i;
        while (l <= n + 1) {
            cout << ".";
            l++;
        }
        i--;
        cout << endl;
    }
    return 0;
}