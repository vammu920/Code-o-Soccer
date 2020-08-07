#pragma once
#include "skills.h"

namespace MyStrategy
{

	void attacker(BeliefState *state, int botID)
	{
		Vec2D dpoint;
		Vec2D fpoint(HALF_FIELD_MAXX, 0);
		Vec2D gpoint(HALF_FIELD_MAXX, DBOX_HEIGHT*0.5);
		Vec2D hpoint(HALF_FIELD_MAXX, -DBOX_HEIGHT*0.5);
		Vec2D ballPoint(state->ballPos.x, state->ballPos.y);
		dpoint.x = HALF_FIELD_MAXX;
		dpoint.y = state->ballPos.y;
		if (Vec2D::distSq(state->homePos[botID], state->ballPos) < 2 * BOT_BALL_THRESH)
		{
			if (state->ballPos.x < HALF_FIELD_MAXX*0.0)
				GoToPoint(botID, state, gpoint, PI, true, true);
			else
				GoToPoint(botID, state, fpoint, PI*0.25, true, true);
		}


		if (Vec2D::distSq(state->homePos[botID], state->ballPos) >= 2 * BOT_BALL_THRESH)
		{
			GoToPoint(botID, state, ballPoint, PI*0.25, true, true);
		}
		if (Vec2D::distSq(state->homePos[botID], state->ballPos) < 2 * BOT_BALL_THRESH)
		{
			if (state->ballPos.x < HALF_FIELD_MAXX*0.0)
				GoToPoint(botID, state, gpoint, PI, true, true);
			else
				GoToPoint(botID, state, fpoint, PI*0.25, true, true);
		}
		if (Vec2D::distSq(state->homePos[botID], state->ballPos) < 2 * BOT_BALL_THRESH)
		{
			if (state->ballPos.x < HALF_FIELD_MAXX*0.0)
				GoToPoint(botID, state, gpoint, PI, true, true);
			else
				GoToPoint(botID, state, fpoint, PI*0.25, true, true);
		}
		if (Vec2D::distSq(state->homePos[botID], state->ballPos) < 2 * BOT_BALL_THRESH)
		{
			if (state->ballPos.x < HALF_FIELD_MAXX*0.0)
				GoToPoint(botID, state, gpoint, PI, true, true);
			else
				GoToPoint(botID, state, fpoint, PI*0.25, true, true);
		}
		if (Vec2D::distSq(state->homePos[botID], state->ballPos) < 2 * BOT_BALL_THRESH)
		{
			if (state->ballPos.x < HALF_FIELD_MAXX*0.0)
				GoToPoint(botID, state, gpoint, PI, true, true);
			else
				GoToPoint(botID, state, fpoint, PI*0.25, true, true);
		}




	}
}
