#include "../../include/MorphineMath/Scalar.hpp"

#include <math.h>

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
	F32 x;
	{
		x = static_cast<I32>(s);
	}
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

F32	
ScalarAbs
(
	F32 s
) noexcept
{
	F32 x;
	{
		if (s < 0)
		{
			x = -s;
		}
		else
		{
			x = s;
		}
	}
	return x;
}

F32	
ScalarPow
(
	F32 s1,
	F32 s2
) noexcept
{
	F32 x;
	{
		//TODO
		x = powf(s1, s2);
	}
	return x;
}

F32 
ScalarSqrt
(
	F32 s
) noexcept
{
	F32 x;
	{
		//TODO
		x = sqrtf(s);
	}
	return x;
}

F32 
ScalarExp2
(
	F32 s
) noexcept
{
	F32 x;
	{
		//TODO
		x = exp2f(s);
	}
	return x;
}

F32 
ScalarExp
(
	F32 s
) noexcept
{
	F32 x;
	{
		//TODO
		x = expf(s);
	}
	return x;
}

F32	
ScalarLog2
(
	F32 s
) noexcept
{
	F32 x;
	{
		//TODO
		x = log2f(s);
	}
	return x;
}

F32	
ScalarLog10
(
	F32 s
) noexcept
{
	F32 x;
	{
		//TODO
		x = log10f(s);
	}
	return x;
}

F32	
ScalarLog
(
	F32 s
) noexcept
{
	F32 x;
	{
		//TODO
		x = logf(s);
	}
	return x;
}

F32 
ScalarSin
(
	F32 s
) noexcept
{
	F32 x;
	{
		//TODO
		x = sinf(s);
	}
	return x;
}

F32 
ScalarCos
(
	F32 s
) noexcept
{
	F32 x;
	{
		//TODO
		x = cosf(s);
	}
	return x;
}

F32 
ScalarTan
(
	F32 s
) noexcept
{
	F32 x;
	{
		//TODO
		x = tanf(s);
	}
	return x;
}

F32 
ScalarArcSin
(
	F32 s
) noexcept
{
	F32 x;
	{
		//TODO
		x = asinf(s);
	}
	return x;
}

F32 
ScalarArcCos
(
	F32 s
) noexcept
{
	F32 x;
	{
		//TODO
		x = acosf(s);
	}
	return x;
}

F32 
ScalarArcTan
(
	F32 s
) noexcept
{
	F32 x;
	{
		//TODO
		x = atanf(s);
	}
	return x;
}

}