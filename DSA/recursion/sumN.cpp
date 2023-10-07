#include <iostream>

int sum(int n)
{
    if (n < 0)
        return 0;
    int s=sum(n-1);
    int result=s+n;

    return result;
}

int main()
{
    std::cout<<sum(5);
    return 0;
}