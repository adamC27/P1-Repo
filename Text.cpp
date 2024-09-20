#include "Text.h"
#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

Text::Text(const char *testArray)
{
    textLength = strlen(testArray);
    textArray = new char[textLength + 1];
    strcpy(textArray,testArray);
}

Text::~Text()
{
    delete[] textArray;
}

void Text::displayText()
{
    cout << textArray << endl;
}

const char *Text::getText() const
{
    return textArray;
}

int Text::getLength()
{
    return textLength;
}