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
	CPoint(double x, double y);
	CPoint();
	virtual ~CPoint();
	void setXY(double x, double y);
	double getX();
	double getY();
	void move(double deltaX,double deltaY);
};

#endif /* CPOINT_H_ */
