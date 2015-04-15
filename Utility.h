/**
 * create at 2015-4-15 by DC Jiang
 * version 1.0.0.1
 * general function class
 */

#ifndef __UTILITY_H__
#define __UTILITY_H__

#include "SingletonBase.h"

class Utility : public Singleton < Utility >
{
public:
	/**
	 * fun : get a Point list by a rule
	 * by DC Jiang
	 * @param:
	 *	 
	 */

	/**
	 * fun : time format brush
	 * add by DC Jiang
	 * @param:
	 *   tm : time seconds
	 * @return:
	 *   xx:xx:xx
	 */
	char* GetTimeHMS ( double tm );

protected:

private:

};

#define g_utility Utility::GetSingleton ()

#endif