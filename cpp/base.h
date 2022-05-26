#pragma once
#ifndef BASE_H
#define BASE_H

#include <Windows.h>

#include <string>
#include <vector>
#include <algorithm>
#include <memory>

#define _NODISCARD [[nodiscard]]
#define _UNUSED [[maybe_unused]]
#define _DEPRECATED [[deprecated]]

#define _RUTILS namespace rutils {
#define _RUTILS_END }

_RUTILS

using size_type = long long unsigned int;

_RUTILS_END

#endif
