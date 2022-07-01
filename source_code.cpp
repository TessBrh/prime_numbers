#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int limit;
    cout << "Input a max limit for the prime numbers: \n";
    cin >> limit;
    cout << "\n";
    for (int x = 1, result = 1; result <= limit; x++) {
        int y = x-1;
        result = pow(x,2) - pow(y,2);
        cout<<result<<endl;
    }
    return 0;
}
