/*
 *	DOT OPERATON:
 *	  Definition:
 *	    dot(v1,v2) = (v1, v2) = |v1| + |v2| * cos(v1, v2)                                   v1, v2 - vectors;
 *	  Properties:
 *	    1. (v1, v2) = (v2, v1)                                                              v1, v2 - vectors;
 *	    2. (v, v) = |v|^2                                                                   v - vectors;
 *	    3. ((v1, v2) = 0) ⇒  (v1 ⊥ v2)                                                     v1, v2 - vectors;
 *	    4. (∀v1 : (v1, v2) = 0) ⇒ (v2 = 0)                                                 v1, v2, 0 - vectors;
 *		5. (e1, e1) = (e2, e2) = (e3, e3) = 1                                               e1, e2, e3 - orthogonal basis; 1 - scalars;
 *		6. (e1, e2) = (e2, e3) = (e3, e1) = 0                                               e1, e2, e3 - orthogonal basis; 0 - scalars;
 *    Assumptions:
 *      1. v_n = (v, en) / |en|^2                                                           v, en - vectors; en - orthogonal basis; v_n - scalars;
 *      1. v_n = (v, en)                                                                    v, en - vectors; en - orthonormal basis; v_n - scalars;
 *      2. (αa + βb, c) = α(a, c) + β(b, c)                                                 a, b, c - vectors; α, β - scalars;
 *      2. (a, βb + γc) = β(a, b) + γ(a, c)                                                 a, b, c - vectors; β, γ - scalars;
 *    Proofs:
 *      1. //TODO
 *      1. //TODO
 *      2. //TODO
 *      2. //TODO
 */

#include "../../../include/MorphineMath/Vector.hpp"

namespace MorphineMath
{

VECTOR
Vector3OrthoDot
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	F32 fDot;
	{
		fDot = v1.vector4_f32[0] * v2.vector4_f32[0];
		fDot += v1.vector4_f32[1] * v2.vector4_f32[1];
		fDot += v1.vector4_f32[2] * v2.vector4_f32[2];
	}

	VECTORF32 vResult;
	{
		vResult.f[0] = fDot;
		vResult.f[1] = fDot;
		vResult.f[2] = fDot;
		vResult.f[3] = fDot;
	}
	return vResult;
}

}