#pragma once
#include"sims.h"
#include <iostream>
using namespace std;

class game
{
	sim** arry_sims;
	int max_sims;
	int current_sims;

public:
	void set(sim** arry_sims1);
	void set(int max_sims1);
	void set(int current_sims1);
	sim** getarry_sims() const { return arry_sims; }//?
	int getmax_sims() { return max_sims; }
	int getcurrent_sims() { return current_sims; }


	// methods : 

	void addSim(sim& sim1);
	sim* findSim(const char *name_sim);
	void performAction();
	void passTime();
	void printGameState();



	game(game &g);
	game(int max_sims);
	~game();


};