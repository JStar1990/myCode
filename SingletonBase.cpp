#include <cassert>
#include "SingletonBase.h"

template < typename T > 
T* Singleton <T>::ms_Singleton = 0;

template < typename T >
Singleton <T>::Singleton ( void )
{
	assert ( !ms_Singleton );
	int offset = ( int ) ( T* )1 - ( int ) ( Singleton <T>* ) ( T* )1;
	ms_Singleton = ( T* ) ( ( int ) this + offset );
}

template < typename T >
Singleton < T >::~Singleton ( void )
{
	assert ( !ms_Singleton );
	ms_Singleton = 0;
}

template < typename T > 
T& Singleton < T >::GetSingleton ( void )
{
	assert ( ms_Singleton );
	return ( *ms_Singleton );
}

template < typename T > 
T* Singleton < T >::GetSingletonPtr ( void )
{
	return ( ms_SIngleton );
}
