#pragma once
#include <iostream>
using namespace std;
class p {
private:
	string name;
	int hp;
	int dm;
	int ar;
	int cr;
public:
	p(string fname, int fhp, int fdm, int far, int fcr) {
		name = fname;
		hp = fhp;
		dm = fdm;
		ar = far;
		cr = fcr;
	}
	~p() {
		cout << "p destroyed"<<endl;
	}
	string getName() { return name; }
	int getHp() { return hp; }
	int getDm() {
		srand(time(0));
		int a = rand() % 100 + 1;
		if (a >= 1 || a <= cr) {
			return 2 * dm;
		}
		else return dm;
	}
	int getAr() { return ar; }
	int getCr() { return cr; }
	void setName(string fname) { name = fname; }
	void setHp(int fhp) { hp = fhp; }
	void setDm(int fdm) { dm = fdm; }
	void setAr(int far) { ar = far; }
	void setCr(int fcr) { cr = fcr; }
	void printP() {
		cout << name << " " << hp<<endl;
	}
};