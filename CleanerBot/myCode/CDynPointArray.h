/*
 * CDynPointArray.h
 *
 *  Created on: 18.12.2019
 *      Author: Dung Anh
 */
#include <iostream>
using namespace std;
#ifndef CDYNPOINTARRAY_H_
#define CDYNPOINTARRAY_H_

#include "CPoint.h"

class CDynPointArray {
private:
	CPoint* m_pArray;
	int m_nCurSize;
	int m_idxNextEmpty;
	int m_nGrowthSize;

public:
	CDynPointArray(int nSize =10,int nGrowthSize =10);
	CDynPointArray(CDynPointArray& a_origArray);
	virtual ~CDynPointArray();
	void put(CPoint a_point);
	int getElementCount();
	CPoint getElementAt(int a_index);
	void print();
	void clear();

};

#endif /* CDYNPOINTARRAY_H_ */
