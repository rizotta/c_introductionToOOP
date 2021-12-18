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
		this->x = x; // Encapsulation DONE
	}
	void set_y(double y)
	{
		this->y = y;
	}

	//				Constructors:
	//Point() // ����������� �� ���������, �.�. ��� ����������
	//{
	//	x = y = 0; // ������������� �������� �� ���������, ��, ��� ����� � ������������
	//	cout << "DefaultConstructor:\t" << this << endl;
	//}
	Point(double x = 0, double y = 0) // ����������� �� ���������, ����� ������� � �����������
	{
		this->x = x;
		this->y = y;
		//cout << "Constructor:\t" << this << endl;
	}
	~Point() // ����������, ������ ������� �����, ����� �������������
	{
		//cout << "Destructor:\t" << this << endl;
	}

	//				Methods:
	void print()const
	{
		cout << "X = " << x << "\tY = " << y << endl; // ����� x � ��� this, �.�. ��� ������ ���������� x
	}

	double distance(Point new_point)const // ���������� ���������� �� ��������� �����
	{
		double x_dist;
		double y_dist;
		x_dist = this->x - new_point.x;
		y_dist = this->y - new_point.y;
		return sqrt(x_dist * x_dist + y_dist * y_dist);
	}

};
// }A, B, C; - ���������� �������� �����

double distance(Point a, Point b)
{
	double x_dist;
	double y_dist;
	x_dist = a.get_x() - b.get_x();
	y_dist = a.get_y() - b.get_y();
	return sqrt(x_dist * x_dist + y_dist * y_dist);
}

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
	
	//double x, y;
	//cout << "������� ���������� �����: "; cin >> x >> y;
	//A.set_x(2);
	//A.set_y(4);
	//cout << A.get_x() << tab << A.get_y() << endl;

	//Point � = 5; // Single-argument constructor (C.x = 5)
	//�.print();
	//Point D(0, 123);
	//�.print();

	Point A(2, 3);
	A.print();
	
	Point B(10, 20);
	B.print();

	cout << "distance 1: " << A.distance(B) << endl;
	cout << "distance 2: " << distance(A, B) << endl;

}