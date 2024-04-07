#include "Circle.h"
#include "Figure.h"



Circle::Circle(double x_c, double y_c, double radius_c, int number_c)
{
	this->x_c = x_c;
	this->y_c = y_c;
	this->radius_c = radius_c;
	this->s_c = 3.14 * radius_c * radius_c;
	this->number_c = number_c;
}




void Circle::Create()
{
	std::cout << "¬ведите координату х :";
	std::cin >> x_c;
	std::cout << "¬ведите координату y :";
	std::cin >> y_c;
	std::cout << "¬ведите  radius :";
	std::cin >> radius_c;
	std::cout << "¬ведите номер круга :";
	std::cin >> number_c;


	/*std::cout << "Enter x, y, radius, and number of the circle: ";
	std::cin >> x;
	std::cin >> y;
	std::cin >> radius;
	std::cin >> number;*/

	Circle newCircle(x_c, y_c, radius_c, number_c);
	circles.push_back(newCircle);
}

void Circle::Show(int number_c)
{
	for (const auto& circle : circles) 
	{
		if (circle.number_c == number_c)
		{
			std::cout << "Circle number: " << circle.number_c << std::endl;
			std::cout << "Center: (" << circle.x_c << ", " << circle.y_c << ")" << std::endl;
			std::cout << "Radius: " << circle.radius_c << std::endl;
			std::cout << "Area: " << circle.s_c << std::endl;
			return;
		}
	}
	std::cout << " руг с номером " << number_c << " не найден." << std::endl;
}

void Circle::Verification(int number_c)
{
	for (const auto& circle : circles) 
	{
		if (circle.number_c == number_c)
		{
			std::cout << " руг с номером " << number_c << " существует." << std::endl;
			return;
		}
	}
	std::cout << " руг с номером  " << number_c << " не существует." << std::endl;
}

void Circle::Delete(int number_c)
{
	for (auto it = circles.begin(); it != circles.end(); ++it)
	{
		if (it->number_c == number_c)
		{
			circles.erase(it);
			std::cout << " руг с номером  " << number_c << " удалЄн." << std::endl;
			return;
		}
	}
	std::cout << " руг с номером " << number_c << " не найден." << std::endl;
}
