#include <iostream>

using namespace std;

int main() {

	float doge{ 0.1264 };
	float bDoge{};
	float usd{};

	bool cont{ true };

	do {

		int option{};

		cout << "\tPick an option: " << endl;
		cout << "\t1. Convert USD into Doge coin" << endl;
		cout << "\t2. Exit" << endl;
		cin >> option;

		switch (option) {
		case 1:
			cout << "\tEnter the amount of USD: " << endl;
			cin >> usd;
			bDoge = usd / doge;
			cout << "You successfully brought " << bDoge << " doge coins!" << endl;
			break;

		case 2:
			exit(0);

		default:
			system("cls");
			cout << "\tPlease selection from the option menu: " << endl;
			continue;

		}
	} while (cont == true);
	return 0;
}