static char rcsid[] = "$Id$";
#include "assert.h"
#if defined(_DEBUG)
const Except_T Assert_Failed = { "Assertion failed" };
#endif
void (assert)(int e) {
	assert(e);
}
