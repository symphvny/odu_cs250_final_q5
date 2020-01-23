#ifndef WARNER_H_INCLUDED
#define WARNER_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class warner{

    public:

        warner();
        virtual ~warner();
        void display();

    private:

        string warnerName = "Mark Warner";
        string warnerState = "VA";
        char warnerParty = 'D';
        int WarnerYearOfReelection = 2014;

};



#endif // WARNER_H_INCLUDED
