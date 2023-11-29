/*
Given Rectangle of length a and b.Print Area of rectangle.

Constaints :
1 <= a <=10^9;
1 <= b <=10^9;

Input Formet :
2 space seperated integer a and b

Output Formet:
Single Number Which is Area of rectangle

Simple Input:
3  4

Simple Output:
12
*/
//First Method
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b;
    cin >> a >> b;
    cout << a * b;
    return 0;
}

/*Second Method

#include <bits/stdc++.h>
using namespace std;

int main()
{
     int a, b;
    cin >> a >> b;
    cout << a * 1LL * b;
    return 0;
}
*/