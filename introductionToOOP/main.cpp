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
	//Point() // конструктор по умолчанию, т.к. без параметров
	//{
	//	x = y = 0; // инициализация значений по умолчанию, то, что нужно в конструкторе
	//	cout << "DefaultConstructor:\t" << this << endl;
	//}
	Point(double x = 0, double y = 0) // конструктор по умолчанию, можно вызвать с параметрами
	{
		this->x = x;
		this->y = y;
		//cout << "Constructor:\t" << this << endl;
	}
	~Point() // деструктор, обычно пишется внизу, после конструкторов
	{
		//cout << "Destructor:\t" << this << endl;
	}

	//				Methods:
	void print()const
	{
		cout << "X = " << x << "\tY = " << y << endl; // можно x и без this, т.к. нет других переменных x
	}

	double distance(Point new_point)const // возвращает расстояние до указанной точки
	{
		double x_dist;
		double y_dist;
		x_dist = this->x - new_point.x;
		y_dist = this->y - new_point.y;
		return sqrt(x_dist * x_dist + y_dist * y_dist);
	}
};
// }A, B, C; - объявление объектов сразу

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
	// type name - объявление как объявление переменной
	int a;	// Объявляем переменную 'a' типа 'int'

	// Объявляем переменную 'A' типа 'Point', 
	// ещё говорят Создаём объект (экземпляр) структуры 'Point'
	Point A;
	A.x = 2;
	A.y = 3;
	cout << A.x << tab << A.y << endl;

	Point* pA = &A; // Создаём указатель на объект нашей структуры
	cout << pA->x << tab << pA->y << endl;
#endif // STRUCT_POINT
	
	//double x, y;
	//cout << "Введите координаты точки: "; cin >> x >> y;
	//A.set_x(2);
	//A.set_y(4);
	//cout << A.get_x() << tab << A.get_y() << endl;

	//Point С = 5; // Single-argument constructor (C.x = 5)
	//С.print();
	//Point D(0, 123);
	//С.print();

	Point A(2, 3);
	A.print();
	
	Point B(10, 20);
	B.print();

	cout << "distance from method: " << A.distance(B) << endl;
	cout << "distance from function: " << distance(A, B) << endl;
}