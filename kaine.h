#ifndef KAINE_H_INCLUDED
#define KAINE_H_INCLUDED
#include <string>
#include <iostream>
class kaine{

    public:

        kaine();
        virtual ~kaine();
        void display();

    private:

        string kaineName = "Tim Kaine";
        string kaineState = "VA";
        char kaineParty = 'D';
        int KaineYearOfReelection = 2018;

};



#endif // WARNER_H_INCLUDED
