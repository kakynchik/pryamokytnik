/*



//imya1 

#include <iostream>

using namespace std;

int main() {

	int a;
	cout << "vvedit imya: ";
	cin >> a;
	cout << "vitayu" << endl;
}


//reverse3

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	string str1;
	cin >> str1;
	int i;
	reverse(str1.begin(), str1.end());

	cout << str1;
}


// vik2
#include <iostream>

using namespace std;

int main() {
	int a;
	cout << "napishit vash vik: ";
	cin >> a;
	if (a > 100) {
		cout << "vi mertvi";
	}
	else {
		if (a >= 18) {
			cout << "vi povnolitni";
		}
		else {
			cout << "vi ne povnolitni";
		}
		if (a > 100) {
			cout << "vi mertvi";
		}
	}
}

//pryamokytnik4

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
//avramabil
*/