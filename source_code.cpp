#include <iostream>

using namespace std;

int main() {
    int limit;
    cout << "Type a limit: ";
    cin >> limit;
    cout << "\n";
    for (int x = 1; x <= limit; x++) {
        for (int y = 2; y <= limit; y++) {
            if (x != y){
                if (x%y == 0) {
                    break;
                }
            }
            else if (x == y) {
                cout << x <<"\n";
                break;
            }
        }
    }
    
    return 0;
}
