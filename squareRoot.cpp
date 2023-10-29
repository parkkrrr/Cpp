#include <bits/stdc++.h>
int squareRoot(int a)
{
    if (a < 2)
        return a;
    else if (a == 2)
        return 1;

    int max{};
    for (int i = 2; i <= a; i++)
        if ((i * i) <= a)
            max = i;

    if (max != 0)
        return max;
    return 0;
}
