#pragma once
#include <cassert>

#ifdef ENABLE_JCON_ASSERT
#define JCON_ASSERT assert
#else
#define JCON_ASSERT(x)
#endif
