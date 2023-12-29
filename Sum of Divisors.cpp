#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007; // 10^9 + 7

// Function to calculate the sum of divisors of a number
long long sumOfDivisors(long long n)
{
    long long sum = 0;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            sum = (sum + i) % MOD;
            if (i != n / i)
            {
                sum = (sum + n / i) % MOD;
            }
        }
    }
    return sum;
}

int main()
{
    long long n;
    cin >> n;

    long long result = 0;
    for (long long i = 1; i <= n; i++)
    {
        result = (result + sumOfDivisors(i)) % MOD;
    }

    cout << result << endl;

    return 0;
}
// code ta bujte hobe, problem code both ai bujte hobe
