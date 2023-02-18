/*
 *	BASIC AXIOMS:
 *	1. a + b = b + a                        a, b - vectors;
 *	2. (a + b) + c = a + (b + c)            a, b, c - vectors;
 *	3. a + 0 = a                            a, 0 - vectors;
 *	4. a + (-1)a = 0                        a, 0 - vectors;
 *	5. (αβ)a = α(βa)                        a - vectors; α, β - scalars;
 *	6. (α + β)a = αa + βa                   a - vectors; α, β - scalars;
 *	7. α(a + b) = αa + αb                   a, b - vectors; α - scalars;
 *	8. 1a = a                               a - vectors;
 *
 *	DECLARATONS:
 *	1. -a = (-1)a                           a - vectors;
 *
 *	VECTOR:
 *	a = (α1)e1 + (α2)e2 + ... + (αn)en      a, en - vectors; αn - scalars; en - basis;
 *	a = (α1, α2, ..., αn)                   a - vectors; αn - scalars;
 *
 */

#ifndef MORPHINE_MATH_VECTOR_HPP
#define MORPHINE_MATH_VECTOR_HPP

#include "Scalar.hpp"
#include "Constants.hpp"

namespace MorphineMath
{
	/**************************************************************************
	*
	* Types declaration
	*
	**************************************************************************/
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

	/**************************************************************************
	*
	* Common vector operations overloads
	*
	**************************************************************************/
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
		/**************************************************************************
		*
		* Common vector operations
		*
		**************************************************************************/
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

		F32	VectorGetX(CVECTOR v) noexcept;
		F32	VectorGetY(CVECTOR v) noexcept;
		F32	VectorGetZ(CVECTOR v) noexcept;
		F32	VectorGetW(CVECTOR v) noexcept;
		
		U32	VectorGetIntX(CVECTOR v) noexcept;
		U32	VectorGetIntY(CVECTOR v) noexcept;
		U32	VectorGetIntZ(CVECTOR v) noexcept;
		U32	VectorGetIntW(CVECTOR v) noexcept;

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

		VECTOR	VectorSelect(CVECTOR v1, CVECTOR v2, CVECTOR control);

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

		/**************************************************************************
		*
		* 1D vector operations
		*
		**************************************************************************/
		VECTOR	Vector1Covector(CVECTOR v, CVECTOR e1) noexcept;
		VECTOR	Vector1Dot(CVECTOR v1, CVECTOR v2, CVECTOR e1, VECTOR* cov = nullptr) noexcept;
		VECTOR	Vector1OrthoNormDot(CVECTOR v1, CVECTOR v2) noexcept;
		VECTOR	Vector1OrthoNormLength(CVECTOR v) noexcept;
		VECTOR	Vector1OrthoNormLengthSq(CVECTOR v) noexcept;
		VECTOR	Vector1OrthoNormNormalize(CVECTOR v) noexcept;
		VECTOR	Vector1OrthoNormCos(CVECTOR v1, CVECTOR v2) noexcept;
		//TODO VECTOR	Vector1OrthoNormTripleProduct(CVECTOR v1, CVECTOR v2, CVECTOR v3) noexcept;
		//TODO VECTOR	Vector1OrthoClampLength(CVECTOR v, CVECTOR min, CVECTOR max) noexcept;
		//TODO VECTOR	Vector1Cross(CVECTOR v1, CVECTOR v2) noexcept;
		//TODO VECTOR	Vector1Project(CVECTOR v1, CVECTOR v2) noexcept;
		//TODO VECTOR	Vector1Reject(CVECTOR v1, CVECTOR v2) noexcept;
		//TODO ...

		/**************************************************************************
		*
		* 2D vector operations
		*
		**************************************************************************/
		VECTOR	Vector2Covector(CVECTOR v, CVECTOR e1, CVECTOR e2) noexcept;
		VECTOR	Vector2Dot(CVECTOR v1, CVECTOR v2, CVECTOR e1, CVECTOR e2, VECTOR* cov = nullptr) noexcept;
		VECTOR	Vector2OrthoNormDot(CVECTOR v1, CVECTOR v2) noexcept;
		VECTOR	Vector2OrthoNormLength(CVECTOR v) noexcept;
		VECTOR	Vector2OrthoNormLengthSq(CVECTOR v) noexcept;
		VECTOR	Vector2OrthoNormNormalize(CVECTOR v) noexcept;
		VECTOR	Vector2OrthoNormCos(CVECTOR v1, CVECTOR v2) noexcept;
		//TODO VECTOR	Vector2OrthoNormTripleProduct(CVECTOR v1, CVECTOR v2, CVECTOR v3) noexcept;
		//TODO VECTOR	Vector2OrthoClampLength(CVECTOR v, CVECTOR min, CVECTOR max) noexcept;
		//TODO VECTOR	Vector2Cross(CVECTOR v1, CVECTOR v2) noexcept;
		//TODO VECTOR	Vector2Project(CVECTOR v1, CVECTOR v2) noexcept;
		//TODO VECTOR	Vector2Reject(CVECTOR v1, CVECTOR v2) noexcept;
		//TODO ...

		/**************************************************************************
		*
		* 3D vector operations
		*
		**************************************************************************/
		VECTOR	Vector3Covector(CVECTOR v, CVECTOR e1, CVECTOR e2, CVECTOR e3) noexcept;
		VECTOR	Vector3Dot(CVECTOR v1, CVECTOR v2, CVECTOR e1, CVECTOR e2, CVECTOR e3, VECTOR* cov = nullptr) noexcept;
		VECTOR	Vector3OrthoNormDot(CVECTOR v1, CVECTOR v2) noexcept;
		VECTOR	Vector3OrthoNormLength(CVECTOR v) noexcept;
		VECTOR	Vector3OrthoNormLengthSq(CVECTOR v) noexcept;
		VECTOR	Vector3OrthoNormNormalize(CVECTOR v) noexcept;
		VECTOR	Vector3OrthoNormCos(CVECTOR v1, CVECTOR v2) noexcept;
		//TODO VECTOR	Vector3OrthoNormTripleProduct(CVECTOR v1, CVECTOR v2, CVECTOR v3) noexcept;
		//TODO VECTOR	Vector3OrthoClampLength(CVECTOR v, CVECTOR min, CVECTOR max) noexcept;
		//TODO VECTOR	Vector3Cross(CVECTOR v1, CVECTOR v2) noexcept;
		//TODO VECTOR	Vector3Project(CVECTOR v1, CVECTOR v2) noexcept;
		//TODO VECTOR	Vector3Reject(CVECTOR v1, CVECTOR v2) noexcept;
		//TODO ...

		/**************************************************************************
		*
		* 4D vector operations
		*
		**************************************************************************/
		VECTOR	Vector4Covector(CVECTOR v, CVECTOR e1, CVECTOR e2, CVECTOR e3, CVECTOR e4) noexcept;
		VECTOR	Vector4Dot(CVECTOR v1, CVECTOR v2, CVECTOR e1, CVECTOR e2, CVECTOR e3, CVECTOR e4, VECTOR* cov = nullptr) noexcept;
		VECTOR	Vector4OrthoNormDot(CVECTOR v1, CVECTOR v2) noexcept;
		VECTOR	Vector4OrthoNormLength(CVECTOR v) noexcept;
		VECTOR	Vector4OrthoNormLengthSq(CVECTOR v) noexcept;
		VECTOR	Vector4OrthoNormNormalize(CVECTOR v) noexcept;
		VECTOR	Vector4OrthoNormCos(CVECTOR v1, CVECTOR v2) noexcept;
		//TODO VECTOR	Vector4OrthoNormTripleProduct(CVECTOR v1, CVECTOR v2, CVECTOR v3) noexcept;
		//TODO VECTOR	Vector4OrthoClampLength(CVECTOR v, CVECTOR min, CVECTOR max) noexcept;
		//TODO VECTOR	Vector4Cross(CVECTOR v1, CVECTOR v2) noexcept;
		//TODO VECTOR	Vector4Project(CVECTOR v1, CVECTOR v2) noexcept;
		//TODO VECTOR	Vector4Reject(CVECTOR v1, CVECTOR v2) noexcept;
		//TODO ...
}

#endif /*MORPHINE_MATH_VECTOR_HPP*/