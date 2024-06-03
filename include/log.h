#pragma once

#include <cstdio>

#define MAT_FUNC_IN() printf("[FUNC IN] __%s__", __FUNCTION__)
#define MAT_DEBUG(fmt,...) printf(fmt,##__VA_ARGS__);printf("\n")
#define MAT_DEBUG_(fmt,...) printf(fmt,##__VA_ARGS__)
