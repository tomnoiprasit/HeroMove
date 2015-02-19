#include "GameItem.h"


GameItem::GameItem()
{
}


GameItem::~GameItem()
{
}

void GameItem::setItemType(int itemTypeNumber) {
	//if (itemTypeNumber == 1) {
	//	itemType = "Axe";
	//}
	//if (itemTypeNumber == 2) {
	//	itemType = "Sword";
	//}
	//if (itemTypeNumber == 3) {
	//	itemType = "Gun";
	//}
	//if (itemTypeNumber == 4) {
	//	itemType = "Food";
	//}
	//if (itemTypeNumber == 5) {
	//	itemType = "Nuke";
	//}
	//if (itemTypeNumber == 6) {
	//	itemType = "Armour";
	//}
	//if (itemTypeNumber == 7) {
	//	itemType = "Coins";
	//}
	bIsEmpty = false;
	switch (itemTypeNumber) {
	case 1:
		itemType = "axe";
		break;
	case 2:
		itemType = "sword";
		break;
	case 3:
		itemType = "gun";
		break;
	case 4:
		itemType = "food";
		break;
	case 5:
		itemType = "nuke";
		break;
	case 6:
		itemType = "armour";
		break;
	case 7:
		itemType = "coins";
		break;
	default:
		;
	}
}

string GameItem::getItemType() {
	return itemType;
}

bool GameItem::isEmpty() {
	return bIsEmpty;
}