#pragma once
#ifndef TOM_GAMEITEM_H
#define TOM_GAMEITEM_H
#include <string>
using std::string;

class GameItem
{
	string itemType;
	bool bIsEmpty{true};
public:
	GameItem();
	~GameItem();
	void setItemType(int);
	string getItemType();
	bool isEmpty();
};

#endif