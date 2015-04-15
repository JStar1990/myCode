/**
 * create at 2015-4-15 by DC Jiang
 * version 1.0.0.1
 * mathematical formula
 */

#ifndef __MATH_FOEMULS_H__
#define __MATH_FOEMULS_H__

#include "SingletonBase.h"
#include <vector>

class MathFormula : public Singleton < MathFormula >
{
public:
	/**
	 * fun : linear function
	 * by DC Jiang
	 * @param:
	 *	 a : linear function slope
	 *   pos : begin point
	 *   dis : space 
	 * @return: 2 length array for point
	 *  
	 */
	double* LineFunction ( double a, double* pos[2], double dis );
	
protected:

private:

};

#define g_MathFormula MathFormula::GetSingleton ()

#endif