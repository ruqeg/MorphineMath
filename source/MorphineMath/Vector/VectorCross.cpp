#include "../../../include/MorphineMath/Vector.hpp"

namespace MorphineMath
{

VECTOR
Vector3Cross
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTORF32 vResult;
	{
		vResult.f[0] = v1.vector4_f32[1] * v2.vector4_f32[2] - v1.vector4_f32[2] * v2.vector4_f32[1];
		vResult.f[1] = v1.vector4_f32[2] * v2.vector4_f32[0] - v1.vector4_f32[0] * v2.vector4_f32[2];
		vResult.f[2] = v1.vector4_f32[0] * v2.vector4_f32[1] - v1.vector4_f32[1] * v2.vector4_f32[0];
		vResult.f[3] = 0.0f;
	}
	return vResult;
}

}