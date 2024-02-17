#include <iostream>
#include <math.h>
using namespace std;

// Complement of a Number.

int main()
{
    int n;
    cout<<"Enter a No. : ";
    cin>>n;

    int m = n;
    int mask = 0;

    // Edge Case
    if (n == 0)
        return 1;

    while (m != 0){
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    int ans = (~n) & mask;

    cout<<"Complement of "<<n<<" is : "<<ans;

    return ans;
}
