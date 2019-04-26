#include <iostream>
using namespace std;

class Vector

{

public:

	double x, y;
	Vector();

	Vector(double, double);

	Vector(Vector &obj);

	~Vector();
	Vector& operator=(const Vector& right) {

		if (this == &right)

			return *this;

		x = right.x;

		y = right.y;

		return *this;

	}

	friend bool operator==(const Vector& left, const Vector& right) {

		return ((left.x == right.x) && (left.y == right.y));

	}

	friend ostream& operator<< (ostream &out, const Vector &Z) {

		out << "(" << Z.x << "," << Z.y << ")";

		return out;

	}
	friend istream& operator>> (istream &in, Vector &Z) {

		in >> Z.x;

		in >> Z.y;
		return in;

	}

};
Vector::Vector() {

}

Vector::Vector(double x1, double y1) {

	x = x1;

	y = y1;

}
Vector::Vector(Vector &obj) {

	x = obj.x;

	y = obj.y;
}
Vector::~Vector() {
}

int main()

{

	Vector a(10, 5);

	cout << a;

}