#include <iostream>
#include <ctime>
#include <cstdlib>	
#include "Character.h"
#include "Baddie.h"
using namespace std;



Baddie enemy("SKELETON",100, 2);
Character hero("CARL", 100, 3);

void battle();
void attack();
void info();
void next();

int main() {
	srand(time(0));
	cout << "You encounter an enemy!" << endl;
	next();
	cout << "The enemy stands menacingly. What do you do?" << endl;

	while (&enemy.getHP > 0 || &hero.getHP > 0) {
		battle();
	}
	if (hero.getHP <= 0) {
		cout << "The skeleton has killed you." << endl;
		cout << "GAME OVER" << endl;
	}
	if (enemy.getHP <= 0) {
		cout << "You have killed the skeleton." << endl;
		cout << "Congratulations, you have won!" << endl;
	}

	return 0;
	
}

void battle() {
	string choice;
	cout << "ATTACK, INFO" << endl;
	cin >> choice;
	cout << choice << endl;
	if (choice == "ATTACK" || choice == "INFO") {
		if (choice == "INFO") 
			info();
		if (choice == "ATTACK")
			attack();
	}
	else {
		cout << "Sorry, that command wasn't recognized." << endl;
		next();
	}
}

void attack() {
	system("CLS");
	int diceRoll, rollSum = 0, currentAttack;
	for (int i = 0; i <= 5; i++) {
		diceRoll = rand() % 20 + 1;
		rollSum += diceRoll;
	}
	currentAttack = rollSum / 5 * 2;
	if (currentAttack < 10)
		currentAttack = 10;
	cout << "You initiate an attack." << endl;
	system("pause");

	if (hero.getCrit >= diceRoll) {
		currentAttack = currentAttack * 2;
		cout << "THWAAAACK!! You're attack was a massive hit!" << endl;

		next();
	}
	enemy.getHP = enemy.getHP - currentAttack;

	cout << "You hit the skeleton for " << currentAttack << " damage." << endl;
	system("Pause");
	if (enemy.getHP <= 0)
		enemy.getHP = 0;
	else {
		cout << "The enemey skeleton has " << enemy.getHP << " health remaining." << endl;
		cout << "The skeleton still stands strong! \nWhat do you do?" << endl;
	}	
	next();
	
}

void info() {

}

void next() {
	system("pause");
	system("CLS");
}