#include <iostream>
#include "sims.h"
#include"game.h"
using namespace std;
#define SIZE 50 


	sim::sim() // 1

	{
		char str1[SIZE] = "Jane Doe" ;
		name = new char[strlen(str1) + 1];
		strcpy(name, str1);
		age = 0;
		starving = 50;
		energy = 50;
	}
	sim::sim(char *name1) // 2
	{
		name = new char[strlen(name1) + 1];
		strcpy(name, name1);
		age = 0;
		starving = 50;
		energy = 50;
	}
	sim::sim(char* new_name, int new_age, int new_starving, int new_energy) //

	{
		name = new char[strlen(new_name) + 1];
		strcpy(name, new_name);
		age = new_age;
		starving = new_starving;
		energy = new_energy;

	}

	sim::sim (const sim &s) //4
	{
		age = s.age;
		energy = s.energy;
		starving = s.starving;
		name = new char[strlen(s.name) + 1];
		strcpy(name, s.name);


	}
	sim::~sim()
	{
		cout << "A sim object  (" << name << ") distroyd";
	}

	void sim::set(char* name1)
	{
		name = new char[strlen(name1) + 1];
		strcpy(name, name1);
	}
	void  sim::set(int age1) 
	{
		age = age1;

	}
	void  sim::set(int starving1)
	{
		starving = starving1;
	}
	void sim::set(int energy1)
	{
		energy = energy1;
	}
	void sim::ageup(int age2)
	{
		age = age2 + 1;
	}
	void sim::eat(int starving2)
	{
		starving = starving2 + 15;
	}
	void sim::sleep(int energy2)
	{
		energy = energy2 +15 ;
	}
	void sim::print_class()const
	{
		cout << "name is  : " << name << endl;
		cout << "age is : " << age << endl;
		cout << " starving is : " << starving << endl;
		cout << "energy is : " << energy << endl;

	}


	
	// game methods and fuction : 

	void game::set(sim** arry_sims1)

	{
		
	}

	void game::set(int max_sims1)
	{
		max_sims = max_sims1;

	}

	void game::set(int current_sims1)
	{
		current_sims = current_sims1;

	}

	void game::addSim(sim& sim1 )
	{
		arry_sims = new sim*[current_sims +1];
		arry_sims[current_sims] = sim1;
	}
	sim* game::findSim(const char *name_sim)
	{
		for (int i = 0; i < current_sims; i++)
		{
			if (arry_sims[i]->getname() == name_sim->getname())
			{
				return arry_sims[i];
			}
		}
	}
	void game::performAction(sim *name_sim1 , int value)
	{
		 sim * new_name = findSim(name_sim1);
		 if( new_name.)
	}
	void game::passTime()
	{

	}
	void game::printGameState()
	{

	}


	game::game(int max_sims1)
	{
		max_sims = max_sims1;
	}
	game::game(game &g)
	{
		
	}
	game ::~game()
	{

	}



	


