#include <ctime>
#include <iostream>
#include "Header.h"
#include "Header1.h"
using namespace std;


int main() {
	srand(time(0));
	r V("valera", 1000, 100, 120, 3);
	p P("paladin", 800, 100, 100, 3);
	V.printR();
	P.printP();

	while (true) {
		cout << "r hitd p\n";
		P.setHp(P.getHp() - V.getDm());
		P.printP();
		if (P.getHp() <= 0) {
			cout << "p died\n";
			break;
		}
		cout << "p hitd r\n";
		V.setHp(V.getHp() - P.getDm());
		V.printR();
		if (V.getHp() <= 0) {
			cout << "r died\n";
			break;
		}
		Sleep(1100);
	}
	return 0;
}
