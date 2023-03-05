/**********************
 * гл. I | § 1. Векторы 
 **********************
 *	Определения:
 *		Определение 1.
 *			Отрезок, концы которого упорядочены, называется направленным отрезком или вектором. 
 *			Первый из его концов называется началом, второй — концом вектора.
 *			К векторам относится и нулевой вектор, у которого начало и конец совпадают.
 *			Нулевой вектор обозначается 0.
 *		Определение 2.
 *			Расстояние между началом и концом вектора называется его длиной (а также модулем или абсолютной величиной).
 *			Длина вектора обозначается |a| или |AB|
 *		Определение 3.
 *			Векторы называются коллинеарными, если существует такая прямая, которой они параллельны. 
 *			Векторы компланарны, если существует плоскость, которой они параллельны. 
 *			Нулевой вектор считается коллинеарным любому вектору, так как он не имеет определенного направления. Длина его, разумеется, равна нулю.
 *		Определение 4.
 *			Два вектора называются равными, если они коллинеарны, одинаково направлены, и имеют равные длины.
 *		Определение 5.
 *			Пусть дан направленный отрезок. Множество всех направленных отрезков, равных данному в смысле определения 2, называется Вектором
 *		Определение 6.
 *			Пусть даны два вектора a и b. Построим равные им векторы AB и BC. Тогда вектор AC называется суммой векторов a и b и обозначается a + b.
 *		Определение 7.
 *			Произведением вектора a на вещественное число α называется вектор b, удовлетворяющий следующим условиям.
 *				а) |b| = |α||a|;
 *				б) b коллинеарен a;
 *				в) b и a направлены одинаково, если α > 0, и противоположно, если α < 0. (Если же α = 0, то из первого условия следует b = 0.)
 *			Произведение вектора a на число α обозначается αa.
 *			Приведенное определение определяет вектор αa не единственным образом, но все удовлетворяющие ему векторы равны между собой.
 *		Определение 8. 
 *			Непустое множество векторов, замкнутое относительно линейных операций, называется векторным пространством. 
 *			Если одно векторное пространство является подмножеством другого, то оно называется его подпространством.
 *		Определение 9. 
 *			Система векторов a1,..., ak называется линейно независимой, если нулевой вектор раскладывается по ней единственным образом.
 *				Система векторов линейно независима если из равенства α1a1 + ··· + αkak = 0 следует, что α1 = ··· = αk = 0.
 *				Система векторов линейно зависима, если найдутся такие коэффициенты α1,...,αk, что α1a1 + ··· + αkak = 0, и |α1| + ··· + |αk| ≠ 0.
 *		Опредление 10.
 *			Базисом в векторном пространстве называется упорядоченная линейно независимая система векторов такая, что любой вектор этого пространства по ней раскладывается.	
 *	Предложения:
 *		Предложение 1.
 *			Для любых векторов a, b и c и любых чисел α и β выполнено:
 *				1. a + b = b + a (cложение коммутативно).
 *				2. (a + b) + c = a + (b + c) (cложение ассоциативно).
 *				3. a + 0 = a.
 *				4. Вектор (−1)a — противоположный для a, то есть a + (−1)a = 0.
 *				5. (αβ)a = α(βa).
 *				6. (α + β)a = αa + βa.
 *				7. α(a + b) = αa + αb.
 *				8. 1a = a.
 *			Вектор (−1)a обозначается −a. 
 *			Разностью векторов a и b называется сумма векторов a и −b. Она обозначается a − b. 
 *		Предложение 2. 
 *			Если a ≠ 0, то любой вектор b, коллинеарный a, представим в виде b = ±(|b|/|a|)a. 
 *			Знак плюс или минус берется смотря по тому, направлены a и b одинаково или нет.
 *		Предложение 3. 
 *			Если в системе векторов какая-то часть линейно зависима, то вся система обязательно линейно зависима.
 *		Предложение 4. 
 *			Если вектор x раскладывается по системе векторов a1,..., ak, то это разложение единственно тогда и только тогда, когда система векторов линейно независима
 *		Предложение 5.
 *			Система из k > 1 векторов линейно зависима тогда и только тогда, когда один из векторов раскладывается по остальным.
 *		Предложение 6. 
 *			При умножении вектора на число все его компоненты умножаются на это число. 
 *			При сложении векторов складываются их соответствующие компоненты.
 *	Теоремы.
 *		Теорема 1.
 *			Система из одного вектора линейно зависима тогда и только тогда, когда это — нулевой вектор.
 *			Система из двух векторов линейно зависима тогда и только тогда, когда векторы коллинеарны.
 *			Система из трех векторов линейно зависима тогда и только тогда, когда векторы компланарны.
 *			Любые четыре вектора линейно зависимы
 *	Следствия.
 *		Следствие предложения 3:
 *			Любая часть линейно независимой системы линейно независима.
 *		Следствие теоремы 1:
 *			В нулевом пространстве базиса не существует.
 *			В одномерном пространстве (на прямой линии) базис состоит из одного ненулевого вектора.
 *			В двумерном пространстве (на плоскости) базис — упорядоченная пара неколлинеарных векторов.
 *			В трехмерном пространстве базис — упорядоченная тройка некомпланарных векторов.
 *		Следствие предложения 6. 
 *			Для того чтобы найти какую-либо координату линейной комбинации векторов, нужно вместо каждого из этих векторов подставить в линейную комбинацию его соответствующую координату.
 *	Доказательства.
 *		Доказательство предложения 3.
 *			Если к линейно зависимой системе a1,..., ak дописать какие-либо векторы b1,..., bs, то полученная система векторов будет линейно зависимой. 
 *			В самом деле, к имеющейся равной 0 нетривиальной линейной комбинации векторов a1,..., ak можно прибавить векторы b1,..., bs с нулевыми коэффициентами.
 *			Предложение доказано.
 *		Доказательство предложения 4.
 *			Действительно, пусть существуют два разложения x = α1a1+···+αkak и x = β1a1+···+βkak. 
 *			Вычитая их почленно одно из другого, мы получим (α1−β1)a1+···+(αk−βk)ak = 0. 
 *			Если векторы линейно независимы, отсюда следует, что α1−β1 = 0,...,αk−βk = 0, то есть оба разложения совпадают.
 *			Обратно, если векторы линейно зависимы, существует их нетривиальная линейная комбинация, равная нулевому вектору: α1a1+···+αkak = 0. 
 *			Мы можем прибавить ее к имеющемуся разложению x = β1a1+···+βkak и получить новое разложение x по тем же векторам: x = (α1+β1)a1+···+(αk+βk)ak.
 *			Предложение доказано.
 * 		Доказательство предложения 5.
 *			Пусть система векторов a1,...,ak линейно зависима, то есть существуют такие коэффициенты α1,...,αk, что α1a1+···+αkak = 0, и, например, α1 отличен от нуля. 
 *			В этом случае мы можем разложить a1 по остальным векторам:
 *				a1 = −α2/α1a2−···−αk/α1ak.
 *			Обратно, пусть один из векторов, например, a1 разложен по остальным векторам: a1 = β2a2+···+βkak. 
 *			Это означает, что линейная комбинация векторов a1,..., ak с коэффициентами −1, β2,...,βk равна нулевому вектору.
 *			Предложение доказано.
 *		Доказательство предложения 6.
 *			Действительно, если a = α1e1+α2e2+α3e3 и b = β1e1+β2e2+β3e3, то λa = λ(α1e1+α2e2+α3e3) = (λα1)e1+(λα2)e2+(λα3)e3. 
 *			Точно так же a+b = (α1e1+α2e2+α3e3)+(β1e1+β2e2+β3e3)=(α1+β1)e1+(α2+β2)e2+(α3+β3)e3.
 *			Для одномерного и двумерного пространств доказательство отличается только числом слагаемых.
 *			Предложение доказано.
 *		Доказательство теоремы 1.
 *			1.
 *				Нулевой вектор составляет линейно зависимую систему, так как 1*0 = 0. 
 *				Система, содержащая только ненулевой вектор, линейно независима, так как при его умножении на число, отличное от нуля, получится ненулевой вектор.
 *			2.
 *				Пусть векторы a и b коллинеарны. Если a = 0, то a и b линейно зависимы. Пусть a ≠ 0. 
 *				Тогда по предложению 2 b раскладывается по a. Таким образом, в любом случае коллинеарные векторы линейно зависимы.
 *				Обратно, из двух линейно зависимых векторов один обязательно раскладывается по другому и, следовательно, ему коллинеарен.
 *			3. 
 *				Пусть векторы a, b и c компланарны. Если a и b коллинеарны, то они линейно зависимы, и тогда линейно зависимы все три вектора.
 *				Пусть a и b не коллинеарны. Разложим c по ним. Для этого поместим начала всех векторов в одну точку O и проведем через конец C вектора c прямую, параллельную b, до пересечения в точке P с прямой, на которой лежит a. 
 *				(Это построение возможно, так как векторы a и b не коллинеарны и, в частности, оба не нулевые.) Теперь OC = OP + PC причем OP и PC коллинеарны, соответственно, a и b. 
 *				По доказанному выше, найдутся числа α и β такие, что OP = αa и PC = βb. Таким образом, c = αa+ βb.
 *				Это означает, что a, b и c линейно зависимы. 
 *				Обратно, если a, b и c линейно зависимы, то один из них раскладывается по двум другим и, следовательно, им компланарен.
 *			4.  
 *				Рассмотрим четыре вектора a, b, c и d. Если a, b и c компланарны, то они линейно зависимы сами по себе и вместе с вектором d. 
 *				Пусть a, b и c не компланарны. Аналогично предыдущему докажем, что d раскладывается по ним. 
 *				Поместим начала всех векторов в одну точку O и проведем через конец D вектора d прямую, параллельную c, до пересечения в точке P с плоскостью, на которой лежат a и b. 
 *				Теперь OD = OP + PD, причем OP компланарен a и b, а PD коллинеарен c. 
 *				По доказанному выше, OP раскладывается по a и b, а PD по c. Значит d разложен по a, b и c и составляет с ними линейно зависимую систему. 
 *			Теорема доказана.
 */

/***********************
 * §2. Системы Координат
 ***********************
 *	Определения:
 *		Опредление 1.
 *			Декартовой системой координат в пространстве называется совокупность точки и базиса.
 *		Опредление 2.
 *			Пусть дана декартова система координат O, e1, e2, e3.
 *			Компоненты x, y, z радиус-вектора OM точки M называются координатами точки M в данной системе координат:
 *				OM = xe1 + ye2 + ze3.
 *			Первая координата называется абсциссой, вторая — ординатой, а третья — аппликатой.
 *			Аналогично определяются координаты на плоскости и на прямой линии. Разумеется, точка на плоскости имеет только две координаты, а на прямой линии — одну.
 *		Опредление 3. 
 *			Базис называется ортонормированным, если его векторы попарно ортогональны и по длине равны единице. 
 *			Декартова система координат, базис которой ортонормирован, называется декартовой прямоугольной системой координат
 *		Опредление 4.
 *			Косинусы углов между вектором a и базисными векторами декартовой прямоугольной системы координат называются направляющими косинусами этого вектора.
 *			Направляющие косинусы — это компоненты вектора ao = a/|a|.
 *			Их отличительная особенность состоит в том, что сумма их квадратов равна 1.
 *	Предложения.
 *		Предложение 1.
 *			 Чтобы найти координаты вектора, нужно из координат его конца вычесть координаты его начала.
 *		Предложение 2. 
 *			Если базис ортонормирован, то компоненты любого вектора a находятся по формулам:
 *				α1 = |a|cos(ϕ1), α2 = |a|cos(ϕ2), α3 = |a|cos(ϕ3), 
 *			где ϕ1, ϕ2, и ϕ3 — углы между вектором a и соответствующими базисными векторами.
 *	Доказательства.
 *		Доказательство предложения 1.
 *			Рассмотрим две точки A и B, координаты которых относительно некоторой декартовой системы координат O, e1, e2, e3 соответственно равны x1, y1, z1 и x2, y2, z2. 
 *			Очевидно, что AB = OB − OA. Компоненты радиус-векторов OA и OB равны (x1, y1, z1) и (x2, y2, z2) по определению координат. 
 *          Из предложения 6 §1 следует, что AB имеет компоненты (x2 − x1, y2 − y1, z2 − z1).
 *			Предложение доказано.
 *		Доказательство предложения 2.
 *			Пусть a = a1 + a2 + a3, причем каждое слагаемое коллинеарно соответствующему базисному вектору. 
 *			Мы знаем из предложения 2 §1, что α1 = ±|a1|/|e1|, где выбирается знак + или − в зависимости от того, одинаково или противоположно направлены a1 и e1. 
 *			Но, как видно, ±|a1| = |a|cos(ϕ1), где ϕ1 — угол между векторами a и e1. И так, α1 = |a|cos(ϕ1)/|e1| = |a|cos(ϕ1), так как для ортонормированного базиса |e1| = 1.
 *			Аналогично вычисляются и остальные компоненты.
 *			Для ортонормированного базиса на плоскости из формул остаются первые две:
 *				α1 = |a|cos(ϕ1), α2 = |a|cos(ϕ2) = |a|sin(ϕ1).
 *			Предложение доказано.
 */

#include "../../../include/MorphineMath/Vector.hpp"

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
	VECTORF32 vResult = { { {
		(v1.vector4_f32[0] < v2.vector4_f32[0]) ? v1.vector4_f32[0] : v2.vector4_f32[0],
		(v1.vector4_f32[1] < v2.vector4_f32[1]) ? v1.vector4_f32[1] : v2.vector4_f32[1],
		(v1.vector4_f32[2] < v2.vector4_f32[2]) ? v1.vector4_f32[2] : v2.vector4_f32[2],
		(v1.vector4_f32[3] < v2.vector4_f32[3]) ? v1.vector4_f32[3] : v2.vector4_f32[3]
	} } };
	return vResult.v;
}

VECTOR
VectorMax
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTORF32 vResult = { { {
		(v1.vector4_f32[0] > v2.vector4_f32[0]) ? v1.vector4_f32[0] : v2.vector4_f32[0],
		(v1.vector4_f32[1] > v2.vector4_f32[1]) ? v1.vector4_f32[1] : v2.vector4_f32[1],
		(v1.vector4_f32[2] > v2.vector4_f32[2]) ? v1.vector4_f32[2] : v2.vector4_f32[2],
		(v1.vector4_f32[3] > v2.vector4_f32[3]) ? v1.vector4_f32[3] : v2.vector4_f32[3]
	} } };
	return vResult.v;
}

VECTOR
VectorRound
(
	CVECTOR v
) noexcept
{
	VECTORF32 vResult = { { {
		ScalarRound(v.vector4_f32[0]),
		ScalarRound(v.vector4_f32[1]),
		ScalarRound(v.vector4_f32[2]),
		ScalarRound(v.vector4_f32[3])
	} } };
	return vResult.v;
}

VECTOR
VectorFloor
(
	CVECTOR v
) noexcept
{
	VECTORF32 vResult = { { {
		ScalarFloor(v.vector4_f32[0]),
		ScalarFloor(v.vector4_f32[1]),
		ScalarFloor(v.vector4_f32[2]),
		ScalarFloor(v.vector4_f32[3])
	} } };
	return vResult.v;
}

VECTOR
VectorCeil
(
	CVECTOR v
) noexcept
{
	VECTORF32 vResult = { { {
		ScalarCeil(v.vector4_f32[0]),
		ScalarCeil(v.vector4_f32[1]),
		ScalarCeil(v.vector4_f32[2]),
		ScalarCeil(v.vector4_f32[3])
	} } };
	return vResult.v;
}

VECTOR
VectorTrunc
(
	CVECTOR v
) noexcept
{
	VECTORF32 vResult = { { {
		ScalarTrunc(v.vector4_f32[0]),
		ScalarTrunc(v.vector4_f32[1]),
		ScalarTrunc(v.vector4_f32[2]),
		ScalarTrunc(v.vector4_f32[3])
	} } };
	return vResult.v;
}


VECTOR
VectorClamp
(
	CVECTOR v,
	CVECTOR vmin,
	CVECTOR vmax
) noexcept
{
	VECTORF32 vResult = { { {
		ScalarClamp(v.vector4_f32[0], vmin.vector4_f32[0], vmax.vector4_f32[0]),
		ScalarClamp(v.vector4_f32[1], vmin.vector4_f32[1], vmax.vector4_f32[1]),
		ScalarClamp(v.vector4_f32[2], vmin.vector4_f32[2], vmax.vector4_f32[2]),
		ScalarClamp(v.vector4_f32[3], vmin.vector4_f32[3], vmax.vector4_f32[3])
	} } };
	return vResult.v;
}

VECTOR
VectorAndInt
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTORU32 vResult = { { {
		v1.vector4_u32[0] & v2.vector4_u32[0],
		v1.vector4_u32[1] & v2.vector4_u32[1],
		v1.vector4_u32[2] & v2.vector4_u32[2],
		v1.vector4_u32[3] & v2.vector4_u32[3]
	} } };
	return vResult.v;
}

VECTOR	
VectorOrInt
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTORU32 vResult = { { {
		v1.vector4_u32[0] | v2.vector4_u32[0],
		v1.vector4_u32[1] | v2.vector4_u32[1],
		v1.vector4_u32[2] | v2.vector4_u32[2],
		v1.vector4_u32[3] | v2.vector4_u32[3]
	} } };
	return vResult.v;
}

VECTOR
VectorNorInt
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTORU32 vResult = { { {
		~(v1.vector4_u32[0] | v2.vector4_u32[0]),
		~(v1.vector4_u32[1] | v2.vector4_u32[1]),
		~(v1.vector4_u32[2] | v2.vector4_u32[2]),
		~(v1.vector4_u32[3] | v2.vector4_u32[3])
	} } };
	return vResult.v;
}

VECTOR
VectorXorInt
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTORU32 vResult = { { {
		v1.vector4_u32[0] ^ v2.vector4_u32[0],
		v1.vector4_u32[1] ^ v2.vector4_u32[1],
		v1.vector4_u32[2] ^ v2.vector4_u32[2],
		v1.vector4_u32[3] ^ v2.vector4_u32[3]
	} } };
	return vResult.v;
}

VECTOR
VectorSelect
(
	CVECTOR v1,
	CVECTOR v2,
	CVECTOR control
)
{
	VECTORU32 vResult = { { {
		(v1.vector4_u32[0] & control.vector4_u32[0]) | (v2.vector4_u32[0] & ~control.vector4_u32[0]),
		(v1.vector4_u32[1] & control.vector4_u32[1]) | (v2.vector4_u32[1] & ~control.vector4_u32[1]),
		(v1.vector4_u32[2] & control.vector4_u32[2]) | (v2.vector4_u32[2] & ~control.vector4_u32[2]),
		(v1.vector4_u32[3] & control.vector4_u32[3]) | (v2.vector4_u32[3] & ~control.vector4_u32[3])
	} } };
	return vResult.v;
}

VECTOR
VectorNegate
(
	CVECTOR v
) noexcept
{
	VECTORF32 vResult = { { {
		-v.vector4_f32[0],
		-v.vector4_f32[1],
		-v.vector4_f32[2],
		-v.vector4_f32[3]
	} } };
	return vResult.v;
}

VECTOR
VectorAdd
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTORF32 vResult = { { {
		v1.vector4_f32[0] + v2.vector4_f32[0],
		v1.vector4_f32[1] + v2.vector4_f32[1],
		v1.vector4_f32[2] + v2.vector4_f32[2],
		v1.vector4_f32[3] + v2.vector4_f32[3]
	} } };
	return vResult.v;
}

VECTOR
VectorSubtract
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTORF32 vResult = { { {
		v1.vector4_f32[0] - v2.vector4_f32[0],
		v1.vector4_f32[1] - v2.vector4_f32[1],
		v1.vector4_f32[2] - v2.vector4_f32[2],
		v1.vector4_f32[3] - v2.vector4_f32[3]
	} } };
	return vResult.v;
}

VECTOR
VectorMultiply
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTORF32 vResult = { { {
		v1.vector4_f32[0] * v2.vector4_f32[0],
		v1.vector4_f32[1] * v2.vector4_f32[1],
		v1.vector4_f32[2] * v2.vector4_f32[2],
		v1.vector4_f32[3] * v2.vector4_f32[3]
	} } };
	return vResult.v;
}

VECTOR
VectorMultiplyAdd
(
	CVECTOR v1,
	CVECTOR v2,
	CVECTOR v3
) noexcept
{
	VECTORF32 vResult = { { {
		v1.vector4_f32[0] * v2.vector4_f32[0] + v3.vector4_f32[0],
		v1.vector4_f32[1] * v2.vector4_f32[1] + v3.vector4_f32[1],
		v1.vector4_f32[2] * v2.vector4_f32[2] + v3.vector4_f32[2],
		v1.vector4_f32[3] * v2.vector4_f32[3] + v3.vector4_f32[3]
	} } };
	return vResult.v;
}

VECTOR
VectorDivide
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTORF32 vResult = { { {
		v1.vector4_f32[0] / v2.vector4_f32[0],
		v1.vector4_f32[1] / v2.vector4_f32[1],
		v1.vector4_f32[2] / v2.vector4_f32[2],
		v1.vector4_f32[3] / v2.vector4_f32[3]
	} } };
	return vResult.v;
}

VECTOR
VectorDivideAdd
(
	CVECTOR v1,
	CVECTOR v2,
	CVECTOR v3
) noexcept
{
	VECTORF32 vResult = { { {
		v1.vector4_f32[0] / v2.vector4_f32[0] + v3.vector4_f32[0],
		v1.vector4_f32[1] / v2.vector4_f32[1] + v3.vector4_f32[1],
		v1.vector4_f32[2] / v2.vector4_f32[2] + v3.vector4_f32[2],
		v1.vector4_f32[3] / v2.vector4_f32[3] + v3.vector4_f32[3]
	} } };
	return vResult.v;
}

VECTOR
VectorScale
(
	CVECTOR v,
	F32 s
) noexcept
{
	VECTORF32 vResult = { { {
		v.vector4_f32[0] * s,
		v.vector4_f32[1] * s,
		v.vector4_f32[2] * s,
		v.vector4_f32[3] * s
	} } };
	return vResult.v;
}

VECTOR
VectorSqrt
(
	CVECTOR v
) noexcept
{
	VECTORF32 vResult = { { {
		ScalarSqrt(v.vector4_f32[0]),
		ScalarSqrt(v.vector4_f32[1]),
		ScalarSqrt(v.vector4_f32[2]),
		ScalarSqrt(v.vector4_f32[3])
	} } };
	return vResult.v;
}

VECTOR
VectorExp2
(
	CVECTOR v
) noexcept
{
	VECTORF32 vResult = { { {
		ScalarExp2(v.vector4_f32[0]),
		ScalarExp2(v.vector4_f32[1]),
		ScalarExp2(v.vector4_f32[2]),
		ScalarExp2(v.vector4_f32[3])
	} } };
	return vResult.v;
}

VECTOR
VectorExp
(
	CVECTOR v
) noexcept
{
	VECTORF32 vResult = { { {
		ScalarExp(v.vector4_f32[0]),
		ScalarExp(v.vector4_f32[1]),
		ScalarExp(v.vector4_f32[2]),
		ScalarExp(v.vector4_f32[3])
	} } };
	return vResult.v;
}

VECTOR
VectorLog2
(
	CVECTOR v
) noexcept
{
	VECTORF32 vResult = { { {
		ScalarLog2(v.vector4_f32[0]),
		ScalarLog2(v.vector4_f32[1]),
		ScalarLog2(v.vector4_f32[2]),
		ScalarLog2(v.vector4_f32[3])
	} } };
	return vResult.v;
}

VECTOR
VectorLog10
(
	CVECTOR v
) noexcept
{
	VECTORF32 vResult = { { {
		ScalarLog10(v.vector4_f32[0]),
		ScalarLog10(v.vector4_f32[1]),
		ScalarLog10(v.vector4_f32[2]),
		ScalarLog10(v.vector4_f32[3])
	} } };
	return vResult.v;
}

VECTOR
VectorLog
(
	CVECTOR v
) noexcept
{
	VECTORF32 vResult = { { {
		ScalarLog(v.vector4_f32[0]),
		ScalarLog(v.vector4_f32[1]),
		ScalarLog(v.vector4_f32[2]),
		ScalarLog(v.vector4_f32[3])
	} } };
	return vResult.v;
}

VECTOR
VectorPow
(
	CVECTOR v1,
	CVECTOR v2
) noexcept
{
	VECTORF32 vResult = { { {
		ScalarPow(v1.vector4_f32[0], v2.vector4_f32[0]),
		ScalarPow(v1.vector4_f32[1], v2.vector4_f32[1]),
		ScalarPow(v1.vector4_f32[2], v2.vector4_f32[2]),
		ScalarPow(v1.vector4_f32[3], v2.vector4_f32[3])
	} } };
	return vResult.v;
}

VECTOR
VectorAbs
(
	CVECTOR v
) noexcept
{
	VECTORF32 vResult = { { {
		ScalarAbs(v.vector4_f32[0]),
		ScalarAbs(v.vector4_f32[1]),
		ScalarAbs(v.vector4_f32[2]),
		ScalarAbs(v.vector4_f32[3])
	} } };
	return vResult.v;
}

VECTOR
VectorCos
(
	CVECTOR v
) noexcept
{
	VECTORF32 vResult = { { {
		ScalarCos(v.vector4_f32[0]),
		ScalarCos(v.vector4_f32[1]),
		ScalarCos(v.vector4_f32[2]),
		ScalarCos(v.vector4_f32[3])
	} } };
	return vResult.v;
}

VECTOR
VectorSin
(
	CVECTOR v
) noexcept
{
	VECTORF32 vResult = { { {
		ScalarSin(v.vector4_f32[0]),
		ScalarSin(v.vector4_f32[1]),
		ScalarSin(v.vector4_f32[2]),
		ScalarSin(v.vector4_f32[3])
	} } };
	return vResult.v;
}

VECTOR
VectorTan
(
	CVECTOR v
) noexcept
{
	VECTORF32 vResult = { { {
		ScalarTan(v.vector4_f32[0]),
		ScalarTan(v.vector4_f32[1]),
		ScalarTan(v.vector4_f32[2]),
		ScalarTan(v.vector4_f32[3])
	} } };
	return vResult.v;
}

VECTOR
VectorArcCos
(
	CVECTOR v
) noexcept
{
	VECTORF32 vResult = { { {
		ScalarArcCos(v.vector4_f32[0]),
		ScalarArcCos(v.vector4_f32[1]),
		ScalarArcCos(v.vector4_f32[2]),
		ScalarArcCos(v.vector4_f32[3])
	} } };
	return vResult.v;
}

VECTOR
VectorArcSin
(
	CVECTOR v
) noexcept
{
	VECTORF32 vResult = { { {
		ScalarArcSin(v.vector4_f32[0]),
		ScalarArcSin(v.vector4_f32[1]),
		ScalarArcSin(v.vector4_f32[2]),
		ScalarArcSin(v.vector4_f32[3])
	} } };
	return vResult.v;
}

VECTOR
VectorArcTan
(
	CVECTOR v
) noexcept
{
	VECTORF32 vResult = { { {
		ScalarArcTan(v.vector4_f32[0]),
		ScalarArcTan(v.vector4_f32[1]),
		ScalarArcTan(v.vector4_f32[2]),
		ScalarArcTan(v.vector4_f32[3])
	} } };
	return vResult.v;
}

}