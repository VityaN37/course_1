#include "Sexangle.h"
#include "Figure.h"

Sexangle::Sexangle(double x_s, double y_s, int number_s,double a_s, double s_s)
{
    this->a_s = a_s;
    this->x_s = x_s;
    this->y_s = y_s;
    this->s_s = 3.0 * sqrt(3.0) * a_s * a_s / 2.0; // ������� ����������� ��������������
    this->number_s = number_s;
}

void Sexangle::Create()
{
    std::cout << "������� ����� ������� ��������������� ��������������  :";
    std::cin >> a_s;
	std::cout << "������� ���������� � :";
	std::cin >> x_s;
	std::cout << "������� ���������� y :";
	std::cin >> y_s;
	std::cout << "������� ����� �������������� :";
	std::cin >> number_s;
    s_s = 3.0 * sqrt(3.0) * a_s * a_s / 2.0;

    Sexangle newSexangle(x_s, y_s, number_s,a_s,s_s);
    sexangles.push_back(newSexangle);
}

void Sexangle::Show(int number_s)
{
    for (const auto& sexangle : sexangles)
    {
        if (sexangle.number_s == number_s)
        {
            std::cout << "Sexangle s: " << sexangle.s_s << std::endl;
            std::cout << "Sexangle side: " << sexangle.a_s << std::endl;
            std::cout << "Sexangle number: " << sexangle.number_s << std::endl;
            std::cout << "Center: (" << sexangle.x_s << ", " << sexangle.y_s << ")" << std::endl;
            return;
        }
    }
    std::cout << "������������� � ������� " << number_s << " �� ������." << std::endl;
}

void Sexangle::Verification(int number_s)
{
    for (const auto& sexangle : sexangles)
    {
        if (sexangle.number_s == number_s)
        {
            std::cout << "������������� � ������� " << number_s << " ����������." << std::endl;
            return;
        }
    }
    std::cout << "������������� � ������� " << number_s << " �� ����������." << std::endl;
}

void Sexangle::Delete(int number_s)
{
    for (auto it = sexangles.begin(); it != sexangles.end(); ++it) 
    {
        if (it->number_s == number_s)
        {
            sexangles.erase(it);
            std::cout << "������������� � ������� " << number_s << " �����." << std::endl;
            return;
        }
    }
    std::cout << "������������� � ������� " << number_s << " �� ������." << std::endl;
}
