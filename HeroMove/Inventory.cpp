#include <iostream>
#include "Inventory.h"

Inventory::Inventory()
{
	GameItem anItem;
	for (auto i = 0; i != 8;++i)
		slotItem.push_back(anItem);
}

Inventory::~Inventory()
{
}

// Put an item into a slot
// slotNumber: 0 - 7
void Inventory::putItem(int slotNumber, GameItem theItem) {
	std::cout << "Putting ";
	std::cout << theItem.getItemType();
	std::cout << " into slot ";
	std::cout << slotNumber;
	std::cout << std::endl;
	slotItem[slotNumber] = theItem;
}

GameItem Inventory::takeItem(int slotNumber) {
	return slotItem[slotNumber];
}

bool Inventory::isEmptySlot(int slotNumber) {
	return slotItem[slotNumber].isEmpty();
}