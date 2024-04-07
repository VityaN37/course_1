#pragma once
#include "Figure.h"
#include "Circle.h"
#include "Sexangle.h"
#include <cmath>
#include "Figure.h"

class Additionally : public Circle, public Sexangle
{
public:
    Additionally(double x_s, double y_s, int number_s, double a_s, double s_s, double x_c, double y_c, double radius_c, int number_c) : Circle(x_c, y_c, radius_c, number_c), Sexangle(x_s, y_s, number_s, a_s, s_s) {}


    void Compare(const std::vector<Sexangle>& sexangles1, std::vector<Circle>circles1, int number_c, int number_s)
    {
        sexangles = sexangles1;
        circles = circles1;

        for (const auto& sexangle : sexangles)
        {
            for (const auto& circle : circles)
            {
                if (sexangle.number_s == number_s && circle.number_c == number_c)
                {
                    if (sexangle.s_s == circle.s_c)
                    {
                        std::cout << "������� ������������� ��� ������� " << sexangle.number_s << " � ������� ����� ��� ������� " << circle.number_c << "�����" << std::endl;
                    }
                    else if (sexangle.s_s > circle.s_c)
                    {
                        std::cout << "������� ������������� ��� ������� " << sexangle.number_s << " ������ ���  ������� ����� ��� ������� " << circle.number_c << std::endl;
                    }
                    else
                    {
                        std::cout << "������� ������������� ��� ������� " << sexangle.number_s << " ������ ���  ������� ����� ��� ������� " << circle.number_c << std::endl;
                    }
                }
            }
        }
    }


    void Intersect(const std::vector<Sexangle>& sexangles1, std::vector<Circle>circles1, int number_c, int number_s)                   //////////////////// ���� ������ ����� ������ ��� ��������� ������� ��������� � ��� � �� ������ ������������ 
    {

        sexangles = sexangles1;
        circles = circles1;

        for (const auto& sexangle : sexangles)
        {
            for (const auto& circle : circles)
            {
                if (sexangle.number_s == number_s && circle.number_c == number_c)
                {
                    double rezultx = abs(sexangle.x_s - circle.x_c);
                    double rezulty = abs(sexangle.y_s - circle.y_c);
                    double rezult_x_y = rezultx + rezulty;
                    double distance_ra = sexangle.a_s + circle.radius_c;
                    if (distance_ra > rezult_x_y)
                    {
                        std::cout << "����� ������������";
                    }
                    else
                    {
                        std::cout << "����� �� ������������";
                    }

                }
            }
        }

    }
    
};