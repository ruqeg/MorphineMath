#include "../../include/MorphineMath/Scalar.hpp"

namespace MorphineMath
{

F32 
ScalarRound
(
	F32 s
) noexcept
{
	//TODO
    F32 x = ScalarFloor(s);
    F32 y = s - x;
	F32 z; 
	{
		if (y < 0.5f)
		{
			z = x;
		}
		else if (y > 0.5f)
		{
			z = x + 1.f;
		}
		else
		{
			z = x;
		}
	}
	return z;
}

F32 
ScalarFloor
(
	F32 s
) noexcept
{
	F32 y = static_cast<I32>(s);
	F32 x; 
	{
		if (s > 0.0f)
		{
			x = y;
		}
		else
		{
			x = y - 1;
		}
	}
	return x;
}

F32 
ScalarCeil
(
	F32 s
) noexcept
{
	F32 y = static_cast<I32>(s);
	F32 x;
	{
		if (s > 0.0f)
		{
			x = y + 1.0f;
		}
		else
		{
			x = y;
		}
	}
	return x;
}

F32 
ScalarTrunc
(
	F32 s
) noexcept
{
	F32 x = static_cast<I32>(s);
	return x;
}

F32 
ScalarClamp
(
	F32 s,
	F32 min,
	F32 max
) noexcept
{
	F32 x;
	{
		if (s < min)
		{
			x = min;
		}
		else if (s > max)
		{
			x = max;
		}
		else
		{
			x = s;
		}
	}
	return x;
}

}