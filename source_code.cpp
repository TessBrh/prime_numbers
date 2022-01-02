#include <iostream>

using namespace std;

int checkN(int x, int y) {
    int z = x%y;
    return z;
}

int main() {
    int limit = 100;
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
