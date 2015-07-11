#include "cute.h"
#include "pawnTest.h"

//void thisIsApawnTestTest() {
//	ASSERTM("start writing tests", false);
//}

void canBeCreated() {
	ASSERTM("start writing tests", false);
}

void shouldBeWhite() {
	ASSERTM("start writing tests", false);
}

void shouldBeBlack() {
	ASSERTM("start writing tests", false);
}

cute::suite make_suite_pawnTest(){
	cute::suite s;
	s.push_back(CUTE(canBeCreated));
	s.push_back(CUTE(shouldBeWhite));
	s.push_back(CUTE(shouldBeBlack));
	return s;
}



