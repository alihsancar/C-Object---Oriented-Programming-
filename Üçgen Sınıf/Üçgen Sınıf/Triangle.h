/*Bu kodlar Udemyden Ogün Birinci hocamýn C++ Programlama Diliyle Nesneye Yönelik Programlama Mantýðý | Temelden Baþlayýp Gerçek Projeler Ýle Öðrenin
kursunu izlerken yazýlmýþtýr.*/

#include <iostream>
using namespace std;

class Triangle {
private:
	float sideA, sideB, sideC;
public:
	Triangle(float a, float b, float c);
	~Triangle();
	Triangle(const Triangle& oth);
	bool isTriangle(float a, float b, float c);
	float getSideA() const {
		return sideA;
	}
	float getSideB() const {
		return sideB;
	}
	float getSideC() const {
		return sideC;
	}
	void setValue(float a, float b, float c);
	bool isEquilateral();
	bool isIsosceles();
	bool isScalene();
	void TriangleType();

};

Triangle::Triangle(float a, float b, float c) {

	while (!isTriangle(a, b, c)) {
		cout << "Please enter the sides : ";
		cin >> a >> b >> c;
	}
	sideA = a;
	sideB = b;
	sideC = c;

	cout << "Triangle created succesfully."<<endl;
}

Triangle::~Triangle() {
	cout << "Triangle destroyed."<<endl;
}

Triangle::Triangle(const Triangle& oth) {

	sideA = oth.sideA;
	sideB = oth.sideB;
	sideC = oth.sideC;
	cout << "Triangle copied." << endl;

}

void Triangle::setValue(float a, float b, float c) {

	while (!isTriangle(a, b, c)) {
		cout << "Please enter the sides : ";
		cin >> a >> b >> c;
	}
	sideA = a;
	sideB = b;
	sideC = c;
}

bool Triangle::isTriangle(float a, float b, float c) {
	
	if (!(abs(b - c) < a && a < b + c))
		return false;

	if (!(abs(a - c) < b && b < a + c))
		return false;

	if (!(abs(b - a) < c && c < b + a))
		return false;

	return true;
}

bool Triangle::isEquilateral() {
	return sideA == sideB && sideB == sideC;
}

bool Triangle::isIsosceles() {

	if (isEquilateral())
		return true;
	
	else{
		return sideA == sideB || sideA == sideC || sideC == sideB;
	}
}

bool Triangle::isScalene() {
	if (isEquilateral() || isIsosceles()){
		return false;
	}
	else{
		return true;
	}
}

void Triangle::TriangleType() {

	if (isEquilateral()) {
		cout << "Equilateral Triangle." << endl;
	}
	else if (isIsosceles())
		cout << "Isosceles Triangle." << endl;
	else
		cout << "Scalene Triangle." << endl;
}

