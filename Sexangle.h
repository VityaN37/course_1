#pragma once
#include "Figure.h"

class Sexangle:public Figure
{
public:
    Sexangle() {};
    Sexangle(double x_s, double y_s, int number_s,double a_s, double s_s);


    void Create() override;
    void Show(int number_s) override;
    void Verification(int number_s) override;
    void Delete(int number_s) override;
    std::vector<Sexangle> sret()
    {
        return sexangles;
    }
    std::vector<Sexangle> sexangles;
    double x_s, y_s, s_s,a_s;
    int number_s;
};

