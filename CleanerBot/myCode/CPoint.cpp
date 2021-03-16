/*
 * CPoint.cpp
 *
 *  Created on: 11.12.2019
 *      Author: Dung Anh
 */

#include "CPoint.h"
CPoint::CPoint(double x, double y)
{
	m_x = x;
	m_y =y;
}

CPoint::CPoint()
{
	// TODO Auto-generated constructor stub
	m_x = 0;
	m_y = 0;

}

CPoint::~CPoint()
{
	// TODO Auto-generated destructor stub
}

void CPoint::setXY(double x, double y)
{
	m_x =x;
	m_y =y;
}

double CPoint::getX()
{
	return m_x;
}

double CPoint::getY()
{
	return m_y;
}

void CPoint::move(double deltaX, double deltaY)
{
	m_x =m_x+ deltaX;
	m_y =m_y+ deltaY;
}
