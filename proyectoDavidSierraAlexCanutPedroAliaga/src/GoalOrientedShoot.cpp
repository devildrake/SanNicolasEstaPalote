#include "GoalOrientedShoot.h"

GoalOrientedShoot::GoalOrientedShoot() {
	//0 es false, 1 es true, 2 es doesn't matter
	id = 7;
	preConditions[0] = 1; //Agent viu
	preConditions[1] = 1; //T� arma
	preConditions[2] = 1; //Arma carregada
	preConditions[3] = 2; //T� bomba
	preConditions[4] = 1; //Enemic visible
	preConditions[5] = 1; //Enemic alineat
	preConditions[6] = 1; //Enemic a prop
	preConditions[7] = 1; //Enemic viu

	postConditions[0] = 1;
	postConditions[1] = 1;
	postConditions[2] = 0;
	postConditions[3] = 2;
	postConditions[4] = 0;
	postConditions[5] = 0;
	postConditions[6] = 0;
	postConditions[7] = 0;
	cost = 2;
	name = "Shoot";

}
