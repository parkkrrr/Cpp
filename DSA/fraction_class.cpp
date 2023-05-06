#include <bits/stdc++.h>

#include <iostream>

#include <algorithm>

using namespace std;

class Fraction
{
public:
    int numerator;
    int denominator;

    Fraction(int num, int den)
    {
        this->numerator = num;

        this->denominator = den;
    }

    void add(Fraction obj)
    {
        int num_i = numerator * obj.denominator + obj.numerator * denominator;

        int den_i = denominator * obj.denominator;

        numerator = num_i;

        denominator = den_i;
    }

    void multiply(Fraction obj)
    {
        int num_i = numerator * obj.numerator;

        int den_i = denominator * obj.denominator;

        numerator = num_i;

        denominator = den_i;
    }

    void simplify()
    {
        int gcd = __gcd(numerator, denominator);

        numerator = numerator / gcd;

        denominator = denominator / gcd;
    }

    void print()
    {
        cout << numerator << "/" << denominator << endl;
    }
};

int main()
{
    int num_1, den_1, num_2, den_2;

    int query, type;

    cin >> num_1 >> den_1;

    Fraction f1(num_1, den_1);

    cin >> query;

    while (query--)
    {
        cin >> type >> num_2 >> den_2;

        Fraction f2(num_2, den_2);

        if (type == 1)
        {
            f1.add(f2);
        }
        else if (type == 2)
        {
            f1.multiply(f2);
        }
        f1.simplify();
        f1.print();
    }

    return 0;
}