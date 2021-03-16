/*
 * CDynPointArray.cpp
 *
 *  Created on: 18.12.2019
 *      Author: Dung Anh
 */

#include "CDynPointArray.h"


CDynPointArray::CDynPointArray(int nSize, int nGrowthSize)
{

	m_nCurSize =nSize;
	m_pArray = new CPoint[nSize];
	if(m_idxNextEmpty < 0 || m_idxNextEmpty > nSize) m_idxNextEmpty = 0;
	m_nGrowthSize = nGrowthSize;
}

CDynPointArray::CDynPointArray(CDynPointArray &origArray)
{

	m_nCurSize = origArray.m_nCurSize;
	m_pArray = new CPoint[m_nCurSize];
	m_idxNextEmpty = origArray.m_idxNextEmpty;
	m_nGrowthSize = origArray.m_nGrowthSize;
	for(int i = 0; i< m_nCurSize; i++)
	{
		m_pArray[i] = origArray.m_pArray[i];
	}
}

CDynPointArray::~CDynPointArray() {
	// TODO Auto-generated destructor stub

}

void CDynPointArray::put(CPoint point)
{
	if(m_idxNextEmpty == m_nCurSize)
	{
		m_nCurSize += m_nGrowthSize;
		CPoint *temp = new CPoint[m_nCurSize];
		for(int i = 0 ; i< m_nCurSize ; i++)
		{
			temp[i]= m_pArray[i];
		}
		delete []m_pArray;
		m_pArray = temp;
	}
		*(m_pArray+(m_idxNextEmpty++)) = point;
}

int CDynPointArray::getElementCount()
{
	return m_idxNextEmpty;
}

CPoint CDynPointArray::getElementAt(int index)
{
	return m_pArray[index];
}

void CDynPointArray::print()
{
	cout << "\nAdresse des Arrays: " << &m_pArray <<"\nAtuelle Grosse ist "<< m_nCurSize
			<< "\nnaschte freie Stelle ist "<< m_idxNextEmpty <<endl;
	for(int i = 0; i < m_idxNextEmpty; i++)
	{
		cout<<i+1<<". Elemente des Arrays "<< getElementAt(i).getX()<<","<<getElementAt(i).getY()<<endl;
	}

}

void CDynPointArray::clear()
{
	m_pArray[0].setXY(m_pArray[m_idxNextEmpty-1].getX(),m_pArray[m_idxNextEmpty-1].getY());
	for(int i = 1; i< m_nCurSize; i++)
	{
		m_pArray[i].setXY(0,0);
	}
	m_idxNextEmpty = 1;
	cout << endl<<endl;
}
