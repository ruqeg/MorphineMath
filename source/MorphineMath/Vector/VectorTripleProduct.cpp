#include "../../../include/MorphineMath/Vector.hpp"

namespace MorphineMath
{

VECTOR
Vector3OrthoTripleProduct
(
	CVECTOR v1,
	CVECTOR v2,
	CVECTOR v3
) noexcept
{
	F32 fTripleProduct;
	{
		fTripleProduct = v1.vector4_f32[0] * (v2.vector4_f32[1] * v3.vector4_f32[2] - v2.vector4_f32[2] * v3.vector4_f32[1]);
		fTripleProduct -= v1.vector4_f32[1] * (v2.vector4_f32[0] * v3.vector4_f32[2] - v2.vector4_f32[2] * v3.vector4_f32[0]);
		fTripleProduct += v1.vector4_f32[2] * (v2.vector4_f32[0] * v3.vector4_f32[1] - v2.vector4_f32[1] * v3.vector4_f32[0]);
	}

	VECTORF32 vResult;
	{
		vResult.f[0] = fTripleProduct;
		vResult.f[1] = fTripleProduct;
		vResult.f[2] = fTripleProduct;
		vResult.f[3] = fTripleProduct;
	}
	return vResult;
}

}