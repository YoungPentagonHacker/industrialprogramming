#include <iostream>
#include <vector>
#include <string>
#include "Figure.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	vector<Figure> mas;
	float x1, x2, x3, x4, y1, y2, y3, y4;
	for (int i = 0; i < 3; i++)
	{
		cout << "������� ���������� x1,x2,x3,x4,y1,y2,y3,y4 ��� ���������������� � " << i + 1 << endl;
		cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
		mas.push_back(Figure(x1, x2, x3, x4, y1, y2, y3, y4));
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "��������� ���������������� � " << i + 1<<" : "; mas[i].show();  
		cout << "�������� �� ��������������� ���������������  � " << i + 1 << " : " << mas[i].is_prug() << endl;
		cout << "�������� �� ��������� ���������������  � " << i + 1 << " : " << mas[i].is_square() << endl;
		cout << "�������� �� ������ ���������������  � " << i + 1 << " : " << mas[i].is_romb() << endl;
		cout << "����� �� ������� ���������� � ���������������  � " << i + 1 << " : " << mas[i].is_in_circle() << endl;
		cout << "����� �� ������� ���������������  � " << i + 1 << " : " << mas[i].is_out_circle() << endl;
	}
}
