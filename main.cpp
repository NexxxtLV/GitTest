#include <iostream>
#include <string>

void printText(std::string text)
{
    printf(text.c_str());
}

int sumTwoDigits(int a, int b)
{
    return a + b;
}

int main()
{
    printText("Hello New Feature\n");
    printText(std::to_string(sumTwoDigits(1, 2)));

    system("pause");
    return 0;
}