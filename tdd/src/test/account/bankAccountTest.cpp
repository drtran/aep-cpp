#include "cute.h"
#include "bankAccountTest.h"

void thisIsAbankAccountTestTest() {
	ASSERTM("start writing tests", false);	
}

cute::suite make_suite_bankAccountTest(){
	cute::suite s;
	s.push_back(CUTE(thisIsAbankAccountTestTest));
	return s;
}



