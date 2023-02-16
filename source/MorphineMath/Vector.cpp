#include "../../include/MorphineMath/Vector.hpp"

namespace MorphineMath
{

VECTORF32::operator VECTOR() const noexcept
{
	return v;
}

VECTORU32::operator VECTOR() const noexcept
{
	return v;
}

VECTOR VectorZero
(

) noexcept
{
	VECTORF32 vResult = { { { 0.0f, 0.0f, 0.0f, 0.0f } } };
	return vResult;
}

VECTOR VectorSet
(
	F32 x,
	F32 y,
	F32 z,
	F32 w
) noexcept
{
	VECTORF32 vResult = { { { x, y, z, w } } };
	return vResult.v;
}

VECTOR VectorSetInt
(
	U32 x,
	U32 y,
	U32 z,
	U32 w
) noexcept
{
	VECTORU32 vResult = { { { x, y, z, w } } };
	return vResult;
}

VECTOR VectorFill
(
	F32 value
) noexcept
{
	VECTORF32 vResult = { { { value, value, value, value } } };
	return vResult.v;
}

VECTOR VectorFillInt
(
	U32 value
) noexcept
{
	VECTORU32 vResult = { { { value, value, value, value } } };
	return vResult.v;
}

VECTOR VectorTrueInt
(

) noexcept
{
	VECTORU32 vResult = { { { 0xFFFFFFFFU, 0xFFFFFFFFU, 0xFFFFFFFFU, 0xFFFFFFFFU } } };
	return vResult.v;
}

VECTOR VectorFalseInt
(

) noexcept
{
	VECTORU32 vResult = { { { 0x00000000U, 0x00000000U, 0x00000000U, 0x00000000U } } };
	return vResult.v;
}

VECTOR VectorSplatX
(
	CVECTOR V
) noexcept
{
	VECTOR vResult;
	vResult.vector4_f32[0]
		= vResult.vector4_f32[1]
		= vResult.vector4_f32[2]
		= vResult.vector4_f32[3]
		= V.vector4_f32[0];
	return vResult;
}

VECTOR VectorSplatY
(
	CVECTOR V
) noexcept
{
	VECTOR vResult;
	vResult.vector4_f32[0]
		= vResult.vector4_f32[1]
		= vResult.vector4_f32[2]
		= vResult.vector4_f32[3]
		= V.vector4_f32[1];
	return vResult;
}

VECTOR VectorSplatZ
(
	CVECTOR V
) noexcept
{
	VECTOR vResult;
	vResult.vector4_f32[0]
		= vResult.vector4_f32[1]
		= vResult.vector4_f32[2]
		= vResult.vector4_f32[3]
		= V.vector4_f32[2];
	return vResult;
}

VECTOR VectorSplatW
(
	CVECTOR V
) noexcept
{
	VECTOR vResult;
	vResult.vector4_f32[0]
		= vResult.vector4_f32[1]
		= vResult.vector4_f32[2]
		= vResult.vector4_f32[3]
		= V.vector4_f32[3];
	return vResult;
}

VECTOR VectorSplatOne
(

) noexcept
{
	VECTOR vResult;
	vResult.vector4_f32[0]
		= vResult.vector4_f32[1]
		= vResult.vector4_f32[2]
		= vResult.vector4_f32[3]
		= 1.0f;
	return vResult;
}

VECTOR VectorSplatInfinity
(

) noexcept
{
	VECTOR vResult;
	vResult.vector4_f32[0]
		= vResult.vector4_f32[1]
		= vResult.vector4_f32[2]
		= vResult.vector4_f32[3]
		= 0x7F800000;
	return vResult;
}

VECTOR VectorSplatQNaN
(

) noexcept
{
	VECTOR vResult;
	vResult.vector4_f32[0]
		= vResult.vector4_f32[1]
		= vResult.vector4_f32[2]
		= vResult.vector4_f32[3]
		= 0x7FC00000;
	return vResult;
}

VECTOR VectorSplatEpsilon
(

) noexcept
{
	VECTOR vResult;
	vResult.vector4_f32[0] =
		vResult.vector4_f32[1] =
		vResult.vector4_f32[2] =
		vResult.vector4_f32[3] = 0x34000000;
	return vResult;

}

F32 VectorGetByIndex
(
	CVECTOR V,
	size_t i
) noexcept
{
	//assert(i < 4);
	return V.vector4_f32[i];
}

F32 VectorGetX
(
	CVECTOR V
) noexcept
{
	return V.vector4_f32[0];
}

F32 VectorGetY
(
	CVECTOR V
) noexcept
{
	return V.vector4_f32[1];
}

F32 VectorGetZ
(
	CVECTOR V
) noexcept
{
	return V.vector4_f32[2];
}

F32 VectorGetW
(
	CVECTOR V
) noexcept
{
	return V.vector4_f32[3];
}

U32 VectorGetIntX
(
	CVECTOR V
) noexcept
{
	return V.vector4_u32[0];
}

U32 VectorGetIntY
(
	CVECTOR V
) noexcept
{
	return V.vector4_u32[1];
}

U32 VectorGetIntZ
(
	CVECTOR V
) noexcept
{
	return V.vector4_u32[2];
}

U32 VectorGetIntW
(
	CVECTOR V
) noexcept
{
	return V.vector4_u32[3];
}

VECTOR VectorSetX
(
	CVECTOR V,
	F32 x
) noexcept
{
	VECTORF32 vResult = { { {
		x,
		V.vector4_f32[1],
		V.vector4_f32[2],
		V.vector4_f32[3]
	} } };
	return vResult.v;
}

VECTOR VectorSetY
(
	CVECTOR V,
	F32 y
) noexcept
{
	VECTORF32 vResult = { { {
		V.vector4_f32[0],
		y,
		V.vector4_f32[2],
		V.vector4_f32[3]
	} } };
	return vResult.v;
}

VECTOR VectorSetZ
(
	CVECTOR V,
	F32 z
) noexcept
{
	VECTORF32 vResult = { { {
		V.vector4_f32[0],
		V.vector4_f32[1],
		z,
		V.vector4_f32[3]
	} } };
	return vResult.v;
}

VECTOR VectorSetW
(
	CVECTOR V,
	F32 w
) noexcept
{
	VECTORF32 vResult = { { {
		V.vector4_f32[0],
		V.vector4_f32[1],
		V.vector4_f32[2],
		w
	} } };
	return vResult.v;
}

VECTOR VectorSetIntX
(
	CVECTOR V,
	U32 x
) noexcept
{
	VECTORU32 vResult = { { {
			x,
			V.vector4_u32[1],
			V.vector4_u32[2],
			V.vector4_u32[3]
	} } };
	return vResult.v;
}

VECTOR VectorSetIntY
(
	CVECTOR V,
	U32 y
) noexcept
{
	VECTORU32 vResult = { { {
			V.vector4_u32[0],
			y,
			V.vector4_u32[2],
			V.vector4_u32[3]
	} } };
	return vResult.v;
}

VECTOR VectorSetIntZ
(
	CVECTOR V,
	U32 z
) noexcept
{
	VECTORU32 vResult = { { {
			V.vector4_u32[0],
			V.vector4_u32[1],
			z,
			V.vector4_u32[3]
	} } };
	return vResult.v;
}

VECTOR VectorSetIntW
(
	CVECTOR V,
	U32 w
) noexcept
{
	VECTORU32 vResult = { { {
			V.vector4_u32[0],
			V.vector4_u32[1],
			V.vector4_u32[2],
			w
	} } };
	return vResult.v;
}

VECTOR VectorEqual
(
	CVECTOR V1,
	CVECTOR V2
) noexcept
{
	VECTORU32 vResult = { { {
		(V1.vector4_f32[0] == V2.vector4_f32[0]) ? 0xFFFFFFFF : 0,
		(V1.vector4_f32[1] == V2.vector4_f32[1]) ? 0xFFFFFFFF : 0,
		(V1.vector4_f32[2] == V2.vector4_f32[2]) ? 0xFFFFFFFF : 0,
		(V1.vector4_f32[3] == V2.vector4_f32[3]) ? 0xFFFFFFFF : 0
	} } };
	return vResult.v;
}

VECTOR VectorEqualInt
(
	CVECTOR V1,
	CVECTOR V2
) noexcept
{
	VECTORU32 vResult = { { {
		(V1.vector4_u32[0] == V2.vector4_u32[0]) ? 0xFFFFFFFF : 0,
		(V1.vector4_u32[1] == V2.vector4_u32[1]) ? 0xFFFFFFFF : 0,
		(V1.vector4_u32[2] == V2.vector4_u32[2]) ? 0xFFFFFFFF : 0,
		(V1.vector4_u32[3] == V2.vector4_u32[3]) ? 0xFFFFFFFF : 0
	} } };
	return vResult.v;
}

VECTOR VectorNearEqual
(
	CVECTOR V1,
	CVECTOR V2,
	CVECTOR Epsilon
) noexcept
{
	F32 fDeltaX = V1.vector4_f32[0] - V2.vector4_f32[0];
	F32 fDeltaY = V1.vector4_f32[1] - V2.vector4_f32[1];
	F32 fDeltaZ = V1.vector4_f32[2] - V2.vector4_f32[2];
	F32 fDeltaW = V1.vector4_f32[3] - V2.vector4_f32[3];

	if (fDeltaX < 0) fDeltaX = -fDeltaX;
	if (fDeltaY < 0) fDeltaY = -fDeltaY;
	if (fDeltaZ < 0) fDeltaZ = -fDeltaZ;
	if (fDeltaW < 0) fDeltaW = -fDeltaW;

	VECTORU32 vResult = { { {
		(fDeltaX <= Epsilon.vector4_f32[0]) ? 0xFFFFFFFF : 0,
		(fDeltaY <= Epsilon.vector4_f32[1]) ? 0xFFFFFFFF : 0,
		(fDeltaZ <= Epsilon.vector4_f32[2]) ? 0xFFFFFFFF : 0,
		(fDeltaW <= Epsilon.vector4_f32[3]) ? 0xFFFFFFFF : 0
	} } };
	return vResult.v;
}

VECTOR VectorNotEqual
(
	CVECTOR V1,
	CVECTOR V2
) noexcept
{
	VECTORU32 vResult = { { {
		(V1.vector4_f32[0] != V2.vector4_f32[0]) ? 0xFFFFFFFF : 0,
		(V1.vector4_f32[1] != V2.vector4_f32[1]) ? 0xFFFFFFFF : 0,
		(V1.vector4_f32[2] != V2.vector4_f32[2]) ? 0xFFFFFFFF : 0,
		(V1.vector4_f32[3] != V2.vector4_f32[3]) ? 0xFFFFFFFF : 0
	} } };
	return vResult.v;
}

VECTOR VectorNotEqualInt
(
	CVECTOR V1,
	CVECTOR V2
) noexcept
{
	VECTORU32 vResult = { { {
		(V1.vector4_u32[0] != V2.vector4_u32[0]) ? 0xFFFFFFFF : 0,
		(V1.vector4_u32[1] != V2.vector4_u32[1]) ? 0xFFFFFFFF : 0,
		(V1.vector4_u32[2] != V2.vector4_u32[2]) ? 0xFFFFFFFF : 0,
		(V1.vector4_u32[3] != V2.vector4_u32[3]) ? 0xFFFFFFFF : 0
	} } };
	return vResult.v;
}

VECTOR VectorGreater
(
	CVECTOR V1,
	CVECTOR V2
) noexcept
{
	VECTORU32 vResult = { { {
		(V1.vector4_f32[0] > V2.vector4_f32[0]) ? 0xFFFFFFFF : 0,
		(V1.vector4_f32[1] > V2.vector4_f32[1]) ? 0xFFFFFFFF : 0,
		(V1.vector4_f32[2] > V2.vector4_f32[2]) ? 0xFFFFFFFF : 0,
		(V1.vector4_f32[3] > V2.vector4_f32[3]) ? 0xFFFFFFFF : 0
	} } };
	return vResult.v;
}

VECTOR VectorGreaterOrEqual
(
	CVECTOR V1,
	CVECTOR V2
) noexcept
{
	VECTORU32 vResult = { { {
		(V1.vector4_f32[0] >= V2.vector4_f32[0]) ? 0xFFFFFFFF : 0,
		(V1.vector4_f32[1] >= V2.vector4_f32[1]) ? 0xFFFFFFFF : 0,
		(V1.vector4_f32[2] >= V2.vector4_f32[2]) ? 0xFFFFFFFF : 0,
		(V1.vector4_f32[3] >= V2.vector4_f32[3]) ? 0xFFFFFFFF : 0
	} } };
	return vResult.v;
}

VECTOR VectorLess
(
	CVECTOR V1,
	CVECTOR V2
) noexcept
{
	VECTORU32 vResult = { { {
		(V1.vector4_f32[0] < V2.vector4_f32[0]) ? 0xFFFFFFFF : 0,
		(V1.vector4_f32[1] < V2.vector4_f32[1]) ? 0xFFFFFFFF : 0,
		(V1.vector4_f32[2] < V2.vector4_f32[2]) ? 0xFFFFFFFF : 0,
		(V1.vector4_f32[3] < V2.vector4_f32[3]) ? 0xFFFFFFFF : 0
	} } };
	return vResult.v;
}

VECTOR VectorLessOrEqual
(
	CVECTOR V1,
	CVECTOR V2
) noexcept
{
	VECTORU32 vResult = { { {
		(V1.vector4_f32[0] <= V2.vector4_f32[0]) ? 0xFFFFFFFF : 0,
		(V1.vector4_f32[1] <= V2.vector4_f32[1]) ? 0xFFFFFFFF : 0,
		(V1.vector4_f32[2] <= V2.vector4_f32[2]) ? 0xFFFFFFFF : 0,
		(V1.vector4_f32[3] <= V2.vector4_f32[3]) ? 0xFFFFFFFF : 0
	} } };
	return vResult.v;
}

VECTOR VectorInBounds
(
	CVECTOR V,
	CVECTOR Bounds
) noexcept
{
	F32 absBoundsX = Bounds.vector4_f32[0] > 0.0f ? Bounds.vector4_f32[0] : -Bounds.vector4_f32[0];
	F32 absBoundsY = Bounds.vector4_f32[1] > 0.0f ? Bounds.vector4_f32[1] : -Bounds.vector4_f32[1];
	F32 absBoundsZ = Bounds.vector4_f32[2] > 0.0f ? Bounds.vector4_f32[2] : -Bounds.vector4_f32[2];
	F32 absBoundsW = Bounds.vector4_f32[3] > 0.0f ? Bounds.vector4_f32[3] : -Bounds.vector4_f32[3];

	VECTORU32 vResult = { { {
		(V.vector4_f32[0] <= absBoundsX && V.vector4_f32[0] >= -absBoundsX) ? 0xFFFFFFFF : 0,
		(V.vector4_f32[1] <= absBoundsY && V.vector4_f32[1] >= -absBoundsY) ? 0xFFFFFFFF : 0,
		(V.vector4_f32[2] <= absBoundsZ && V.vector4_f32[2] >= -absBoundsZ) ? 0xFFFFFFFF : 0,
		(V.vector4_f32[3] <= absBoundsW && V.vector4_f32[3] >= -absBoundsW) ? 0xFFFFFFFF : 0
	} } };
	return vResult.v;
}

VECTOR VectorIsNaN
(
	CVECTOR V
) noexcept
{
	VECTORU32 vResult = { { {
		(V.vector4_f32[0] == 0x7FC00000) ? 0xFFFFFFFFU : 0,
		(V.vector4_f32[1] == 0x7FC00000) ? 0xFFFFFFFFU : 0,
		(V.vector4_f32[2] == 0x7FC00000) ? 0xFFFFFFFFU : 0,
		(V.vector4_f32[3] == 0x7FC00000) ? 0xFFFFFFFFU : 0
	} } };
	return vResult.v;
}

VECTOR VectorIsInfinite
(
	CVECTOR V
) noexcept
{
	VECTORU32 vResult = { { {
		(V.vector4_f32[0] == 0x7F800000) ? 0xFFFFFFFFU : 0,
		(V.vector4_f32[1] == 0x7F800000) ? 0xFFFFFFFFU : 0,
		(V.vector4_f32[2] == 0x7F800000) ? 0xFFFFFFFFU : 0,
		(V.vector4_f32[3] == 0x7F800000) ? 0xFFFFFFFFU : 0
	} } };
	return vResult.v;
}

VECTOR
VectorMin
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTORF32 Result = { { {
		(v1.vector4_f32[0] < v2.vector4_f32[0]) ? v1.vector4_f32[0] : v2.vector4_f32[0],
		(v1.vector4_f32[1] < v2.vector4_f32[1]) ? v1.vector4_f32[1] : v2.vector4_f32[1],
		(v1.vector4_f32[2] < v2.vector4_f32[2]) ? v1.vector4_f32[2] : v2.vector4_f32[2],
		(v1.vector4_f32[3] < v2.vector4_f32[3]) ? v1.vector4_f32[3] : v2.vector4_f32[3]
	} } };
	return Result.v;
}

VECTOR
VectorMax
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTORF32 Result = { { {
		(v1.vector4_f32[0] > v2.vector4_f32[0]) ? v1.vector4_f32[0] : v2.vector4_f32[0],
		(v1.vector4_f32[1] > v2.vector4_f32[1]) ? v1.vector4_f32[1] : v2.vector4_f32[1],
		(v1.vector4_f32[2] > v2.vector4_f32[2]) ? v1.vector4_f32[2] : v2.vector4_f32[2],
		(v1.vector4_f32[3] > v2.vector4_f32[3]) ? v1.vector4_f32[3] : v2.vector4_f32[3]
	} } };
	return Result.v;
}

VECTOR
VectorRound
(
	CVECTOR v
) noexcept
{
	VECTORF32 Result = { { {
		ScalarRound(v.vector4_f32[0]),
		ScalarRound(v.vector4_f32[1]),
		ScalarRound(v.vector4_f32[2]),
		ScalarRound(v.vector4_f32[3])
	} } };
	return Result.v;
}

VECTOR
VectorFloor
(
	CVECTOR v
) noexcept
{
	VECTORF32 Result = { { {
		ScalarFloor(v.vector4_f32[0]),
		ScalarFloor(v.vector4_f32[1]),
		ScalarFloor(v.vector4_f32[2]),
		ScalarFloor(v.vector4_f32[3])
	} } };
	return Result.v;
}

VECTOR
VectorCeil
(
	CVECTOR v
) noexcept
{
	VECTORF32 Result = { { {
		ScalarCeil(v.vector4_f32[0]),
		ScalarCeil(v.vector4_f32[1]),
		ScalarCeil(v.vector4_f32[2]),
		ScalarCeil(v.vector4_f32[3])
	} } };
	return Result.v;
}

VECTOR
VectorTrunc
(
	CVECTOR v
) noexcept
{
	VECTORF32 Result = { { {
		ScalarTrunc(v.vector4_f32[0]),
		ScalarTrunc(v.vector4_f32[1]),
		ScalarTrunc(v.vector4_f32[2]),
		ScalarTrunc(v.vector4_f32[3])
	} } };
	return Result.v;
}


VECTOR
VectorClamp
(
	CVECTOR v,
	CVECTOR vmin,
	CVECTOR vmax
) noexcept
{
	VECTORF32 Result = { { {
		ScalarClamp(v.vector4_f32[0], vmin.vector4_f32[0], vmax.vector4_f32[0]),
		ScalarClamp(v.vector4_f32[1], vmin.vector4_f32[1], vmax.vector4_f32[1]),
		ScalarClamp(v.vector4_f32[2], vmin.vector4_f32[2], vmax.vector4_f32[2]),
		ScalarClamp(v.vector4_f32[3], vmin.vector4_f32[3], vmax.vector4_f32[3])
	} } };
	return Result.v;
}

VECTOR
VectorAndInt
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTORU32 Result = { { {
		v1.vector4_u32[0] & v2.vector4_u32[0],
		v1.vector4_u32[1] & v2.vector4_u32[1],
		v1.vector4_u32[2] & v2.vector4_u32[2],
		v1.vector4_u32[3] & v2.vector4_u32[3]
	} } };
	return Result.v;
}

VECTOR	
VectorOrInt
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTORU32 Result = { { {
		v1.vector4_u32[0] | v2.vector4_u32[0],
		v1.vector4_u32[1] | v2.vector4_u32[1],
		v1.vector4_u32[2] | v2.vector4_u32[2],
		v1.vector4_u32[3] | v2.vector4_u32[3]
	} } };
	return Result.v;
}

VECTOR
VectorNorInt
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTORU32 Result = { { {
		~(v1.vector4_u32[0] | v2.vector4_u32[0]),
		~(v1.vector4_u32[1] | v2.vector4_u32[1]),
		~(v1.vector4_u32[2] | v2.vector4_u32[2]),
		~(v1.vector4_u32[3] | v2.vector4_u32[3])
	} } };
	return Result.v;
}

VECTOR
VectorXorInt
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTORU32 Result = { { {
		v1.vector4_u32[0] ^ v2.vector4_u32[0],
		v1.vector4_u32[1] ^ v2.vector4_u32[1],
		v1.vector4_u32[2] ^ v2.vector4_u32[2],
		v1.vector4_u32[3] ^ v2.vector4_u32[3]
	} } };
	return Result.v;
}

VECTOR
VectorNegate
(
	CVECTOR v
) noexcept
{
	VECTORF32 Result = { { {
		-v.vector4_f32[0],
		-v.vector4_f32[1],
		-v.vector4_f32[2],
		-v.vector4_f32[3]
	} } };
	return Result.v;
}

VECTOR
VectorAdd
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTORF32 Result = { { {
		v1.vector4_f32[0] + v2.vector4_f32[0],
		v1.vector4_f32[1] + v2.vector4_f32[1],
		v1.vector4_f32[2] + v2.vector4_f32[2],
		v1.vector4_f32[3] + v2.vector4_f32[3]
	} } };
	return Result.v;
}

VECTOR
VectorSubtract
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTORF32 Result = { { {
		v1.vector4_f32[0] - v2.vector4_f32[0],
		v1.vector4_f32[1] - v2.vector4_f32[1],
		v1.vector4_f32[2] - v2.vector4_f32[2],
		v1.vector4_f32[3] - v2.vector4_f32[3]
	} } };
	return Result.v;
}

VECTOR
VectorMultiply
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTORF32 Result = { { {
		v1.vector4_f32[0] * v2.vector4_f32[0],
		v1.vector4_f32[1] * v2.vector4_f32[1],
		v1.vector4_f32[2] * v2.vector4_f32[2],
		v1.vector4_f32[3] * v2.vector4_f32[3]
	} } };
	return Result.v;
}

VECTOR
VectorMultiplyAdd
(
	CVECTOR v1,
	CVECTOR v2,
	CVECTOR v3
) noexcept
{
	VECTORF32 Result = { { {
		v1.vector4_f32[0] * v2.vector4_f32[0] + v3.vector4_f32[0],
		v1.vector4_f32[1] * v2.vector4_f32[1] + v3.vector4_f32[1],
		v1.vector4_f32[2] * v2.vector4_f32[2] + v3.vector4_f32[2],
		v1.vector4_f32[3] * v2.vector4_f32[3] + v3.vector4_f32[3]
	} } };
	return Result.v;
}

VECTOR
VectorDivide
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTORF32 Result = { { {
		v1.vector4_f32[0] / v2.vector4_f32[0],
		v1.vector4_f32[1] / v2.vector4_f32[1],
		v1.vector4_f32[2] / v2.vector4_f32[2],
		v1.vector4_f32[3] / v2.vector4_f32[3]
	} } };
	return Result.v;
}

VECTOR
VectorDivideAdd
(
	CVECTOR v1,
	CVECTOR v2,
	CVECTOR v3
) noexcept
{
	VECTORF32 Result = { { {
		v1.vector4_f32[0] / v2.vector4_f32[0] + v3.vector4_f32[0],
		v1.vector4_f32[1] / v2.vector4_f32[1] + v3.vector4_f32[1],
		v1.vector4_f32[2] / v2.vector4_f32[2] + v3.vector4_f32[2],
		v1.vector4_f32[3] / v2.vector4_f32[3] + v3.vector4_f32[3]
	} } };
	return Result.v;
}

VECTOR
VectorScale
(
	CVECTOR v,
	F32 s
) noexcept
{
	VECTORF32 Result = { { {
		v.vector4_f32[0] * s,
		v.vector4_f32[1] * s,
		v.vector4_f32[2] * s,
		v.vector4_f32[3] * s
	} } };
	return Result.v;
}

VECTOR
VectorSqrt
(
	CVECTOR v
) noexcept
{
	VECTORF32 Result = { { {
		ScalarSqrt(v.vector4_f32[0]),
		ScalarSqrt(v.vector4_f32[1]),
		ScalarSqrt(v.vector4_f32[2]),
		ScalarSqrt(v.vector4_f32[3])
	} } };
	return Result.v;
}

VECTOR
VectorExp2
(
	CVECTOR v
) noexcept
{
	VECTORF32 Result = { { {
		ScalarExp2(v.vector4_f32[0]),
		ScalarExp2(v.vector4_f32[1]),
		ScalarExp2(v.vector4_f32[2]),
		ScalarExp2(v.vector4_f32[3])
	} } };
	return Result.v;
}

VECTOR
VectorExp
(
	CVECTOR v
) noexcept
{
	VECTORF32 Result = { { {
		ScalarExp(v.vector4_f32[0]),
		ScalarExp(v.vector4_f32[1]),
		ScalarExp(v.vector4_f32[2]),
		ScalarExp(v.vector4_f32[3])
	} } };
	return Result.v;
}

VECTOR
VectorLog2
(
	CVECTOR v
) noexcept
{
	VECTORF32 Result = { { {
		ScalarLog2(v.vector4_f32[0]),
		ScalarLog2(v.vector4_f32[1]),
		ScalarLog2(v.vector4_f32[2]),
		ScalarLog2(v.vector4_f32[3])
	} } };
	return Result.v;
}

VECTOR
VectorLog10
(
	CVECTOR v
) noexcept
{
	VECTORF32 Result = { { {
		ScalarLog10(v.vector4_f32[0]),
		ScalarLog10(v.vector4_f32[1]),
		ScalarLog10(v.vector4_f32[2]),
		ScalarLog10(v.vector4_f32[3])
	} } };
	return Result.v;
}

VECTOR
VectorLog
(
	CVECTOR v
) noexcept
{
	VECTORF32 Result = { { {
		ScalarLog(v.vector4_f32[0]),
		ScalarLog(v.vector4_f32[1]),
		ScalarLog(v.vector4_f32[2]),
		ScalarLog(v.vector4_f32[3])
	} } };
	return Result.v;
}

VECTOR
VectorPow
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTORF32 Result = { { {
		ScalarPow(v1.vector4_f32[0], v2.vector4_f32[0]),
		ScalarPow(v1.vector4_f32[1], v2.vector4_f32[1]),
		ScalarPow(v1.vector4_f32[2], v2.vector4_f32[2]),
		ScalarPow(v1.vector4_f32[3], v2.vector4_f32[3])
	} } };
	return Result.v;
}

VECTOR
VectorAbs
(
	CVECTOR v
) noexcept
{
	VECTORF32 Result = { { {
		ScalarAbs(v.vector4_f32[0]),
		ScalarAbs(v.vector4_f32[1]),
		ScalarAbs(v.vector4_f32[2]),
		ScalarAbs(v.vector4_f32[3])
	} } };
	return Result.v;
}

VECTOR
VectorCos
(
	CVECTOR v
) noexcept
{
	VECTORF32 Result = { { {
		ScalarCos(v.vector4_f32[0]),
		ScalarCos(v.vector4_f32[1]),
		ScalarCos(v.vector4_f32[2]),
		ScalarCos(v.vector4_f32[3])
	} } };
	return Result.v;
}

VECTOR
VectorSin
(
	CVECTOR v
) noexcept
{
	VECTORF32 Result = { { {
		ScalarSin(v.vector4_f32[0]),
		ScalarSin(v.vector4_f32[1]),
		ScalarSin(v.vector4_f32[2]),
		ScalarSin(v.vector4_f32[3])
	} } };
	return Result.v;
}

VECTOR
VectorTan
(
	CVECTOR v
) noexcept
{
	VECTORF32 Result = { { {
		ScalarTan(v.vector4_f32[0]),
		ScalarTan(v.vector4_f32[1]),
		ScalarTan(v.vector4_f32[2]),
		ScalarTan(v.vector4_f32[3])
	} } };
	return Result.v;
}

VECTOR
VectorArcCos
(
	CVECTOR v
) noexcept
{
	VECTORF32 Result = { { {
		ScalarArcCos(v.vector4_f32[0]),
		ScalarArcCos(v.vector4_f32[1]),
		ScalarArcCos(v.vector4_f32[2]),
		ScalarArcCos(v.vector4_f32[3])
	} } };
	return Result.v;
}

VECTOR
VectorArcSin
(
	CVECTOR v
) noexcept
{
	VECTORF32 Result = { { {
		ScalarArcSin(v.vector4_f32[0]),
		ScalarArcSin(v.vector4_f32[1]),
		ScalarArcSin(v.vector4_f32[2]),
		ScalarArcSin(v.vector4_f32[3])
	} } };
	return Result.v;
}

VECTOR
VectorArcTan
(
	CVECTOR v
) noexcept
{
	VECTORF32 Result = { { {
		ScalarArcTan(v.vector4_f32[0]),
		ScalarArcTan(v.vector4_f32[1]),
		ScalarArcTan(v.vector4_f32[2]),
		ScalarArcTan(v.vector4_f32[3])
	} } };
	return Result.v;
}

}