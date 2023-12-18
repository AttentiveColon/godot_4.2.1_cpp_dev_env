/* summator.cpp */

#include "deez.h"

String Deez::get_deez() const {
	return nuts;
}

void Deez::_bind_methods() {
	ClassDB::bind_method(D_METHOD("get_deez"), &Deez::get_deez);
}

Deez::Deez() {}