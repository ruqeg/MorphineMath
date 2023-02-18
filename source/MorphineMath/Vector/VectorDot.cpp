/*
 *	DOT OPERATON:
 *	  Definition:
 *	    dot(v1,v2) = (v1, v2) = |v1| + |v2| * cos(v1, v2)                      v1, v2 - vectors;
 *	  Properties:
 *	    1. (v1, v2) = (v2, v1)                                                 v1, v2 - vectors;
 *	    2. (v, v) = |v|^2                                                      v - vectors;
 *	    3. ((v1, v2) = 0) ⇒  (v1 ⊥ v2)                                        v1, v2 - vectors;
 *	    4. (∀v1 : (v1, v2) = 0) ⇒ (v2 = 0)                                    v1, v2, 0 - vectors;
 *		5. (ei, ej) = (i == j ? 1 : 0)                                         e - orthogonal basis; 1, 0 - scalars;
 *    Assumptions:
 *      1. v_n = (v, en) / |en|^2                                              v - vectors in orthogonal basis; en - orthogonal basis; v_n - scalars;
 *      1. v_n = (v, en)                                                       v - vectors in orthonormal  basis; en - orthonormal basis; v_n - scalars;
 *      2. (αa + βb, c) = α(a, c) + β(b, c)                                    a, b, c - vectors; α, β - scalars;
 *      2. (a, βb + γc) = β(a, b) + γ(a, c)                                    a, b, c - vectors; β, γ - scalars;
 *    Theorems:
 *      1. (a, b) = α1*β1 + α2*β2 + ... + αn*βn                                a, b - vectors; αn, βn - scalars;
 *      2. (a, b) = (α1*e1 + α2*e2 + ... + αn*en, b) =                         a, b - vectors; en - basis; αn, βn - scalars;
 *                = α1(e1, b) + α2(e2, b) + ... + αn(en, b) =                  a, b - vectors; en - basis; αn, βn - scalars;
 *                = α1*β1` + α2*β2`+ ... + αnβn` =                             αn, βn - scalars;
 *    Consequence of theorems:
 *      1 => 1. |a| = sqrt(α1^2 + α2^2 + ... + αn^2)                           a - vectors in orthonormal basis, αn - scalars;
 *      2 => 1. |a| = sqrt(α1*(e1, a) + α2*(e2, a) + ... + αn*(en, a))         a - vectors; en - basis; αn - scalars;
 *      1 => 2. cos(a,b) = (a,b)/(|a||b|)                                      a, b - vectors in orthonormal basis;
 *    Proofs of assumptions:
 *      1. //TODO
 *      1. //TODO
 *      2. //TODO
 *      2. //TODO
 *    Proofs of theorems:
 *      1. //TODO
 *    Proofs of consequence of theorems:
 *      1. //TODO
 *      2. //TODO
 */

#include "../../../include/MorphineMath/Vector.hpp"

namespace MorphineMath
{

VECTOR
Vector1Covector
(
	CVECTOR v,
	CVECTOR e1
) noexcept
{
	VECTOR vResult;
	{
		vResult.vector4_f32[0] = Vector1OrthoNormDot(v, e1).vector4_f32[0];
		vResult.vector4_f32[1] = 1.0f;
		vResult.vector4_f32[2] = 1.0f;
		vResult.vector4_f32[3] = 1.0f;
	}
	return vResult;
}

VECTOR
Vector1Dot
(
	CVECTOR v1,
	CVECTOR v2,
	CVECTOR e1,
	VECTOR* cov
) noexcept
{
	VECTOR covector = Vector1Covector(v2, e1);

	if (cov != nullptr)
	{
		*cov = covector;
	}

	VECTOR vResult = Vector1OrthoNormDot(v1, covector);
	return vResult;
}

VECTOR
Vector1OrthoNormDot
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	F32 fDot;
	{
		fDot = v1.vector4_f32[0] * v2.vector4_f32[0];
	}

	VECTOR vResult = VectorFill(fDot);
	return vResult;
}

VECTOR
Vector1OrthoNormLength
(
	CVECTOR v
) noexcept
{
	VECTOR vOrthoDotResult = Vector1OrthoNormDot(v, v);
	F32 fOrthoDotResult = vOrthoDotResult.vector4_f32[0];
	F32 fOrthoNormLength = ScalarSqrt(fOrthoDotResult);
	VECTOR vResult = VectorFill(fOrthoNormLength);
	return vResult;
}

VECTOR
Vector1OrthoNormLengthSq
(
	CVECTOR v
) noexcept
{
	VECTOR vResult = Vector1OrthoNormDot(v, v);
	return vResult;
}

VECTOR
Vector1OrthoNormNormalize
(
	CVECTOR v
) noexcept
{
	VECTOR vLength = Vector1OrthoNormLengthSq(v);
	F32 fLength = vLength.vector4_f32[0];
	F32 fInvLength;
	{
		if (fLength > 0)
		{
			fInvLength = 1.0f / fLength;
		}
		else
		{
			fInvLength = CMAXF32;
		}
	}

	VECTOR vResult;
	{
		vResult.vector4_f32[0] = v.vector4_f32[0] * fInvLength;
		vResult.vector4_f32[1] = v.vector4_f32[1];
		vResult.vector4_f32[2] = v.vector4_f32[2];
		vResult.vector4_f32[3] = v.vector4_f32[3];
	}
	return vResult;
}

VECTOR
Vector1OrthoNormCos
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTOR vDot = Vector1OrthoNormDot(v1, v2);
	VECTOR vLength1 = Vector1OrthoNormLengthSq(v1);
	VECTOR vLength2 = Vector1OrthoNormLengthSq(v2);
	F32 fDot = vDot.vector4_f32[0];
	F32 fLength1 = vLength1.vector4_f32[0];
	F32 fLength2 = vLength2.vector4_f32[0];
	F32 fMul = fLength1 * fLength2;
	F32 fSqrtMul = ScalarSqrt(fMul);
	F32 fCos = fDot / fSqrtMul;
	VECTOR vResult = VectorFill(fCos);
	return vResult;
}

VECTOR
Vector2Covector
(
	CVECTOR v,
	CVECTOR e1,
	CVECTOR e2
) noexcept
{
	VECTOR vResult;
	{
		vResult.vector4_f32[0] = Vector2OrthoNormDot(v, e1).vector4_f32[0];
		vResult.vector4_f32[1] = Vector2OrthoNormDot(v, e2).vector4_f32[0];
		vResult.vector4_f32[2] = 1.0f;
		vResult.vector4_f32[3] = 1.0f;
	}
	return vResult;
}

VECTOR
Vector2Dot
(
	CVECTOR v1,
	CVECTOR v2,
	CVECTOR e1,
	CVECTOR e2,
	VECTOR* cov
) noexcept
{
	VECTOR covector = Vector2Covector(v2, e1, e2);

	if (cov != nullptr)
	{
		*cov = covector;
	}

	VECTOR vResult = Vector2OrthoNormDot(v1, covector);
	return vResult;
}

VECTOR
Vector2OrthoNormDot
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	F32 fDot;
	{
		fDot = v1.vector4_f32[0] * v2.vector4_f32[0];
		fDot += v1.vector4_f32[1] * v2.vector4_f32[1];
	}

	VECTOR vResult = VectorFill(fDot);
	return vResult;
}

VECTOR
Vector2OrthoNormLength
(
	CVECTOR v
) noexcept
{
	VECTOR vOrthoDotResult = Vector2OrthoNormDot(v, v);
	F32 fOrthoDotResult = vOrthoDotResult.vector4_f32[0];
	F32 fOrthoNormLength = ScalarSqrt(fOrthoDotResult);
	VECTOR vResult = VectorFill(fOrthoNormLength);
	return vResult;
}

VECTOR
Vector2OrthoNormLengthSq
(
	CVECTOR v
) noexcept
{
	VECTOR vResult = Vector2OrthoNormDot(v, v);
	return vResult;
}

VECTOR
Vector2OrthoNormNormalize
(
	CVECTOR v
) noexcept
{
	VECTOR vLength = Vector2OrthoNormLengthSq(v);
	F32 fLength = vLength.vector4_f32[0];
	F32 fInvLength;
	{
		if (fLength > 0)
		{
			fInvLength = 1.0f / fLength;
		}
		else
		{
			fInvLength = CMAXF32;
		}
	}

	VECTOR vResult;
	{
		vResult.vector4_f32[0] = v.vector4_f32[0] * fInvLength;
		vResult.vector4_f32[1] = v.vector4_f32[1] * fInvLength;
		vResult.vector4_f32[2] = v.vector4_f32[2];
		vResult.vector4_f32[3] = v.vector4_f32[3];
	}
	return vResult;
}

VECTOR
Vector2OrthoNormCos
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTOR vDot = Vector2OrthoNormDot(v1, v2);
	VECTOR vLength1 = Vector2OrthoNormLengthSq(v1);
	VECTOR vLength2 = Vector2OrthoNormLengthSq(v2);
	F32 fDot = vDot.vector4_f32[0];
	F32 fLength1 = vLength1.vector4_f32[0];
	F32 fLength2 = vLength2.vector4_f32[0];
	F32 fMul = fLength1 * fLength2;
	F32 fSqrtMul = ScalarSqrt(fMul);
	F32 fCos = fDot / fSqrtMul;
	VECTOR vResult = VectorFill(fCos);
	return vResult;
}

VECTOR
Vector3Covector
(
	CVECTOR v,
	CVECTOR e1,
	CVECTOR e2,
	CVECTOR e3
) noexcept
{
	VECTOR vResult;
	{
		vResult.vector4_f32[0] = Vector3OrthoNormDot(v, e1).vector4_f32[0];
		vResult.vector4_f32[1] = Vector3OrthoNormDot(v, e2).vector4_f32[0];
		vResult.vector4_f32[2] = Vector3OrthoNormDot(v, e3).vector4_f32[0];
		vResult.vector4_f32[3] = 1.0f;
	}
	return vResult;
}

VECTOR
Vector3Dot
(
	CVECTOR v1,
	CVECTOR v2,
	CVECTOR e1,
	CVECTOR e2,
	CVECTOR e3,
	VECTOR* cov
) noexcept
{
	VECTOR covector = Vector3Covector(v2, e1, e2, e3);

	if (cov != nullptr)
	{
		*cov = covector;
	}

	VECTOR vResult = Vector3OrthoNormDot(v1, covector);
	return vResult;
}

VECTOR
Vector3OrthoNormDot
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

	VECTOR vResult = VectorFill(fDot);
	return vResult;
}

VECTOR
Vector3OrthoNormLength
(
	CVECTOR v
) noexcept
{
	VECTOR vOrthoDotResult = Vector3OrthoNormDot(v, v);
	F32 fOrthoDotResult = vOrthoDotResult.vector4_f32[0];
	F32 fOrthoNormLength = ScalarSqrt(fOrthoDotResult);
	VECTOR vResult = VectorFill(fOrthoNormLength);
	return vResult;
}

VECTOR
Vector3OrthoNormLengthSq
(
	CVECTOR v
) noexcept
{
	VECTOR vResult = Vector3OrthoNormDot(v, v);
	return vResult;
}

VECTOR
Vector3OrthoNormNormalize
(
	CVECTOR v
) noexcept
{
	VECTOR vLength = Vector3OrthoNormLengthSq(v);
	F32 fLength = vLength.vector4_f32[0];
	F32 fInvLength;
	{
		if (fLength > 0)
		{
			fInvLength = 1.0f / fLength;
		}
		else
		{
			fInvLength = CMAXF32;
		}
	}

	VECTOR vResult;
	{
		vResult.vector4_f32[0] = v.vector4_f32[0] * fInvLength;
		vResult.vector4_f32[1] = v.vector4_f32[1] * fInvLength;
		vResult.vector4_f32[2] = v.vector4_f32[2] * fInvLength;
		vResult.vector4_f32[3] = v.vector4_f32[3];
	}
	return vResult;
}

VECTOR
Vector3OrthoNormCos
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTOR vDot = Vector3OrthoNormDot(v1, v2);
	VECTOR vLength1 = Vector3OrthoNormLengthSq(v1);
	VECTOR vLength2 = Vector3OrthoNormLengthSq(v2);
	F32 fDot = vDot.vector4_f32[0];
	F32 fLength1 = vLength1.vector4_f32[0];
	F32 fLength2 = vLength2.vector4_f32[0];
	F32 fMul = fLength1 * fLength2;
	F32 fSqrtMul = ScalarSqrt(fMul);
	F32 fCos = fDot / fSqrtMul;
	VECTOR vResult = VectorFill(fCos);
	return vResult;
}

VECTOR	
Vector4Covector
(
	CVECTOR v,
	CVECTOR e1,
	CVECTOR e2,
	CVECTOR e3,
	CVECTOR e4
) noexcept
{
	VECTOR vResult;
	{
		vResult.vector4_f32[0] = Vector4OrthoNormDot(v, e1).vector4_f32[0];
		vResult.vector4_f32[1] = Vector4OrthoNormDot(v, e2).vector4_f32[0];
		vResult.vector4_f32[2] = Vector4OrthoNormDot(v, e3).vector4_f32[0];
		vResult.vector4_f32[3] = Vector4OrthoNormDot(v, e4).vector4_f32[0];
	}
	return vResult;
}

VECTOR
Vector4Dot
(
	CVECTOR v1,
	CVECTOR v2,
	CVECTOR e1,
	CVECTOR e2,
	CVECTOR e3,
	CVECTOR e4,
	VECTOR* cov
) noexcept
{
	VECTOR covector = Vector4Covector(v2, e1, e2, e3, e4);

	if (cov != nullptr)
	{
		*cov = covector;
	}

	VECTOR vResult = Vector4OrthoNormDot(v1, covector);
	return vResult;
}

VECTOR
Vector4OrthoNormDot
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
		fDot += v1.vector4_f32[3] * v2.vector4_f32[3];
	}

	VECTOR vResult = VectorFill(fDot);
	return vResult;
}

VECTOR
Vector4OrthoNormLength
(
	CVECTOR v
) noexcept
{
	VECTOR vOrthoDotResult = Vector4OrthoNormDot(v, v);
	F32 fOrthoDotResult = vOrthoDotResult.vector4_f32[0];
	F32 fOrthoNormLength = ScalarSqrt(fOrthoDotResult);
	VECTOR vResult = VectorFill(fOrthoNormLength);
	return vResult;
}

VECTOR
Vector4OrthoNormLengthSq
(
	CVECTOR v
) noexcept
{
	VECTOR vResult = Vector4OrthoNormDot(v, v);
	return vResult;
}

VECTOR
Vector4OrthoNormNormalize
(
	CVECTOR v
) noexcept
{
	VECTOR vLength = Vector4OrthoNormLengthSq(v);
	F32 fLength = vLength.vector4_f32[0];
	F32 fInvLength;
	{
		if (fLength > 0)
		{
			fInvLength = 1.0f / fLength;
		}
		else
		{
			fInvLength = CMAXF32;
		}
	}

	VECTOR vResult;
	{
		vResult.vector4_f32[0] = v.vector4_f32[0] * fInvLength;
		vResult.vector4_f32[1] = v.vector4_f32[1] * fInvLength;
		vResult.vector4_f32[2] = v.vector4_f32[2] * fInvLength;
		vResult.vector4_f32[3] = v.vector4_f32[3] * fInvLength;
	}
	return vResult;
}

VECTOR	
Vector4OrthoNormCos
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTOR vDot = Vector4OrthoNormDot(v1, v2);
	VECTOR vLength1 = Vector4OrthoNormLengthSq(v1);
	VECTOR vLength2 = Vector4OrthoNormLengthSq(v2);
	F32 fDot = vDot.vector4_f32[0];
	F32 fLength1 = vLength1.vector4_f32[0];
	F32 fLength2 = vLength2.vector4_f32[0];
	F32 fMul = fLength1 * fLength2;
	F32 fSqrtMul = ScalarSqrt(fMul);
	F32 fCos = fDot / fSqrtMul;
	VECTOR vResult = VectorFill(fCos);
	return vResult;
}

}