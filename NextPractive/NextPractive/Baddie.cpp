#include <iostream>
#include "Baddie.h"
using std::string;

void Baddie::setName(string theName) {
	name = theName;
}
string Baddie::getName() {
	return name;
}
void Baddie::setHP(int theHP) {
	hp = theHP;
}
int Baddie::getHP() {
	return hp;
}
void Baddie::setCrit(int theCrit) {
	crit = theCrit;
}
int Baddie::getCrit() {
	return crit;
}
;