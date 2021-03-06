#include "drawcall.h"
#include "../constants/constants.h"
#include <stdlib.h>

Drawcall::Drawcall() {
	uModelMatrix = NULL;
	uNormalMatrix = NULL; 
	setSide(false);
	setType(NULL_DC);
	setFullStatic(false);
	objectCount = 0;
	dataBuffer = NULL;
	simpleBuffer = NULL;
}

Drawcall::~Drawcall() {
	if (uModelMatrix) free(uModelMatrix);
	uModelMatrix = NULL;
	if (uNormalMatrix) free(uNormalMatrix);
	uNormalMatrix = NULL;
}

void Drawcall::setSide(bool single) {
	singleSide = single;
}

bool Drawcall::isSingleSide() {
	return singleSide;
}

void Drawcall::setType(int typ) {
	type = typ;
}

int Drawcall::getType() {
	return type;
}

void Drawcall::setFullStatic(bool stat) {
	fullStatic = stat;
}

bool Drawcall::isFullStatic() {
	return fullStatic;
}