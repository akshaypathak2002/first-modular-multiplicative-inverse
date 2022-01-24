#include <iostream>
using namespace std;
//To find smallest multiplicative inverse 

int mod_multiplicative_inverse(int a, int m)
{
    for (int i = 1; i <= m; i++)
    {
        if ((a * i) % m == 1)
        {
            return i;
        }
    }
    return -1; // If not found
}
int main()
{
    int a;
    int m;
    cin >> a >> m;
    cout << mod_multiplicative_inverse(a, m) << endl;
    return 0;
}