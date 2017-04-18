///0_test
#include "ctest.h"
#include "deposit.h"

CTEST (RangeContribTest, LeftRangePoint1)
{
	const int Input_Data = Process (0, 1000);
	const int Expected_Data = 900;
	ASSERT_EQUAL(Expected_Data, Input_Data); 
}

CTEST (RangeContribTest, RightRangePoint1)
{
	const int Input_Data = Process (30, 1000);
	const int Expected_Data = 900;
	ASSERT_EQUAL(Expected_Data, Input_Data); 
}

CTEST (RangeContribTest, LeftRangePoint2)
{
	const int Input_Data = Process (31, 1000);
	const int Expected_Data = 1020;
	ASSERT_EQUAL(Expected_Data, Input_Data); 
}

CTEST (RangeContribTest, RightRangePoint2)
{
	const int Input_Data = Process (120, 2000);
	const int Expected_Data = 2040;
	ASSERT_EQUAL(Expected_Data, Input_Data); 
}

CTEST (RangeContribTest, LeftRangePoint3)
{
	const int Input_Data = Process (121, 1000);
	const int Expected_Data = 1060;
	ASSERT_EQUAL(Expected_Data, Input_Data); 
}

CTEST (RangeContribTest, RightRangePoint3)
{
	const int Input_Data = Process (240, 2000);
	const int Expected_Data = 2120;
	ASSERT_EQUAL(Expected_Data, Input_Data); 
}

CTEST (RangeContribTest, LeftRangePoint4)
{
	const int Input_Data = Process (241, 1000);
	const int Expected_Data = 1120;
	ASSERT_EQUAL(Expected_Data, Input_Data); 
}

CTEST (RangeContribTest, RightRangePoint4)
{
	const int Input_Data = Process (365, 2000);
	const int Expected_Data = 2240;
	ASSERT_EQUAL(Expected_Data, Input_Data); 
}
