/* SPDX-License-Identifier: MIT */

#ifndef ASSERT_H
#define ASSERT_H

void __assert_fail(const char *, const char *, unsigned int, const char *);

#define assert(expression)                                                                         \
    ((expression) ? (void)0 : __assert_fail(#expression, __FILE__, __LINE__, __func__))

/* Requires C11 */
#define static_assert _Static_assert

#endif
