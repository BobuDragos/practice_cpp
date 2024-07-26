


#include <iostream>
using namespace std;



// recursive sum of all natural numbers from 1 to n
int rec_sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + rec_sum(n - 1);
}


int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int sum = 0;

    // 1 + 2 + 3 + 4 + 5 + ... + n
    // sum of all natural numbers from 1 to n 
    // not efficient O(n) 
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << sum << endl;

    // Gauss sum formula
    // 1 + 2 + 3 + 4 + 5 + ... + n = n * (n + 1) / 2
    // O(1)
    sum = n * (n + 1) / 2;
    cout << sum << endl;


    // recursive sum of all natural numbers from 1 to n
    // O(n)
    cout << rec_sum(n) << endl;

    return 0;
}

















