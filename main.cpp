#include <iostream>
#include <string>

int sumTwoDigits(int a, int b)
{
    return a + b;
}

int main()
{
    printf("Hello Master");
    printf(std::to_string(sumTwoDigits(1, 2)).c_str());

    system("pause");
    return 0;
}