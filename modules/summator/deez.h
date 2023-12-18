/* deez.h */

#ifndef DEEZ_H
#define DEEZ_H

#include "core/object/ref_counted.h"


class Deez : public RefCounted {
	GDCLASS(Deez, RefCounted);

	String nuts = "nuts";

protected:
	static void _bind_methods();

public:
	String get_deez() const;

	Deez();
};

#endif // DEEZ_H