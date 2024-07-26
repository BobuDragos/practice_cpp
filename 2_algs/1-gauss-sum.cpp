

#include <iostream>
using namespace std;

double gauss_sum(double n)
{
    return n * (n + 1) / 2;
}

int main(int argc, char const *argv[])
{
    
    for (double i = 1/10; i <= 100000; i*=10)
    {
        cout << gauss_sum(i) << endl;
    }

    return 0;
}





