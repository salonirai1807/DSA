#include <iostream>
using namespace std;

long long int binarySqrt(int x)
{
    // Using Binary Search

    int s = 0;
    int e = x;
    long long int ans = -1;

    while (s <= e){
        long long int mid = s + (e - s) / 2;

        long long int square = mid * mid;

        if (square == x) {
            return mid;
        }

        else if (square < x) {
            ans = mid;
            s = mid + 1;
        }

        else {
            e = mid - 1;
        }
    }
    return ans;
}

double exactSqrt(int x, int precision, int intSol){
    double factor = 1;
    double ans = intSol;

    for (int i = 0; i < precision; i++){
        factor = factor / 10;
        for (double j = ans; j * j <= x; j += factor) {
            ans = j;
        }
    }
    return ans;
}

int main(){
    int x;
    cout << "Enter a number : ";
    cin >> x;

    int intSol = binarySqrt(x);
    cout << "Answer is : " << exactSqrt(x, 3, intSol);

    return 0;
}