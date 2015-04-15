/**
 * create at 2015-4-15 by DC Jiang
 * version 1.0.0.1
 * singleton model class template
 */

#ifndef __SINGLETON_BASE_H__
#define __SINGLETON_BASE_H__

#include <cassert>

template <typename T> 
class Singleton
{
	static T* ms_Singleton;

public:
	Singleton ( void );
	~Singleton ( void );

	static T& GetSingleton ( void );
	static T* GetSingletonPtr ( void );
};

#endif