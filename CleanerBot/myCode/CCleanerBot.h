/*
 * CCleanerBot.h
 *
 *  Created on: 11 Dec 2019
 *      Author: stdgpham
 */

#ifndef CCLEANERBOT_H_
#define CCLEANERBOT_H_
#include <cmath>

#include <iomanip>
#include "CPoint.h"
#include "CDynPointArray.h"

#include "cleanerbot/World.h"
#include "cleanerbot/Room.h"
#include "cleanerbot/Wall.h"


class CCleanerBot
{
private:
	CPoint m_position;
	float m_diameter;
	double m_angle;
	World* m_world;
	CDynPointArray m_track;
public:
	CCleanerBot();
	virtual ~CCleanerBot();
	double getAngle();
	void move(double route);
	void turn (double angle);
	void print();
	void setWorld(World* world);
	void replay();
	void clear();
};

#endif /* CCLEANERBOT_H_ */
