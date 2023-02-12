#ifndef MORPHINE_MATH_SCALAR_HPP
#define MORPHINE_MATH_SCALAR_HPP

#include "Types.hpp"

namespace MorphineMath
{

F32 ScalarRound(F32 s) noexcept;
F32 ScalarFloor(F32 s) noexcept;
F32 ScalarCeil(F32 s) noexcept;
F32 ScalarTrunc(F32 s) noexcept;
F32 ScalarClamp(F32 s, F32 min, F32 max) noexcept;

}

#endif /*MORPHINE_MATH_SCALAR_HPP*/