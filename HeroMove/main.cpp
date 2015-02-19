#include <iostream>
#include "Hero.h"
#include "GameItem.h"
#include "Inventory.h"

int main() {
	//Hero myHero;
	GameItem anItem;

	anItem.setItemType(4);

	//myHero.moveLeft();
	//myHero.moveLeft();
	//myHero.moveRight();
	
	Inventory myInventory;

	myInventory.putItem(0, anItem);

	anItem.setItemType(2);
	myInventory.putItem(1, anItem);

	system("pause");
	return 0;
}