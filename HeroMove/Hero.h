#ifndef TOM_HERO_H
#define TOM_HERO_H
class Hero {
	int hp{ 100 };
	int stam{ 100 };
	int exp{ 0 };
public:
	int moveRight();
	int moveLeft();
};
#endif