#include <iostream>
#include "sample1.h"
#include "potegowanie.h"

using namespace std;

int main()
{
    cout << "Program that uses some functions, oh boy, I hope someone test them before" << endl;
    cout << "IsPrime(1): " << boolalpha << IsPrime(1) << endl;
    cout << "pot_szybkie(2, 3): " << pot_szybkie(2, 3) << endl;

    return 0;
}