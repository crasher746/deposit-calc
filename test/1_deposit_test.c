///1_test
#include "ctest.h"
#include "deposit.h"

CTEST (CorrectnessOfDataEntry, WrongTermWrongContrib)
{
	const int Input_Data = Input (-1, 900);
	const int Expected_Data = 1;
	ASSERT_EQUAL(Expected_Data, Input_Data);
}

CTEST (CorrectnessOfDataEntry, WrongTerm1WrongContrib1)
{
	const int Input_Data = Input (366, 900);
	const int Expected_Data = 1;
	ASSERT_EQUAL(Expected_Data, Input_Data);
}

CTEST (CorrectnessOfDataEntry, WrongTermTrueContrib)
{
	const int Input_Data = Input (-1, 1500);
	const int Expected_Data = 1;
	ASSERT_EQUAL(Expected_Data, Input_Data);
}

CTEST (CorrectnessOfDataEntry, WrongTerm1TrueContrib)
{
	const int Input_Data = Input (366, 1500);
	const int Expected_Data = 1;
	ASSERT_EQUAL(Expected_Data, Input_Data);
}

CTEST (CorrectnessOfDataEntry, TrueTermWrongContrib)
{
	const int Input_Data = Input (100, -1000);
	const int Expected_Data = 1;
	ASSERT_EQUAL(Expected_Data, Input_Data);
}

CTEST (CorrectnessOfDataEntry, TrueTermTrueContrib)
{
	const int Input_Data = Input (200, 2000);
	const int Expected_Data = 0;
	ASSERT_EQUAL(Expected_Data, Input_Data);
}
