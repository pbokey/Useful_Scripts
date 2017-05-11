// classDef.h
#include <string>

#ifndef classDef_H   // pre-processor method
#define classDef_H

using namespace std;

class classDef {
    int credits;
    char grade;

    public:
        classDef();
        classDef(int i, char c);
        int getCredits();
        char getGrade();
};

#endif