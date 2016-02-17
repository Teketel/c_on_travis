#include <check.h>
#include "../lib/src/tkutil.h"

START_TEST (test_tkutil_magic_number) {
	ck_assert_int_eq(get_magic_number(), 53);
}
END_TEST

int main(void) {
	return 0;
}
