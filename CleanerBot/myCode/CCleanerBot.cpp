/*
 * CCleanerBot.cpp
 *
 *  Created on: 11 Dec 2019
 *      Author: stdgpham
 */

#include "CCleanerBot.h"
#include <iostream>
#include <cmath>
using namespace std;

CCleanerBot::CCleanerBot() {
	// TODO Auto-generated constructor stub
	m_position.setXY(0,0);
	m_diameter = 0.2;
	m_angle = 0;
	m_world = nullptr;
	m_track.put(m_position);
}

CCleanerBot::~CCleanerBot() {
	// TODO Auto-generated destructor stub
}

void CCleanerBot::move(double route)
{
	m_position.move(route*cos(m_angle),route * sin(m_angle));
	m_track.put(m_position);
	m_world->show(m_position.getX(),m_position.getY(), m_angle, m_diameter);
}

void CCleanerBot::turn(double angle)
{
	m_angle = m_angle + M_PI*angle / 180;
	m_world->show(m_position.getX(),m_position.getY(), m_angle, m_diameter);

}

void CCleanerBot::print() {
	cout << " x Value =" << (m_position.getX())<< " ,y Value = " << (m_position.getY()) << " ,Angle = "
			<< m_angle * 180 / M_PI << endl;
}

double CCleanerBot::getAngle()
{
	return m_angle;
}

void CCleanerBot::setWorld(World *world)
{
	m_world = world;
	world->show(m_position.getX(), m_position.getY(), m_angle, m_diameter);

}

void CCleanerBot::replay()
{
	for(int i = 0; i < m_track.getElementCount(); i++ )
	{
		double deltaX,deltaY;
		deltaX = m_track.getElementAt(i).getX() - m_track.getElementAt(i-1).getX();
		deltaY = m_track.getElementAt(i).getY() - m_track.getElementAt(i-1).getY();
		if(deltaX >= 0){
			m_angle = asin(deltaY);
		}
		else if(deltaY >= 0){
			m_angle = acos(deltaX);
		}
		else {
			m_angle = - acos(deltaX);
		}
		if( i== 0){
			deltaX =  m_track.getElementAt(0).getX() - m_track.getElementAt((m_track.getElementCount()-1)).getX();
			deltaY =  m_track.getElementAt(0).getY() - m_track.getElementAt((m_track.getElementCount()-1)).getY();
			m_angle = atan(deltaY/deltaX);
			if(deltaX <0) turn(180);
		}
		m_position.setXY(m_track.getElementAt(i).getX(),m_track.getElementAt(i).getY());
		cout << (i +1)<< ".Position : " << setprecision(3) << m_position.getX()
						<<" , "<<setprecision(3)<< m_position.getY()<<endl;
		m_world->show(m_position.getX(),m_position.getY(), m_angle, m_diameter);

	}
}

void CCleanerBot::clear()
{
	m_track.clear();
}
