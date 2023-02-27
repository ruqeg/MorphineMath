/*
 *	Definition:
 *		triple_product(a, b, c) = (a, b, c) = +-V(a, b, c)                               a, b, c - vectors; V - volume of parallelepiped
 *      cross(a, b) = [a, b] = c; c⊥a; c⊥b; |c| = +-S(a, b)                             a, b, c - vectors; S - area of parallelogram;
 *	Properties:
 *		1. (a, b, c) = (c, a, b) = (b, c, a) = −(b, a, c) = −(c, b, a) = −(a, c, b)      a, b, c - vectors in orthonormal basis;
 *	Assumptions:
 *		1. (x, a, b) = (x, d); d = [a, b]                                                x, a, b, d - vectors in orthonormal basis;
 *		2. [a, b] = -[b, a]                                                              a, b - vectors;
 *		3. [λb1 + µb2, c] = λ[b1, c] + µ[b2, c]                                          b1, b2, c - vectors; λ, µ - scalars;
 *	Theorems:
 *		1. 
 *			[a, b] = [(α1e1 + α2e2 + α3e3), (β1e1 + β2e2 + β3e3)] =                      a, b - vectors; e1, e2, e3 - basis; α1, α2, α3, β1, β2, β3 - scalars;
 *			= (α1β2 − α2β1)[e1, e2] +                                                    a, b - vectors; e1, e2, e3 - basis; α1, α2, α3, β1, β2, β3 - scalars;
 *			+ (α2β3 − α3β2)[e2, e3] +                                                    a, b - vectors; e1, e2, e3 - basis; α1, α2, α3, β1, β2, β3 - scalars;
 *			+ (α3β1 − α1β3)[e3, e1]                                                      a, b - vectors; e1, e2, e3 - basis; α1, α2, α3, β1, β2, β3 - scalars;
 *		2. 
 *			(a, b, c) =                                                                  a, b, c - vectors; e1, e2, e3 - basis; α1, α2, α3, β1, β2, β3, γ1, γ2, γ3 - scalars;
 *			= (α1β2γ3 + α2β3γ1 + α3β1γ2 − α3β2γ1 − α2β1γ3 − α1β3γ2)(e1, e2, e3)          a, b, c - vectors; e1, e2, e3 - basis; α1, α2, α3, β1, β2, β3, γ1, γ2, γ3 - scalars;
 *		3. 
 *			[a, [b, c]] = (a, c)b - (a, b)c                                              a, b, c - vectors;
 *	Consequence:
 *		P2 => 
 *			(λa1 + µa2, b, c) = λ(a1, b, c) + µ(a2, b, c)                                a1, a2, b, c - vectors; λ, µ - scalars;
 *			(a, λb1 + µb2, c) = λ(a, b1, c) + µ(a, b2, c)                                a, b1, b2, c - vectors; λ, µ - scalars;
 *			(a, b, λc1 + µc2) = λ(a, b, c1) + µ(a, b, c2)                                a, b, c1, c2 - vectors; λ, µ - scalars;
 *      A1 + DOT =>
 *			e1` = [e2, e3] / (e1, e2, e3)                                                e1, e2, e3 - basis; e1`, e2`, e3` - orthogonal basis;
 *			e2` = [e3, e1] / (e1, e2, e3)                                                e1, e2, e3 - basis; e1`, e2`, e3` - orthogonal basis;
 *			e3` = [e1, e2] / (e1, e2, e3)                                                e1, e2, e3 - basis; e1`, e2`, e3` - orthogonal basis;
 *		T1 => 
 *			[a, b] = (α2β3 − α3β2)e1+ + (α3β1 − α1β3)e2 + (α1β2 − α2β1)e3                a, b - vectors in orthonormal basis; e1, e2, e3 - orthonormal basis; α1, α2, α3, β1, β2, β3 - scalars;
 *		T1 => 
 *			[a, b] =                                                                     a, b - vectors; e1`, e2`, e3` - orthogonal basis; e1, e2, e3 - basis; α1, α2, α3, β1, β2, β3 - scalars;
 *			= (α2β3 − α3β2)(e1, e2, e3)e1`
 *			+ (α3β1 − α1β3)(e1, e2, e3)e2`
 *			+ (α1β2 − α2β1)(e1, e2, e3)e3`
 *	Proofs of assumptions:
 *		1 
 *			x = a:  ((a, a, b) = (a, d) = 0) => a⊥d                                      x, a, b, d - vectors in orthonormal basis;
 *			x = b:  ((b, a, b) = (b, d) = 0) => b⊥d                                      x, a, b, d - vectors in orthonormal basis;
 *			x = d:  ((d, a, b) = (d, d) = |d|^2) => (d, a, b) > 0                         x, a, b, d - vectors in orthonormal basis;
 *			x = d/|d|:  (x, a, b) = (x, d) = (d, d)/|d| = |d| =>                          x, a, b, d - vectors in orthonormal basis;
 *			=> |d| = S = |a||b|sin(a,b)                                                   x, a, b, d - vectors in orthonormal basis;
 *			=> (x, a, b) = (x, [a, b])                                                    x, a, b, d - vectors in orthonormal basis;
 *		2 
 *			(x, [b, a]) = −(x, d) = (x, (−d)) = (x, [a, b])                               a, b - vectors;
 *		3 
 *			(a, [λb1 + µb2, c]) = (a, λ[b1, c] + µ[b2, c])                                a, b1, b2, c - vectors; λ, µ - scalars;
 *	Proofs of theorems:
 *		1. //TODO from A2
 *		2. //TODO from A2
 *		3. //TODO
 *	Proofs of consequence of theorems:
 *		1. //TODO
 *		2. //TODO
 */

#include "../../../include/MorphineMath/Vector.hpp"

namespace MorphineMath
{

VECTOR
Vector3TripleProduct
(
	CVECTOR v1,
	CVECTOR v2,
	CVECTOR v3,
	CVECTOR e1,
	CVECTOR e2,
	CVECTOR e3
) noexcept
{
	F32 x = VectorGetX(Vector3OrthoNormTripleProduct(v1, v2, v3));
	F32 y = VectorGetX(Vector3OrthoNormTripleProduct(e1, e2, e3));
	VECTOR vResult = VectorFill(x * y);
	return vResult;
}

VECTOR
Vector3Cross
(
	CVECTOR v1,
	CVECTOR v2,
	CVECTOR e1,
	CVECTOR e2,
	CVECTOR e3
) noexcept
{
	VECTOR vResult;
	{
		F32 s1 = v1.vector4_f32[1] * v2.vector4_f32[2] - v1.vector4_f32[2] * v2.vector4_f32[1];
		F32 s2 = v1.vector4_f32[2] * v2.vector4_f32[0] - v1.vector4_f32[0] * v2.vector4_f32[2];
		F32 s3 = v1.vector4_f32[0] * v2.vector4_f32[1] - v1.vector4_f32[1] * v2.vector4_f32[0];
		vResult = VectorScale(e1, s1);
		vResult = VectorAdd(vResult, VectorScale(e2, s2));
		vResult = VectorAdd(vResult, VectorScale(e3, s3));
	}
	return vResult;
}

VECTOR
Vector3OrthoNormTripleProduct
(
	CVECTOR v1,
	CVECTOR v2,
	CVECTOR v3
) noexcept
{
	F32 x;
	{
		x = v1.vector4_f32[0] * (v2.vector4_f32[1] * v3.vector4_f32[2] - v2.vector4_f32[2] * v3.vector4_f32[1]);
		x += v1.vector4_f32[1] * (v2.vector4_f32[2] * v3.vector4_f32[0] - v2.vector4_f32[0] * v3.vector4_f32[2]);
		x += v1.vector4_f32[2] * (v2.vector4_f32[0] * v3.vector4_f32[1] - v2.vector4_f32[1] * v3.vector4_f32[0]);
	}

	VECTOR vResult = VectorFill(x);
	return vResult;
}

VECTOR
Vector3OrthoNormCross
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTOR vResult;
	{
		vResult.vector4_f32[0] = v1.vector4_f32[1] * v2.vector4_f32[2] - v1.vector4_f32[2] * v2.vector4_f32[1];
		vResult.vector4_f32[1] = v1.vector4_f32[2] * v2.vector4_f32[0] - v1.vector4_f32[0] * v2.vector4_f32[2];
		vResult.vector4_f32[2] = v1.vector4_f32[0] * v2.vector4_f32[1] - v1.vector4_f32[1] * v2.vector4_f32[0];
		vResult.vector4_f32[3] = 0.0f;
	}
	return vResult;
}

}