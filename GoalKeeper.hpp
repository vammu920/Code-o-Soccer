#pragma once
#include "skills.h"

namespace MyStrategy
{
  void goalkeeper(BeliefState *state,int botID)
  {

	  Vec2D dpoint(OUR_GOAL_X + DBOX_HEIGHT, state->ballPos.y);  
	Vec2D fpoint(HALF_FIELD_MAXX, 0);
	Vec2D ballPoint(state->ballPos.x, state->ballPos.y);

	if (state->ballPos.x < -HALF_FIELD_MAXX*0.7)
	{
		if (Vec2D::distSq(state->homePos[botID], state->ballPos) < 5 * BOT_BALL_THRESH)
			GoToPoint(botID, state, ballPoint, PI / 2, true, false);
	}
	


	if (dpoint.y > OUR_GOAL_MAXY)
	{
		Velocity(botID, 22, 20);
        dpoint.y = OUR_GOAL_MAXY;
		dpoint.x = OUR_GOAL_X + DBOX_HEIGHT;
		GoToPoint(botID, state, dpoint, PI * 0.88, true, false);

	}

	if (dpoint.y < OUR_GOAL_MINY)
	{
		Velocity(botID, 22, 20);
		dpoint.y = OUR_GOAL_MINY;
		dpoint.x = OUR_GOAL_X + DBOX_HEIGHT;
		GoToPoint(botID, state, dpoint, PI * 0.88, true, false);
	}
	
	GoToPoint(botID, state, dpoint, PI * 0.64, true, false);
  }
}