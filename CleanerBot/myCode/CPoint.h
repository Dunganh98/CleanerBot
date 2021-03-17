/*
 * CPoint.h
 *
 *  Created on: 11.12.2019
 *      Author: Dung Anh
 */

#ifndef CPOINT_H_
#define CPOINT_H_

class CPoint
{
private:
	double m_x;
	double m_y;

public:
	CPoint(double a_x, double a_y);
	CPoint();
	virtual ~CPoint();
	void setXY(double a_x, double a_y);
	double getX();
	double getY();
	void move(double a_deltaX,double a_deltaY);
};

#endif /* CPOINT_H_ */
