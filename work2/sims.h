#pragma once
#define ARRY_SIZE 100
#include"game.h"
#include <iostream>
using namespace std;
class sim
{
	char* name;
	int age;
	int starving;
	int energy;

public:
	void set(char* name1);
	void set(int age1);
	void set(int starving1);
	void set(int energy1);
	char* getname()const { return name; }
	int getage()const { return age; }
	int getstarving() const { return starving; }
	int getenergy() const { return energy; }
	// methods : 
	void ageup(int age2);
	void eat(int starving2);
	void sleep(int energy2);
	void print_class()const;

	sim();
	sim(char* name1);
	sim(char* new_name, int new_age, int new_starving, int new_energy);
	sim(const sim& s);
	~sim();
};
