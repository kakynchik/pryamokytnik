#include <iostream>
using namespace std;

class Pryamokytnik {
private:
	double width;
	double height;
public: 

	Pryamokytnik(double h, double w) : width(w), height(h) {

	};
	double calculatePloshia() {
		return height * width;
	}

	double calculatePerimetr()
	{
		return 2 * (height + width);
	}
};

int main() {
	int w8;
	int h8;
	cin >> w8;
	cin >> h8;
	Pryamokytnik rect(w8, h8);

	cout << "Ploshia pryamokytnika " << rect.calculatePloshia() << endl;

	cout << "Perimetr pryamokytnika " << rect.calculatePerimetr() << endl;
	
}