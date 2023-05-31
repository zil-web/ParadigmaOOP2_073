#include<iostream>
using namespace std;

class baseclass {
public:
	virtual void perkenaan() final {
		cout << "hallo saya dari base class";
	}
};
class draivdedclass : public baseclass {
public:
	void perkenalan() {
		cout << "hallo saya function dari draided class";
	}
};
