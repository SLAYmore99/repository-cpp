#include <bits/stdc++.h>
using namespace std;

double Series(int m)
{
    double sum = 0.0;
    for (int i = 1; i <= m; ++i)
    {
        if (i % 2 == 0)
            sum -= (1 / pow(i, i));
        else
            sum += (1 / pow(i, i));
    }
    return sum;
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        int m;
        cout << "enter a number : ";
        cin >> m;
        cout << Series(m);
    }

    cout << Series(*argv[1] - 48) << endl; 
    return 0;
}
