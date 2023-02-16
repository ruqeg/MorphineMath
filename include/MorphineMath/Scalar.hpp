#ifndef MORPHINE_MATH_SCALAR_HPP
#define MORPHINE_MATH_SCALAR_HPP

#include "Types.hpp"

namespace MorphineMath
{

F32	ScalarRound(F32 s) noexcept;
F32	ScalarFloor(F32 s) noexcept;
F32	ScalarCeil(F32 s) noexcept;
F32	ScalarTrunc(F32 s) noexcept;
F32	ScalarClamp(F32 s, F32 min, F32 max) noexcept;
F32	ScalarAbs(F32 s) noexcept;

F32	ScalarPow(F32 s1, F32 s2) noexcept;
F32	ScalarSqrt(F32 s) noexcept;

F32	ScalarExp2(F32 s) noexcept;
F32	ScalarExp(F32 s) noexcept;

F32	ScalarLog2(F32 s) noexcept;
F32	ScalarLog10(F32 s) noexcept;
F32	ScalarLog(F32 s) noexcept;

F32	ScalarSin(F32 s) noexcept;
F32	ScalarCos(F32 s) noexcept;
F32	ScalarTan(F32 s) noexcept;
F32	ScalarArcSin(F32 s) noexcept;
F32	ScalarArcCos(F32 s) noexcept;
F32	ScalarArcTan(F32 s) noexcept;

}

#endif /*MORPHINE_MATH_SCALAR_HPP*/