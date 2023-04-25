#include <iostream>
using namespace std;

long comb(long n, long k)
{
    if (k == 0)
        return 1;
    else if (k == n)
        return 1;
    else if (k > n)
        return 0;
    else 
        return comb(n - 1, k - 1) + comb(n - 1, k);
}

int main()
{
    long n, k;
    cout << "Enter n and k (integer) with a space between them: ";
    cin >> n >> k;
    cout << n << " choose " << k << " = " << comb(n, k) << endl;
    return 0;
}