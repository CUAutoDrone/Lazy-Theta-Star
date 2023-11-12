#include <iostream>

using namespace std;

int main() {
    int x, f1, f2, next;
    cout << "How many terms?";
    cin >> x;

    f1 = 1; 
    f2 = 1;

    cout << "Fibonacci sequence: ";

    if (x >= 1){
            cout << f1;
    }
    if (x >= 2){
            cout << ", " << f2;
    }
    
    for (int i = 3; i <= x; ++i){
        next = f1 + f2;
        f1 = f2;
        f2 = next;
        cout << ", " << next;
    }
    return 0;
}

