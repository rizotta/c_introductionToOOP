#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"
//#define STRUCT_POINT

class Point
{
	double x;
	double y;
public:
	double get_x()const
	{
		return x;
	}
	double get_y()const
	{
		return y;
	}
	void set_x(double x)
	{
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}
};
// }A, B, C; - ���������� ��������

void main()
{
	setlocale(LC_ALL, "");
#ifdef STRUCT_POINT
	// type name - ���������� ��� ���������� ����������
	int a;	// ��������� ���������� 'a' ���� 'int'

	// ��������� ���������� 'A' ���� 'Point', 
	// ��� ������� ������ ������ (���������) ��������� 'Point'
	Point A;
	A.x = 2;
	A.y = 3;
	cout << A.x << tab << A.y << endl;

	Point* pA = &A; // ������ ��������� �� ������ ����� ���������
	cout << pA->x << tab << pA->y << endl;

#endif // STRUCT_POINT
	
	Point A;
	A.set_x(2);
	A.set_y(3);
	cout << A.get_x() << tab << A.get_y() << endl;
	
}