#include <iostream>

void printText(std::string text)
{
    printf(text.c_str());
}

int main()
{
    printText("Hello World!\n");
}