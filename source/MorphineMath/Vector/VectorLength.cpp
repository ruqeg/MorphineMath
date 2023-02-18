#include "../../../include/MorphineMath/Vector.hpp"

namespace MorphineMath
{

VECTOR
Vector3OrthoLength
(
	CVECTOR v
) noexcept
{
	VECTOR vOrthoDotResult = Vector3OrthoDot(v, v);
	VECTOR vResult = VectorSqrt(vOrthoDotResult);
	return vResult;
}

VECTOR
Vector3OrthoLengthSq
(
	CVECTOR v
) noexcept
{
	VECTOR vResult = Vector3OrthoDot(v, v);
	return vResult;
}

VECTOR
Vector3OrthoNormalize
(
	CVECTOR v
) noexcept
{
	VECTOR vLength = Vector3OrthoLength(v);
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

}