﻿/******************************************
 * гл. II | §2. Уравнения прямых и плоскостей
 ******************************************
 *	Определения.
 *		Определение 1. 
 *			Отношение компонент направляющего вектора a2/a1 называется угловым коэффициентом прямой.
 *	Предложения.
 *		Предложение 1.
 *			В общей декартовой системе координат в пространстве каждая плоскость может быть задана уравнением:
 *				r − r0 = t1p + t2q.	(6)
 *			Обратно, каждое уравнение вида (6) в общей декартовой системе координат определяет плоскость.
 *		Предложение 1.
 *			В общей декартовой системе координат в пространстве каждая прямая может быть задана уравнением:
 *				r − r0 = ta	(3)
 *			Обратно, каждое уравнение вида (3) в общей декартовой системе координат определяет прямую.
 *		Предложение 3. 
 *			В любой декартовой системе координат на плоскости уравнение прямой с начальной точкой M0(x0, y0) и направляющим вектором a(a1, a2) может быть написано в виде:
 *				| x - x0  y - y0 |
 *				| a1          a2 | = 0	(8)
 *		Предложение 4. 
 *			Вектор с координатами (−B, A) можно принять за направляющий вектор прямой с уравнением (2) в общей декартовой системе координат, а точку с координатами (10) за начальную точку.
 *		Предложение 5. 
 *			Пусть x, y, z — компоненты вектора r в общей декартовой системе координат. 
 *			Тогда скалярное произведение (r − r0, n) при n ≠ 0 записывается линейным многочленом:
 *				Ax + By + Cz + D	(A2 + B2 + C2 ≠ 0)
 *			Обратно, если задана декартова система координат, то для любого линейного многочлена найдутся такие векторы r0 и n ≠ 0,
 *			что Ax+By+Cz+D = (r−r0, n), где r — вектор с координатами (x, y, z). 
 *		Предложение 6.
 *			Если система координат декартова прямоугольная, то вектор с компонентами A, B, C является нормальным вектором для плоскости с уравнением Ax + By + Cz + D = 0. 
 *			В произвольной системе координат A, B, C — ковариантные координаты нормального.
 *		Предложение 7.
 *			Вектор a с компонентами α1, α2, α3 в общей декартовой системе координат параллелен плоскости с уравнением Ax + By + Cz + D = 0 тогда и только тогда, когда выполнено условие вектора:
 *				Aα1 + Bα2 + Cα3 = 0.	(18)
 *		Предложение 8.
 *			Вектор a с компонентами α1, α2 в общей декартовой системе координат параллелен прямой с уравнением Ax + By + C = 0 тогда и только тогда, когда:
 *				Aα1 + Bα2 = 0	(19)
 *		Предложение 9.
 *			Прямые линии, задаваемые в общей декартовой системе координат уравнениями:
 *				Ax + By + C = 0, A1x + B1y + C1 = 0,
 *			параллельны тогда и только тогда, когда соответствующие коэффициенты в их уравнениях пропорциональны, т. е. существует такое число λ, что:
 *				A1 = λA, B1 = λB.	(20)
 *			Прямые совпадают в том и только том случае, когда их уравнения пропорциональны, т. е. помимо уравнения (20) выполнено (с тем же λ) равенство:
 *				C1 = λC	(21)
 *		Предложение 10.
 *			При условии
 *				| A    B |
 *				| A1  B1 | = 0	(22)
 *			система линейных уравнений
 *				Ax + By + C = 0, A1x + B1y + C1 = 0 
 *			не имеет решений или имеет бесконечно много решений (в зависимости от C и C1). В последнем случае система равносильна одному из составляющих ее уравнений. 
 *			Если же
 *				| A    B |
 *				| A1  B1 | ≠ 0
 *			то при любых C и C1 система имеет единственное решение (x, y).
 *		Предложение 11.
 *			 Плоскости, задаваемые в общей декартовой системе координат уравнениями
 *				Ax + By + Cz + D = 0, A1x + B1y + C1z + D1 = 0,
 *			параллельны тогда и только тогда, когда соответствующие коэффициенты в их уравнениях пропорциональны, т. е. существует такое число λ, что
 *				A1 = λA, B1 = λB, C1 = λC	(23)
 *			Плоскости совпадают в том и только том случае, когда их уравнения пропорциональны, т. е. помимо уравнений (23) выполнено (с тем же λ) равенство
 *				D1 = λD	(24)
 *		Предложение 12.
 *			Прямая линия в пространстве может быть задана как пересечение двух плоскостей и, следовательно, в общей декартовой системе координат определяется системой уравнений вида
 *				Ax + By + Cz + D = 0, A1x + B1y + C1z + D1 = 0	(26)
 *		Предложение 13.
 *			Вектор с компонентами (32) есть направляющий вектор прямой с уравнениями (26), какова бы ни была декартова система координат.
 *	Теоремы.
 *		Теорема 1.
 *			В общей декартовой системе координат в пространстве каждая плоскость может быть задана линейным уравнением:
 *				Ax + By + Cz + D = 0, A^2 + B^2 + C^2 ≠ 0	(1)
 *			Обратно, каждое линейное уравнение вида (1) в общей декартовой системе координат определяет плоскость.
 *		Теорема 2.
 *			В общей декартовой системе координат на плоскости каждая прямая может быть задана линейным уравнением:
 *				Ax + By + C = 0, A^2 + B^2 ≠ 0	(2)
 *			Обратно, каждое линейное уравнение вида (2) в общей декартовой системе координат на плоскости определяет прямую.
 *	Следствия.
 *		Следствие предложения 4.
 *			Если система координат декартова прямоугольная, то вектор n(A, B) перпендикулярен прямой с уравнением (1).
 *		Следствие предложения 7. 
 *			Любые два неколлинеарные вектора, удовлетворяющие уравнению (18), можно принять за направляющие векторы плоскости.
 *	Доказательства.
 *		Доказтаельство предложения 1, 2.
 *			(???) => Прямая линия (на плоскости или в пространстве) полностью определена, если на ней задана точка M0 и задан ненулевой вектор a, параллельный этой прямой. 
 *			Разумеется, и точку и вектор можно выбрать по-разному, но мы будем считать, что они как-то выбраны, и называть их начальной точкой и направляющим вектором. 
 *			Аналогично, плоскость задается точкой и двумя неколлинеарными векторами, ей параллельными, — начальной точкой и направляющими векторами плоскости.
 *			Мы будем предполагать, что задана декартова система координат в пространстве (или на плоскости, если мы изучаем прямую в планиметрии).
 *			Это, в частности, означает, что каждой точке сопоставлен ее радиус-вектор относительно начала координат.
 *			Пусть дана прямая. Обозначим через r0 и a соответственно радиус-вектор ее начальной точки M0 и направляющий вектор.
 *			Рассмотрим некоторую точку M с радиус-вектором r. Вектор M0M = r − r0, начало которого лежит на прямой, параллелен прямой тогда и только тогда, когда M также лежит на прямой.
 *			В этом и только этом случае для точки M найдется такое число t, что:
 *				r − r0 = ta	(3)
 *			Наоборот, какое бы число мы ни подставили в формулу (3) в качестве t, вектор r в этой формуле определит некоторую точку на прямой.
 *			Уравнение (3) называется векторным параметрическим уравнением прямой, а переменная величина t, принимающая любые вещественные значения, называется параметром.
 *			Векторное параметрическое уравнение выглядит одинаково и в планиметрии, и в стереометрии, но при разложении по базису оно сводится к двум или трем скалярным уравнениям, смотря по тому, сколько векторов составляют базис. 
 *			Рассмотрим прямую в пространстве. Пусть (x, y, z) и (x0, y0, z0) — координаты точек M и M0, соответственно, а вектор a имеет компоненты (a1, a2, a3). 
 *			Тогда, раскладывая по базису обе части уравнения (3), мы получим:
 *				x − x0 = a1t, y − y0 = a2t, z − z0 = a3t.	(4)
 *			Для прямой на плоскости мы получаем аналогично:
 *				x − x0 = a1t, y − y0 = a2t.	(5)
 *			Уравнения (4) или (5) называются параметрическими уравнениями прямой.
 *			Получим теперь параметрические уравнения плоскости.
 *			Обозначим через p и q ее направляющие векторы, а через r0 — радиус-вектор ее начальной точки M0. 
 *			Пусть точка M с радиус-вектором r — произвольная точка пространства.
 *			Вектор M0M = r − r0, начало которого лежит на плоскости, параллелен ей тогда и только тогда, когда его конец M также лежит на плоскости. 
 *			Так как p и q не коллинеарны, в этом и только этом случае r − r0 может быть по ним разложен. 
 *			Поэтому, если точка M лежит в плоскости (и только в этом случае), найдутся такие числа t1 и t2, что:
 *				r − r0 = t1p + t2q.	(6)
 *			Это уравнение называется векторным параметрическим уравнением плоскости. 
 *			Каждой точке плоскости оно сопоставляет значения двух параметров t1 и t2. Наоборот, какие бы числа мы ни подставили как значения t1 и t2, уравнение (6) определит некоторую точку плоскости.
 *			Пусть (x, y, z) и (x0, y0, z0) — координаты точек M и M0, соответственно, а векторы p и q имеют компоненты (p1, p2, p3) и (q1, q2, q3).
 *			Тогда, раскладывая по базису обе части уравнения (6), мы получим параметрические уравнения плоскости:
 *				x − x0 = t1p1 + t2q1, y − y0 = t1p2 + t2q2, z − z0 = t1p3 + t2q3.	(7)
 *			Предложение 1 и 2 доказаны.
 *		Докатальество предложения 3.
 *			Действительно, после преобразования оно принимает вид a2x − a1y + (a1y0 − a2x0) = 0, то есть Ax + By + C = 0, где A = a2, B = −a1 и C = a1y0 − a2x0.
 *			Предложение 3 доказано.
 *		Докатальество предложения 4.
 *			При заданной системе координат для произвольного линейного многочлена Ax + By + C, A^2 + B^2 ≠ 0, найдутся такая точка M0(x0, y0) и такой вектор a(a1, a2), что:
 *				              | x - x0  y - y0 |
 *				Ax + By + C = | a1          a2 |	(9)
 *			Действительно, выберем числа x0 и y0 так, чтобы Ax0 + By0 + C = 0. В качестве таких чисел можно взять, например,
 *				x0 = −AC/(A^2 + B^2), y0 = −BC/(A^2 + B^2)	(10)
 *			Если C = −Ax0 − By0, то Ax+By+C = A(x − x0) + B(y − y0), то есть выполнено равенство (9) при a2 = A, a1 = −B.
 *			Предложение 4 доказано.
 *		Доказательство предложения 5.
 *			Первая часть предложения очевидна: подставим разложение вектора r по базису в данное скалярное произведение (xe1 + ye2 + ze3 − r0, n),
 *			раскроем скобки и получим многочлен Ax + By + Cz + D, в котором:
 *				D = −(r0, n), и A = (e1, n), B = (e2, n), C = (e3, n)	(16)
 *			A, B, и C одновременно не равны нулю, так как ненулевой вектор n не может быть ортогонален всем векторам базиса.
 *			Для доказательства обратного утверждения найдем сначала вектор n из равенств (16), считая A, B, и C заданными.
 *			Положим:
 *				n = A[e2, e3]/(e1, e2, e3) + B[e3, e1]/(e1, e2, e3) + C[e1, e2]/(e1, e2, e3)	(17)
 *			Умножая этот вектор скалярно на e1, e2 и e3, мы убедимся, что он удовлетворяет равенствам (16). 
 *			(Можно отметить, что (17) следует из формул (8) § 4 гл. I и (9) § 5 гл. I.)
 *			Вектор r0 должен удовлетворять условию D = −(r0, n). Один из таких векторов можно найти в виде r0 = λn. 
 *			Подставляя, видим, что D = −λ(n, n), откуда r0 = −Dn/|n|
 *			Итак, мы нашли векторы n и r0 такие, что линейный многочлен записывается в виде x(e1, n) + y(e2, n) + z(e3, n) − (r0, n), который совпадает с требуемым (r − r0, n).
 *			Предложение 5 доказано.
 *		Доказательство предложения 6.
 *			Первое утверждение сразу вытекает из формул (16) и выражения координат вектора в ортонормированном базисе через скалярные произведения (1) § 4 гл. I, а второе — из определения ковариантных координат ((7) § 4 гл. I).
 *			Предложение доказано.
 *		Доказательство предложения 7.
 *			Пусть вектор a с координатами α1, α2, α3 в общей декартовой системе координат O, e1, e2, e3 параллелен плоскости с уравнением Ax + By + Cz + D = 0. 
 *			Рассмотрим равный ему вектор MN, концы которого M(x1, y1, z1) и N(x2, y2 z2) лежат в плоскости. 
 *			Это значит, что Ax1 + By1 + Cz1 + D = 0 и Ax2 + By2 + Cz2 + D = 0. Вычитая первое равенство из второго, мы получаем:
 *				A(x2 − x1) + B(y2 − y1) + C(z2 − z1) = 0
 *			Поэтому координаты вектора a удовлетворяют равенству (18).
 *			Обратно, если условие (18) выполнено для координат некоторого вектора и его начало M(x1, y1, z1) лежит в плоскости, 
 *			то складывая равенства Ax1 + By1 + Cz1 + D = 0 и (18), мы видим, что конец вектора также лежит в плоскости: 
 *				A(x1 + α1) + B(y1 + α2) + C(z1 + α3) + D = 0. 
 *			Предложение 7 доказано.
 *		Доказательство предложения 8.
 *			Действительно, α1, α2 должны быть пропорциональны компонентам (−B, A) направляющего вектора прямой.
 *			Предложение 8 доказано.
 *		Доказательство предложения 9.
 *			Первая часть предложения прямо следует из того, что векторы с компонентами (−B, A) и (−B1, A1) — направляющие векторы прямых.
 *			Докажем вторую часть. В равенствах (20) и (21) λ ≠ 0, так как коэффициенты в уравнении прямой одновременно нулю не равны. 
 *			Поэтому, если эти равенства выполнены, уравнения эквивалентны и определяют одну и ту же прямую. Обратно, пусть прямые параллельны. 
 *			В силу первой части предложения их уравнения должны иметь вид Ax + By + C = 0 и λ(Ax + By) + C1 = 0 при некотором λ. 
 *			Если, кроме того, существует общая точка M0(x0, y0) обеих прямых, то Ax0 + By0 + C = 0 и λ(Ax0 + By0) + C1 = 0. 
 *			Вычитая из второго равенства первое равенство, умноженное на λ, мы получаем C1 = λC, как и требовалось.
 *			Предложение 9 доказано.
 *		Доказательство предложения 10.
 *			Это предложение дополняет предложение 8 § 5 гл. I, в котором рассмотрены системы с детерминантом, отличным от нуля. 
 *			Конечно, такие системы определяют пересечение непараллельных прямых и потому имеют единственное решение при любых свободных членах.
 *			Предложение 8 можно доказать и непосредственно и отсюда получить условие параллельности прямых. Исследованием произвольных систем линейных уравнений мы займемся в гл. V
 *			(???) Предложение 10 доказано.
 *		Доказательство предложения 11.
 *			Параллельность двух плоскостей означает, что их нормальные векторы n и n1 коллинеарны, и существует такое число λ, что n1 = λn. 
 *			В силу уравнений (16) A1 = (e1, n1) = λ(e1, n) = λA. Аналогично доказываются и остальные равенства (23). 
 *			Обратно, если равенства (23) выполнены, то из формулы (17) следует, что n1 = λn.
 *			Это доказывает первую часть предложения. Вторая его часть доказывается так же, как вторая часть предложения 7.
 *			Мы знаем, что коэффициенты A, B, C и A1, B1, C1 — это координаты векторов n и n1 в базисе #e1, #e2, #e3, биортогональном базису выбранной системы координат (формула (17)).
 *			Поэтому из условия коллинеарности векторов в произвольном базисе (предложение 6 § 5 гл. I) следует такое необходимое и достаточное условие параллельности плоскостей в общей декартовой системе координат:
 *				| B    C |   | C    A |   | A    B |
 *				| B1  C1 | = | C1  A1 | = | A1  B1 | = 0	(25)
 *			Другими словами, плоскости не параллельны тогда и только тогда, когда хоть один из детерминантов в формуле (25) не равен нулю.
 *			Предложение 11 доказано.
 *		Доказательство предложения 12.
 *			Пересечение плоскостей — прямая линия тогда и только тогда, когда они не параллельны, то есть хоть один из детерминантов отличен от нуля:
 *				| B    C |   | C    A |   | A    B |
 *				| B1  C1 | = | C1  A1 | = | A1  B1 | ≠ 0	(27)
 *			Разумеется, систему (26) можно заменить на любую, ей эквивалентную. 
 *			При этом прямая будет представлена как пересечение двух других проходящих через нее плоскостей.
 *			Вспомним параметрические уравнения прямой (4). Допустим, что в них ни одна из компонент направляющего вектора не равна нулю. 
 *			Тогда
 *				t = (x − x0)/a1, t = (y − y0)/a2, t = (z − z0)/a3
 *			и мы получаем два равенства
 *				(y − y0)/a2 = (z − z0)/a3, (x − x0)/a1 = (z − z0)/a3	(28)
 *			или, в более симметричном виде,
 *				(x − x0)/a1 = (y − y0)/a2 = (z − z0)/a3	(29)
 *			Уравнения (28) представляют прямую как линию пересечения двух плоскостей, первая из которых параллельна оси абсцисс (в ее уравнение не входит переменная x), а вторая параллельна оси ординат.
 *			Если обращается в нуль одна из компонент направляющего вектора, например a1, то уравнения прямой принимают вид
 *				x = x0, (y − y0)/a2 = (z − z0)/a3	(30)
 *			Эта прямая лежит в плоскости x = x0 и, следовательно, параллельна плоскости x = 0. 
 *			Аналогично пишутся уравнения прямой, если в нуль обращается не a1, а другая компонента.
 *			Когда равны нулю две компоненты направляющего вектора, например a1 и a2, то прямая имеет уравнения
 *				x = x0, y = y0	(31)
 *			Такая прямая параллельна одной из осей координат, в нашем случае — оси аппликат.
 *			Важно уметь находить начальную точку и направляющий вектор прямой, заданной системой линейных уравнений (26).
 *			По условию (27) один из детерминантов отличен от нуля. Допустим для определенности, что AB1 − A1B ≠ 0. 
 *			В силу предложения 8 при любом фиксированном z система уравнений будет иметь единственное решение (x, y), в котором x и y, разумеется, зависят от z. 
 *			Они — линейные многочлены от z:
 *				x = α1z + β1, y = α2z + β2. 
 *			Не будем доказывать этого, хотя это и не трудно сделать. 
 *			Для ясности заменяя z на t, получаем параметрические уравнения прямой
 *				x = α1t + β1, y = α2t + β2, z = t.
 *			Первые две координаты начальной точки прямой M0(β1, β2, 0) можно получить, решая систему (26) при значении z = 0.
 *			Из параметрических уравнений видно, что в этом случае направляющий вектор имеет координаты (α1, α2, 1). Найдем его компоненты в общем виде. 
 *			Если система координат декартова прямоугольная, векторы с компонентами (A, B, C) и (A1, B1, C1) перпендикулярны соответствующим плоскостям, а потому их векторное произведение параллельно прямой (26), по которой плоскости пересекаются. 
 *			Вычисляя векторное произведение в ортонормированном базисе, мы получаем компоненты направляющего вектора:
 *				| B    C |  | C    A |  | A    B |
 *				| B1  C1 |, | C1  A1 |, | A1  B1 |	(32)
 *			Предложение 12 доказано.
 *		Доказательство предложения 13.
 *			Согласно предложению 5 каждый ненулевой вектор, компоненты которого (α1, α2, α3) удовлетворяют уравнению Aα1 + Bα2 + Cα3 = 0, параллелен плоскости с уравнением Ax + By + Cz + D = 0. 
 *			Если, кроме того, он удовлетворяет уравнению A1α1 + B1α2 + C1α3 = 0, то он параллелен и второй плоскости, то есть может быть принят за направляющий вектор прямой. 
 *			Вектор с компонентами (32) — ненулевой в силу неравенства (27). Непосредственно легко проверить, что его компоненты удовлетворяют обоим написанным выше условиям. 
 *			Так, левая часть первого из них после подстановки принимает вид
 *				 | B    C |    | C    A |    | A    B |
 *				A| B1  C1 | + B| C1  A1 | + C| A1  B1 |,
 *			что равно детерминанту третьего порядка, имеющему две одинаковые строки.
 *			Предложение 13 доказано.
 *		Доказтаельство теормы 1, 2.
 *			Уравнение (3) можно записать в виде:
 *				[r − r0, a] = 0	(12)
 *			Аналогично, уравнение (4) можно записать в виде:
 *				(r − r0, p, q) = 0	(13)
 *			Вектор n = [p, q] — ненулевой вектор, перпендикулярный плоскости. 
 *			Используя его, мы можем записать уравнение (13) в виде:
 *				(r − r0, n) = 0	(14)
 *			Уравнения (13) и (14) называют векторными уравнениями плоскости. 
 *			Им можно придать форму, в которую не входит радиус-вектор начальной точки. 
 *			Например, положив в (14) D = −(r0, n), получим:
 *					(r, n) + D = 0. (15)
 *			Для прямой на плоскости можно также написать векторные уравнения, аналогичные (14) и (15):
 *				(r − r0, n) = 0 или (r, n) + C = 0
 *			При приведении уравнений (12) и (14) к линейному виду мы получим уравнение вида (2) и (3).
 *			Теоремы 1 и 2 доказаны.
 */