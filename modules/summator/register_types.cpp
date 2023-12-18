/* register_types.cpp */

#include "register_types.h"

#include "core/object/class_db.h"
#include "summator.h"
#include "deez.h"

void initialize_summator_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
			return;
	}
	ClassDB::register_class<Summator>();
	ClassDB::register_class<Deez>();
}

void uninitialize_summator_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
			return;
	}
   // Nothing to do here in this example.
}

