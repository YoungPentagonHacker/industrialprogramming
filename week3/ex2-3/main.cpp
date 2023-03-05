#include <iostream>
#include "rational.h"
#include <vector>
#include <typeinfo>
#include <clocale>

rational operator-(rational r1, rational r2) {
	return rational(r1.a * r2.b - r1.b * r2.a, r1.b * r2.b);
}

int main(void) {
	setlocale(LC_ALL, "rus");
	unsigned int n;
	int a, b;
	std::cout << "������� ���������� ������";
	std::cin >> n;
	if (n < 2)
	{
		std::cout << "��� ������������ ������ ������ rational ���������� ������ ��� ������� ��� ��������";
		return 1;
	}
	std::vector<rational> arr;
	for (int i = 0; i < n ; i++)
	{
		std::cout << "������� ��������� � �����������";
		std::cin >> a >> b;
		arr.push_back(rational(a, b));
	}
	for (size_t i = 0; i < n-1; i++)
	{
		arr[i].show(); std::cout << " + "; arr[i + 1].show(); std::cout << " = "; (arr[i] + arr[i + 1]).show();
		arr[i].show(); std::cout << " - "; arr[i + 1].show(); std::cout << " = "; (arr[i] - arr[i + 1]).show();
		arr[i].show(); std::cout << "++  = "; (++arr[i]).show(); arr[i + 1].show(); std::cout << "++ = "; (++arr[i + 1]).show();
		arr[i].show(); std::cout << " == "; arr[i + 1].show(); std::cout << " = " << (arr[i] == arr[i + 1]) << std::endl;
		arr[i].show(); std::cout << " > "; arr[i + 1].show(); std::cout << " = " << (arr[i] > arr[i + 1]);

	}
	return 0;
}