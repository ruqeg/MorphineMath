#ifndef MORPHINE_MATH_VECTOR_HPP
#define MORPHINE_MATH_VECTOR_HPP

#include "Scalar.hpp"

namespace MorphineMath
{
	struct VECTOR
	{
		union
		{
			F32x4 vector4_f32;
			U32x4 vector4_u32;
		};
	};

	using CVECTOR = const VECTOR&;

	struct VECTORF32
	{
		union
		{
			F32x4 f;
			VECTOR v;
		};

		operator VECTOR() const noexcept;
	};

	struct VECTORU32
	{
		union
		{
			U32x4 u;
			VECTOR v;
		};

		operator VECTOR() const noexcept;
	};

#if defined(_MORPHINEMATH_VECTOR_OVERLOADS_)
		VECTOR	operator+ (CVECTOR v) noexcept;
		VECTOR	operator- (CVECTOR v) noexcept;

		VECTOR& operator+= (CVECTOR v1, CVECTOR v2) noexcept;
		VECTOR& operator-= (CVECTOR v1, CVECTOR v2) noexcept;
		VECTOR& operator*= (CVECTOR v1, CVECTOR v2) noexcept;
		VECTOR& operator/= (CVECTOR v1, CVECTOR v2) noexcept;

		VECTOR& operator*= (CVECTOR v, F32 s) noexcept;
		VECTOR& operator/= (CVECTOR v, F32 s) noexcept;

		VECTOR	operator+ (CVECTOR v1, CVECTOR v2) noexcept;
		VECTOR	operator- (CVECTOR v1, CVECTOR v2) noexcept;
		VECTOR	operator* (CVECTOR v1, CVECTOR v2) noexcept;
		VECTOR	operator/ (CVECTOR v1, CVECTOR v2) noexcept;
		VECTOR	operator* (CVECTOR v, F32 s) noexcept;
		VECTOR	operator* (F32 s, CVECTOR v) noexcept;
		VECTOR	operator/ (CVECTOR v, F2 s) noexcept;
#endif

		VECTOR	VectorZero() noexcept;
		VECTOR	VectorSet(F32 x, F32 y, F32 z, F32 w) noexcept;
		VECTOR	VectorSetInt(U32 x, U32 y, U32 z, U32 w) noexcept;
		VECTOR	VectorFill(F32 value) noexcept;
		VECTOR	VectorFillInt(U32 value) noexcept;
		VECTOR	VectorTrueInt() noexcept;
		VECTOR	VectorFalseInt() noexcept;
		VECTOR	VectorSplatX(CVECTOR v) noexcept;
		VECTOR	VectorSplatY(CVECTOR v) noexcept;
		VECTOR	VectorSplatZ(CVECTOR v) noexcept;
		VECTOR	VectorSplatW(CVECTOR v) noexcept;
		VECTOR	VectorSplatOne() noexcept;
		VECTOR	VectorSplatInfinity() noexcept;
		VECTOR	VectorSplatQNaN() noexcept;
		VECTOR	VectorSplatEpsilon() noexcept;

		F32		VectorGetX(CVECTOR v) noexcept;
		F32		VectorGetY(CVECTOR v) noexcept;
		F32		VectorGetZ(CVECTOR v) noexcept;
		F32		VectorGetW(CVECTOR v) noexcept;

		U32		VectorGetIntX(CVECTOR v) noexcept;
		U32		VectorGetIntY(CVECTOR v) noexcept;
		U32		VectorGetIntZ(CVECTOR v) noexcept;
		U32		VectorGetIntW(CVECTOR v) noexcept;

		VECTOR	VectorSetX(CVECTOR V, F32 x) noexcept;
		VECTOR	VectorSetY(CVECTOR V, F32 y) noexcept;
		VECTOR	VectorSetZ(CVECTOR V, F32 z) noexcept;
		VECTOR	VectorSetW(CVECTOR V, F32 w) noexcept;

		VECTOR	VectorSetIntX(CVECTOR v, U32 x) noexcept;
		VECTOR	VectorSetIntY(CVECTOR v, U32 y) noexcept;
		VECTOR	VectorSetIntZ(CVECTOR v, U32 z) noexcept;
		VECTOR	VectorSetIntW(CVECTOR v, U32 w) noexcept;

		VECTOR	VectorEqual(CVECTOR v1, CVECTOR v2) noexcept;
		VECTOR	VectorEqualInt(CVECTOR v1, CVECTOR v2) noexcept;
		VECTOR	VectorNearEqual(CVECTOR v1, CVECTOR v2, CVECTOR vepsilon) noexcept;
		VECTOR	VectorNotEqual(CVECTOR v1, CVECTOR v2) noexcept;
		VECTOR	VectorNotEqualInt(CVECTOR v1, CVECTOR v2) noexcept;
		VECTOR	VectorGreater(CVECTOR v1, CVECTOR v2) noexcept;
		VECTOR	VectorGreaterOrEqual(CVECTOR v1, CVECTOR v2) noexcept;
		VECTOR	VectorLess(CVECTOR v1, CVECTOR v2) noexcept;
		VECTOR	VectorLessOrEqual(CVECTOR v1, CVECTOR v2) noexcept;
		VECTOR	VectorInBounds(CVECTOR v, CVECTOR vbounds) noexcept;
		
		VECTOR	VectorIsNaN(CVECTOR v) noexcept;
		VECTOR	VectorIsInfinite(CVECTOR v) noexcept;
		
		VECTOR	VectorMin(CVECTOR v1, CVECTOR v2) noexcept;
		VECTOR	VectorMax(CVECTOR v1, CVECTOR v2) noexcept;
		VECTOR	VectorRound(CVECTOR v) noexcept;
		VECTOR	VectorFloor(CVECTOR v) noexcept;
		VECTOR	VectorCeil(CVECTOR v) noexcept;
		VECTOR	VectorTrunc(CVECTOR v) noexcept;
		VECTOR	VectorClamp(CVECTOR v, CVECTOR vmin, CVECTOR vmax) noexcept;
		
		VECTOR	VectorAndInt(CVECTOR v1, CVECTOR v2) noexcept;
		VECTOR	VectorOrInt(CVECTOR v1, CVECTOR v2) noexcept;
		VECTOR	VectorNorInt(CVECTOR v1, CVECTOR v2) noexcept;
		VECTOR	VectorXorInt(CVECTOR v1, CVECTOR v2) noexcept;

		VECTOR	VectorNegate(CVECTOR v) noexcept;
		VECTOR	VectorAdd(CVECTOR v1, CVECTOR v2) noexcept;
		VECTOR	VectorSubtract(CVECTOR v1, CVECTOR v2) noexcept;
		VECTOR	VectorMultiply(CVECTOR v1, CVECTOR v2) noexcept;
		VECTOR	VectorMultiplyAdd(CVECTOR v1, CVECTOR v2, CVECTOR v3) noexcept;
		VECTOR	VectorDivide(CVECTOR v1, CVECTOR v2) noexcept;
		VECTOR	VectorDivideAdd(CVECTOR v1, CVECTOR v2, CVECTOR v3) noexcept;
		VECTOR	VectorScale(CVECTOR v, F32 s) noexcept;
		VECTOR	VectorSqrt(CVECTOR v) noexcept;
		VECTOR	VectorExp2(CVECTOR v) noexcept;
		VECTOR	VectorExp(CVECTOR v) noexcept;
		VECTOR	VectorLog2(CVECTOR v) noexcept;
		VECTOR	VectorLog10(CVECTOR v) noexcept;
		VECTOR	VectorLog(CVECTOR v) noexcept;
		VECTOR	VectorPow(CVECTOR v1, CVECTOR v2) noexcept;
		VECTOR	VectorAbs(CVECTOR v) noexcept;
		VECTOR	VectorCos(CVECTOR v) noexcept;
		VECTOR	VectorSin(CVECTOR v) noexcept;
		VECTOR	VectorTan(CVECTOR v) noexcept;
		VECTOR	VectorArcCos(CVECTOR v) noexcept;
		VECTOR	VectorArcSin(CVECTOR v) noexcept;
		VECTOR	VectorArcTan(CVECTOR v) noexcept;
}

#endif /*MORPHINE_MATH_VECTOR_HPP*/