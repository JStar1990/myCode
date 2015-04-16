#include "Utility.h"
#include "LogicConstants.h"
#include <cstdio>
#include <cstring>

char* Utility::GetTimeHMS ( double tm )
{
	char *tm_str[10] = [];
	int tm_h = tm / LogicConstants.ONE_HOUR / LogicConstants.ONE_MINUTE;
	char *hstr[2] = [];
	sprintf ( hstr, "%0d", tm_h );

	int tm_m = tm % ( LogicConstants.ONE_HOUR * LogicConstants.ONE_MINUTE ) / LogicConstants.ONE_MINUTE;
	char *mstr[2] = [];
	sprintf ( mstr, "%0d", tm_m );

	int tm_s = tm % LogicConstants.ONE_MINUTE;
	char *sstr[2] = [];
	sprintf ( sstr, "%0d", tm_s );

	sprintf ( tm_str, "%s:%s:%s", tm_h, tm_m, tm_s );

	return tm_str;
} 
