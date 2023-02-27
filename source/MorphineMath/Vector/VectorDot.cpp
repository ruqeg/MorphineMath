/***********************
 * §2. Скалярное произведение (Dot product)
 ***********************
 *	Определения:
 *		Определение 1.
 *			Скалярным произведением двух векторов называется число, равное произведению длин этих векторов на косинус угла между ними. 
 *			Если хоть один из векторов — нулевой, то угол не определен, и скалярное произведение по определению равно нулю.
 *			Скалярное произведение векторов a и b обозначается (a, b). Таким образом, мы можем написать (a, b) = |a||b|cos(ϕ), где ϕ — угол между векторами a и b
 *		Определение 2.
 *			Пусть дана декартова система координат O, e1, e2, e3.
 *			Компоненты x, y, z радиус-вектора OM точки M называются координатами точки M в данной системе координат:
 *				OM = xe1 + ye2 + ze3.
 *			Первая координата называется абсциссой, вторая — ординатой, а третья — аппликатой.
 *			Аналогично определяются координаты на плоскости и на прямой линии. Разумеется, точка на плоскости имеет только две координаты, а на прямой линии — одну.
 *		Определение 3.
 *			Базис называется ортонормированным, если его векторы попарно ортогональны и по длине равны единице.
 *			Декартова система координат, базис которой ортонормирован, называется декартовой прямоугольной системой координат
 *		Определение 4.
 *			Косинусы углов между вектором a и базисными векторами декартовой прямоугольной системы координат называются направляющими косинусами этого вектора.
 *			Направляющие косинусы — это компоненты вектора ao = a/|a|.
 *			Их отличительная особенность состоит в том, что сумма их квадратов равна 1.
 *		Определение 5.
 *			Базис, определяемый равенствами:
 *				(ei, ~ej) = (i ≠ j ? 0 : 1);
 *			называется базисом, биортогональным или взаимным базису e1, e2, e3.
 *	Предложения.
 *		Предложение 1.
 *			Если базисные векторы e1, e2, e3 попарно ортогональны, то компоненты любого вектора a находятся по формулам:
 *				α1 = (a, e1)/|e1|², α2 = (a, e2)/|e2|², α3 = (a, e3)/|e3|²
 *			В частности, если базис ортонормированный:
 *				α1 = (a, e1), α2 = (a, e2), α3 = (a, e3) (1)
 *				и
 *				a = (a, e1)e1 + (a, e2)e2 + (a, e3)e3
 *		Предложение 2.
 *			Для любых векторов a, b и c и любых чисел α, β и γ выполнены равенстваЖ
 *				(αa + βb, c) = α(a, c) + β(b, c) и (a, βb + γc) = β(a, b) + γ(a, c).
 *			В частности:
 *				(αa, c) = α(a, c) и (a + b, c) = (a, c) + (b, c).
 *		Предложение 3. 
 *			Векторы #e1, #e2, #e3, определенные равенством:
 *				(ei, ~ej) = (i ≠ j ? 0 : 1);
 *			составляют базис.
 *	Теоремы.
 *		Теорема 1.
 *			Если базис ортонормированный, то скалярное произведение векторов a и b выражается через их компоненты (α1, α2, α3) и (β1, β2, β3) по формуле:
 *				(a, b) = α1β1 + α2β2 + α3β3.
 *	Следствия.
 *		Следствие определения 1.
 *			Скалярное умножение имеет следующие очевидные свойства:
 *				Коммутативность: для любых a и b выполнено (a, b) = (b, a).
 *				(a, a) = |a| для любого вектора a.
 *				Скалярное произведение равно нулю тогда и только тогда, когда сомножители ортогональны или хотя бы один из них равен 0.
 *				Если (a, x) = 0 для любого вектора x, то a = 0. Действительно, при x = a мы получаем (a, a) = 0.
 *				Векторы ортонормированного базиса удовлетворяют равенствам:
 *					(e1, e1) = (e2, e2) = (e3, e3) = 1,
 *					(e1, e2) = (e2, e3) = (e3, e1) = 0
 *		Следствия предложения 3.
 *			//TODO clean
 *			Если базис ортонормированный, то он совпадает со своим биортогональным.
 *			Так же мы доказали, что для любого вектора x имеет место разложение:
 *				x = (x, e1)#e1 + (x, e2)#e2 + (x, e3)#e3. (8)
 *			Оба базиса входят в равенства симметрично. Поэтому биортогональным для базиса #e1, #e2, #e3 будет базис e1, e2, e3.
 *			Отсюда, в частности, следует, что для любого вектора x справедливо также разложение:
 *				x = (x, #e1)e1 + (x, #e2)e2 + (x, #e3)e3. (9)
 *			При заданном базисе e1, e2, e3 числа #ξ1 = (x, e1), #ξ2 = (x, e2), #ξ3 = (x, e3) однозначно определяют вектор x по формуле (8). 
 *			Они называются ковариантными координатами вектора x в базисе e1, e2, e3. По отношению к биортогональному базису #e1, #e2, #e3 — это его обыкновенные координаты. 
 *			Обычные координаты, чтобы подчеркнуть их отличие отковариантных координат, называют контрвариантными координатами.
 *			Скалярное произведение векторов равно сумме произведений координат одного из них на ковариантные координаты другого. 
 *			Действительно, (a, b) = (α1e1 + α2e2 + α3e3, b) = α1(e1, b) + α2(e2, b) + α3(e3, b) = α1#β1 + α2#β2 + α3#β3. (10)
 *			На плоскости базис #e1, #e2, биортогональный базису e1, e2, определяется теми же формулами (6), и все сказанное о биортогональном базисе в пространстве с очевидными изменениями переносится на базисы на плоскости. 
 *			Так равенства (8) и (9) должны содержать по два слагаемых, а в формулах (7) остаются только две координаты.
 *		Следствия теоремы 1.
 *			Выражение длины вектора через его компоненты в ортонормированном базисе:
 *				|a| = sqrt(α1² + α2² + α3²)
 *			Выражение косинуса угла между векторами в ортонормированном базисе:
 *				cos(ϕ) = (a, b)/(|a||b|) = (α1β1 + α2β2 + α3β3)/(sqrt(β² + β² + β²)sqrt(α1² + α2² + α3²))
 *			Расстояние между точками, если заданы их координаты в декартовой прямоугольной системе координат в ортонормированном базисе. 
 *			Пусть точки A и B имеют координаты (x, y, z) и (x1, y1, z1). Тогда расстояние между ними равно:
 *				|AB| = sqrt((x1 − x)² + (y1 − y)² + (z1 − z)²)
 *	Доказательства.
 *		Доказательство предложения 1.
 *			В самом деле, пусть e1, e2, e3 — попарно ортогональны.
 *			Тогда векторы _e1 = e1/|e1|, _e2 = e2/|e2|, _e3 = e3/|e3| составляют ортонормированный базис. 
 *			Как мы видели в предложении 2 §2, компоненты произвольного вектора a в ортонормированном базисе можно вычислить как:
 *				α1 = |a|cos(ϕ1), α2 = |a|cos(ϕ2), α3 = |a|cos(ϕ3), где ϕ1, ϕ2 и ϕ3 — углы, между a и векторами базиса. 
 *			Значит:
 *				α1 = (a, e1)/|e1|, α2 = (a, e2)/|e2| и α3 = (a, e3)/|e3|. 
 *			Поэтому:
 *				a = _e1((a, e1)/|e1|) + _e2((a, e2)/|e2|) + _e3((a, e3)/|e3|) 
 *				  = (e1/|e1|)((a, e1)/|e1|) + (e2/|e2|)((a, e2)/|e2|) + (e3/|e3|)((a, e3)/|e3|).
 *			Предложение доказано.
 *		Доказательство предложения 2.
 *			Докажем первое равенство. Если c = 0, то оно очевидно.
 *			Пусть c ≠ 0. Примем c за первый вектор базиса, а остальные выберем ортогонально к нему и между собой. 
 *			Число (αa + βb, c)/|c|² — первая компонента вектора αa + βb. Точно так же (a, c)/|c|² и (b, c)/|c|² — первые компоненты векторов a и b. 
 *			Согласно предложению 6 §1, (αa + βb, c)/|c|² = α(a, c)/|c|² + β(b, c)/|c|².
 *			Отсюда прямо следует первое равенство. Второе мы получим используя коммутативность скалярного умножения.
 *			Последовательно применяя предложение 2, легко показать, что скобки также могут быть раскрыты при скалярном умножении линейных комбинаций любого числа векторов.
 *			Предложение доказано.
 *		Докадательство предложения 3.
 *			Действительно, возьмем произвольный вектор x и допустим, что он раскладывается по этим векторам:
 *				x = #ξ1#e1 + #ξ2#e2 + #ξ3#e3
 *			Таким образом, каждый вектор, который раскладывается по #e1, #e2, #e3, (в том числе и нулевой) раскладывается однозначно. 
 *			Это означает, что векторы линейно независимы и, следовательно, составляют базис. 
 *			Предложение доказано.
 *		Доказательство теоремы 1.
 *			Действительно, подставим вместо b его разложение и воспользуемся предложением 2:
 *				(a, b) = (a, β1e1 + β2e2 + β3e3) = β1(a, e1) + β2(a, e2) + β3(a, e3)
 *			Теорема доказана.
 */
/*
 *	Definition:
 *		dot(v1,v2) = (v1, v2) = |v1| + |v2| * cos(v1, v2)                      v1, v2 - vectors;
 *	Properties:
 *		1. (v1, v2) = (v2, v1)                                                 v1, v2 - vectors;
 *		2. (v, v) = |v|^2                                                      v - vectors;
 *		3. ((v1, v2) = 0) ⇒  (v1 ⊥ v2)                                        v1, v2 - vectors;
 *		4. (∀v1 : (v1, v2) = 0) ⇒ (v2 = 0)                                    v1, v2, 0 - vectors;
 *		5. (ei, ej) = (i == j ? 1 : 0)                                         e - orthogonal basis; 1, 0 - scalars;
 *	Assumptions:
 *		1. v_n = (v, en) / |en|^2                                              v - vectors in orthogonal basis; en - orthogonal basis; v_n - scalars;
 *		2. v_n = (v, en)                                                       v - vectors in orthonormal  basis; en - orthonormal basis; v_n - scalars;
 *		3. (αa + βb, c) = α(a, c) + β(b, c)                                    a, b, c - vectors; α, β - scalars;
 *		4. (a, βb + γc) = β(a, b) + γ(a, c)                                    a, b, c - vectors; β, γ - scalars;
 *	Theorems:
 *		1. 
 *			(a, b) = α1*β1 + α2*β2 + ... + αn*βn                               a, b - vectors; αn, βn - scalars;
 *		2. 
 *			(a, b) = (α1*e1 + α2*e2 + ... + αn*en, b) =                        a, b - vectors; en - basis; αn, βn - scalars;
 *			= α1(e1, b) + α2(e2, b) + ... + αn(en, b) =                        a, b - vectors; en - basis; αn, βn - scalars;
 *			= α1*β1` + α2*β2`+ ... + αnβn` =                                   αn, βn - scalars;
 *	Consequence of theorems:
 *		T1 =>
 *			|a| = sqrt(α1^2 + α2^2 + ... + αn^2)                               a - vectors in orthonormal basis, αn - scalars;
 *		T2 =>
 *			|a| = sqrt(α1*(e1, a) + α2*(e2, a) + ... + αn*(en, a))             a - vectors; en - basis; αn - scalars;
 *		T1 => 
 *			cos(a,b) = (a,b) / (|a||b|)                                        a, b - vectors in orthonormal basis;
 *	Proofs of assumptions:
 *		1. //TODO
 *		1. //TODO
 *		2. //TODO
 *		2. //TODO
 *	Proofs of theorems:
 *		1. //TODO
 *	Proofs of consequence of theorems:
 *		1. //TODO
 *		2. //TODO
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