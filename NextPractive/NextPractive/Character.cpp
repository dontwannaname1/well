#include <iostream>
#include "Character.h"
using std::string;
	void Character::setName(string theName){
		name = theName;
}
	string Character::getName() {
		return name;
	}
	void Character::setHP(int theHP) {
		hp = theHP;
	}
	int Character::getHP() {
		return hp;
	}
	void Character::setCrit(int theCrit) {
		crit = theCrit;
	}
	int Character::getCrit() {
		return crit;
	}
;