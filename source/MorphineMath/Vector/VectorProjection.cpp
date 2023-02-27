/*
 *	Definition:
 *		project(a, b) = c; c∥b; |c| = |a|cos(a,b)                                 a, b, c - vectors;
 *      reject(a, b) = c; c⊥b; |c| = |a|sin(a,b)                                  a, b, c - vectors;
 *	Theorems:
 *		1. project(a, b) = b * ((a, b)/(b, b))                                     a, b, c - vectors;
 *		2. reject(a, b) = a - b * ((a, b)/(b, b))                                  a, b, c - vectors;
 *	Proofs of theorems:
 *		1. 
 *			λ = ((a, b)/(b, b)); c = bλ;
 *			bλ∥b
 *		2. //TODO
 */

#include "../../../include/MorphineMath/Vector.hpp"

namespace MorphineMath
{

VECTOR
Vector4OrthoNormProject
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	F32 x = VectorGetX(Vector1OrthoNormDot(v1, v2));
	F32 y = VectorGetX(Vector1OrthoNormLengthSq(v2));
	VECTOR vResult = VectorScale(v2, x / y);
	return vResult;
}

VECTOR
Vector1OrthoNormReject
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTOR vProject = Vector1OrthoNormProject(v1, v2);
	VECTOR vResult = VectorSubtract(v1, vProject);
	return vResult;
}

VECTOR
Vector2OrthoNormProject
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	F32 x = VectorGetX(Vector2OrthoNormDot(v1, v2));
	F32 y = VectorGetX(Vector2OrthoNormLengthSq(v2));
	VECTOR vResult = VectorScale(v2, x / y);
	return vResult;
}

VECTOR
Vector2OrthoNormReject
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTOR vProject = Vector2OrthoNormProject(v1, v2);
	VECTOR vResult = VectorSubtract(v1, vProject);
	return vResult;
}

VECTOR
Vector3OrthoNormProject
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	F32 x = VectorGetX(Vector3OrthoNormDot(v1, v2));
	F32 y = VectorGetX(Vector3OrthoNormLengthSq(v2));
	VECTOR vResult = VectorScale(v2, x / y);
	return vResult;
}

VECTOR
Vector3OrthoNormReject
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTOR vProject = Vector3OrthoNormProject(v1, v2);
	VECTOR vResult = VectorSubtract(v1, vProject);
	return vResult;
}

VECTOR
Vector4OrthoNormProject
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	F32 x = VectorGetX(Vector4OrthoNormDot(v1, v2));
	F32 y = VectorGetX(Vector4OrthoNormLengthSq(v2));
	VECTOR vResult = VectorScale(v2, x / y);
	return vResult;
}

VECTOR
Vector4OrthoNormReject
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTOR vProject = Vector4OrthoNormProject(v1, v2);
	VECTOR vResult = VectorSubtract(v1, vProject);
	return vResult;
}

}