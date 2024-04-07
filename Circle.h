#pragma once
#include "Figure.h"

class Circle : public Figure 
{
public:
	Circle() {};
    Circle(double x_c, double y_c, double radius_c, int number_c);
    void Create() override;
	void Show(int number_c) override;
	void Verification(int number_c) override;
	void Delete(int number_c)  override;

	std::vector<Circle> cirret()
	{
		return circles;
	}
	std::vector<Circle>circles;
	double x_c, y_c, radius_c, s_c;
	int number_c;
};

