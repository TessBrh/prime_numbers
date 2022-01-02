#include <iostream>

using namespace std;

int main() {
    int limit;
    cout << "Type a limit: ";
    cin >> limit;
    cout << "\n";
    for (int x = 1; x <= limit; x++) {
        //cout << "x is equal to: " <<x <<"\n";
        for (int y = 2; y <= limit; y++) {
            //cout <<"y is equal to: " <<y<< "\n";
            if (x != y){
                if (x%y == 0) {
                    //cout << x << "\n";
                    //int y = 1;
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
