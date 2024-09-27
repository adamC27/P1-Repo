#ifndef TEXT_H
#define TEXT_H

#include <iostream>

class Text
{
    public:
    Text(const char *testArray);
    ~Text();
    void displayText();
    const char *getText() const;
    int getLength();

    private:
    char *textArray;
    int textLength;
};

#endif