#include "Figure.h"
#include "Circle.h"
#include "Sexangle.h"
#include <cmath>
#include "Additionally.h"


int main()
{

    setlocale(LC_ALL, "ru");

  
    int select;
    bool f = true;
    int number_s;
    int number_c;
    Circle a(0, 0, 0, 0);
    Sexangle b(0, 0, 0,0,0);
    Additionally k(0, 0, 0, 0, 0, 0, 0, 0, 0);
  

    while (f)
    {

        std::cout << std::endl;
        std::cout << "1..." << "������� ����" << std::endl;
        std::cout << "2..." << "�������� ������ ����� �� ������" << std::endl;
        std::cout << "3..." << "���������� ���������� ���� ��� ���" << std::endl;
        std::cout << "4..." << "������� ����" << std::endl;
        std::cout << "5..." << "������� �������������" << std::endl;
        std::cout << "6..." << "�������� ������  �������������� �� ������ " << std::endl;
        std::cout << "7..." << "���������� ����������  ������������� ��� ��� " << std::endl;
        std::cout << "8..." << "������� �������������" << std::endl;
        std::cout << "9..." << "�������� ������� �����" << std::endl;
        std::cout << "10..." << "����������� ����������� �����" << std::endl;
        std::cout << "11..." << "�����" << std::endl;
        std::cin >> select;
        switch (select)
        {

        case 1:
            a.Create();
            break;
        case 2:
            std::cout << "������� ����� �����: ";
            std::cin >> number_c;
            a.Show(number_c);
            break;
        case 3:
            std::cout << "������� ����� �����: ";
            std::cin >> number_c;
            a.Verification(number_c);
            break;
        case 4:
            std::cout << "������� ����� �����: ";
            std::cin >> number_c;
            a.Delete(number_c);
            break;
        case 5:
            b.Create();
            break;
        case 6:
            std::cout << "������� ����� ��������������: ";
            std::cin >> number_s;
            b.Show(number_s);
            break;
        case 7:
            std::cout << "������� ����� ��������������:  ";
            std::cin >> number_s;
            b.Verification(number_s);
            break;
        case 8:
            std::cout << "������� ����� ��������������: ";
            std::cin >> number_s;
            b.Delete(number_s);
            break;
        case 9:
            std::cout << "������� ����� �����: ";
            std::cin >> number_c;
            std::cout << "������� ����� ��������������: ";
            std::cin >> number_s;
            k.Compare(b.sret(), a.cirret(), number_c, number_s);
            break;
        case 10:
            std::cout << "������� ����� �����: ";
            std::cin >> number_c;
            std::cout << "������� ����� ��������������: ";
            std::cin >> number_s;
            k.Intersect(b.sret(), a.cirret(), number_c, number_s);
            break;
        case 11: f = false;
            break; 
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }
        system("pause");
        system("cls");
    }
}