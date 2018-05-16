#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

#ifndef SCREEN_H
#define SCREEN_H


class Screen{
private:
    int nlin,ncol;
    char brush;
    vector< vector<char> > mat;
public:
    Screen(int nlin, int ncol);
    void setPixel(int x, int y);
    void clear();
    void setBrush(char brush);
    friend ostream& operator<<(ostream &os, Screen &t);
};

#endif // SCREEN_H
