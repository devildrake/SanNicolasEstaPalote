#pragma once
#include "State.h"


class StateMine : public State {

public:
	virtual std::string GetName();
	virtual void Enter();
	virtual void Exit();
	virtual void Update(float);
	StateMine(Agent*, Vector2D);
};
