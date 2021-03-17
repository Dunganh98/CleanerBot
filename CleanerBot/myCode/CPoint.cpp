/*
 * CPoint.cpp
 *
 *  Created on: 11.12.2019
 *      Author: Dung Anh
 */

#include "CPoint.h"
CPoint::CPoint(double a_x, double a_y)
{
	m_x = a_x;
	m_y = a_y;
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

void CPoint::setXY(double a_x, double a_y)
{
	m_x = a_x;
	m_y = a_y;
}

double CPoint::getX()
{
	return m_x;
}

double CPoint::getY()
{
	return m_y;
}

void CPoint::move(double a_deltaX, double a_deltaY)
{
	m_x =m_x + a_deltaX;
	m_y =m_y + a_deltaY;
}
