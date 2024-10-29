/*Bu kodlar Udemyden Ogün Birinci hocamın C++ Programlama Diliyle Nesneye Yönelik Programlama Mantığı | Temelden Başlayıp Gerçek Projeler İle Öğrenin
kursunu izlerken yazılmıştır.*/

#include <iostream>
#include "Triangle.h"

using namespace std;


int main()
{
	float a, b, c;
	cout << "Please enter sides of triangle : ";
	cin >> a >> b >> c;

	Triangle triangle1(a, b, c);
	
	Triangle triangle2 = triangle1;
	Triangle triangle3(triangle1);

	cout << "Triangle 1 information : " << endl << "Side A : " << triangle1.getSideA() << endl;
	cout << "Side B : " << triangle1.getSideB() << endl;
	cout << "Side C : " << triangle1.getSideC() << endl;

	triangle2.setValue(1, 15, 17);
	cout << "Triangle 2 information : " << endl << "Side A : " << triangle2.getSideA() << endl;
	cout << "Side B : " << triangle2.getSideB() << endl;
	cout << "Side C : " << triangle2.getSideC() << endl;
	triangle2.TriangleType();

}

