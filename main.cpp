#include <iostream>
#include <string>
#include <fstream>
#include "warner.h"
#include "kaine.h"
using namespace std;



int main()
{
    fstream fout;
    fout.open("senators.txt", ios::out);
    fout<<"Mark Warner"<<"     "<<"VA"<<"     "<<'D'<<"     "<<"2014"<<endl;
    fout<<"Time Kaine"<<"     "<<"VA"<<"     "<<'D'<<"     "<<"2018"<<endl;
    fout.close();

    return 0;
}

