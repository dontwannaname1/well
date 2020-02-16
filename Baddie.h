#pragma once
using std::string;
class Baddie
{
	string name;
	int hp, crit;

public:
	Baddie(string thisName, int thisHP, int thisCrit) {
		name = thisName;
		hp = thisHP;
		crit = thisCrit;
	}
	void setName(string theName);
	string getName();
	void setHP(int theHP);
	int getHP();
	void setCrit(int theCrit);
	int getCrit();
};

