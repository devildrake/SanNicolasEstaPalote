#pragma once
#include <iostream>
#include <minmax.h>
#include <SDL.h>
#include <SDL_image.h>
#include "SDL_SimpleApp.h"
#include "Vector2D.h"
#include "utils.h"
#include "SteeringBehavior.h"
//#include "State.h"
#include "StateBank.h"
#include "StateHome.h"
#include "StateMine.h"
#include "StateSaloon.h"


class Agent
{
	friend class SteeringBehavior;

private:
	SteeringBehavior *steering_behavior;
	Vector2D position;
	Vector2D velocity;
	Vector2D target;

	float mass;
	float orientation;
	float max_force;
	float max_velocity;

	SDL_Color color;

	SDL_Texture *sprite_texture;
	bool draw_sprite;
	int sprite_num_frames;
	int sprite_w;
	int sprite_h;

	//Cosas Planning
	int goldPieces=0;
	const int maxGoldPieces = 5;
	int energy = 0;
	const int maxEnergy = 10;
	int thirst = 0;
	const int maxThirst = 10;
	int coinsInBank = 0;
	int wealthThreshold = 100;
	State* currentState;

public:
	Agent();
	~Agent();
	SteeringBehavior *Behavior();
	Vector2D getPosition();
	Vector2D getTarget();
	Vector2D getVelocity();
	float getMaxVelocity();
	float timerThirst;
	float maxThirstTime;
	float timerEnergy;
	float maxEnergyTime;
	void setPosition(Vector2D position);
	void setTarget(Vector2D target);
	void setVelocity(Vector2D velocity);
	void setMass(float mass);
	void setColor(Uint8 r, Uint8 g, Uint8 b, Uint8 a);
	void update(Vector2D steering_force, float dtime, SDL_Event *event);
	void draw();
	bool Agent::loadSpriteTexture(char* filename, int num_frames=1);
	void ChangeState(int state);
	void UpdateStats(float );
	State* state_home;
	State* state_saloon;
	State* state_bank;
	State* state_mine;
};
