#pragma once
#ifndef TOM_INVENTORY_H
#define TOM_INVENTORY_H
#include <vector>
#include "GameItem.h"
class Inventory
{
	std::vector<GameItem> slotItem;
public:
	Inventory();
	~Inventory();
	void putItem(int,GameItem);
	GameItem takeItem(int);
	bool isEmptySlot(int);
};
#endif // TOM_INVENTORY_H
