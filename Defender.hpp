#pragma once
#include "skills.h"

namespace MyStrategy
{
	void defender(BeliefState *state, int botID)
	{
		Vec2D dpoint;
		Vec2D fpoint(0.7*HALF_FIELD_MAXX, 0.12*HALF_FIELD_MAXY);
		Vec2D ballPoint(state->ballPos.x, state->ballPos.y);


  if (state->ballPos.x < -HALF_FIELD_MAXX*0.5 )
		{
			if (Vec2D::distSq(state->homePos[botID], state->ballPos) < 2 * BOT_BALL_THRESH)  /*if ball crosses the half of half field maxima it acts 
																						      	as an attacker and a defender   i.e, it joins with attacker*/
				GoToPoint(botID, state, fpoint, PI / 3, true, false);
			else
				GoToPoint(botID, state, ballPoint, 0.98 * PI, false, true);
		}
	 if(state->ballPos.x > HALF_FIELD_MAXX*0.6 && state->ballPos.x > HALF_FIELD_MAXX*0.2)
	 {
		 if (Vec2D::distSq(state->homePos[botID], state->ballPos) < 2 * BOT_BALL_THRESH)  /*if ball crosses the half of half field maxima it acts
																						  as an attacker and a defender   i.e, it joins with attacker*/
		 GoToPoint(botID, state, fpoint, PI / 3, true, false);
		 else
			 GoToPoint(botID, state, ballPoint, 0.98 * PI, false, true);
	 }
		if (state->ballPos.x > -HALF_FIELD_MAXX*0.5)
		{
			dpoint.x = -HALF_FIELD_MAXX / 2;
			dpoint.y = state->ballPos.y;
			GoToPoint(botID, state, dpoint, PI * 0.95, true, true);
		}
		if (state->ballPos.x = -HALF_FIELD_MAXX*0.5)
		{
			dpoint.x = -HALF_FIELD_MAXX / 2;
			dpoint.y = state->ballPos.y;
			GoToPoint(botID, state, dpoint, PI * 3, true, true);
		}

		GoToPoint(botID, state, dpoint, PI * 1.65, true, true);
	}
}
