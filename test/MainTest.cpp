#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "../extlibs/doctest/doctest/doctest.h"

#include "../include/MorphineMath/MorphineMath.hpp"

#include <algorithm>
#include <stdlib.h>
#include <time.h>

float randomFloat()
{
    return (float)(rand()) / (float)(RAND_MAX);
}

int randomInt(int a, int b)
{
    if (a > b)
        return randomInt(b, a);
    if (a == b)
        return a;
    return a + (rand() % (b - a));
}

float randomFloat(int a, int b)
{
    if (a > b)
        return randomFloat(b, a);
    if (a == b)
        return a;

    return (float)randomInt(a, b) + randomFloat();
}

MorphineMath::VECTOR randomVector(int a, int b)
{
    MorphineMath::VECTORF32 vResult = { { {
        randomFloat(a, b),
        randomFloat(a, b),
        randomFloat(a, b),
        randomFloat(a, b)
    } } };
    return vResult.v;
}

MorphineMath::VECTOR randomVectorInt(int a, int b)
{
    MorphineMath::VECTORU32 vResult = { { {
        randomInt(a, b),
        randomInt(a, b),
        randomInt(a, b),
        randomInt(a, b)
    } } };
    return vResult.v;
}

#define CHECK_VECTOR_EQUAL_VECTOR(V1, V2)\
{\
    CHECK(V1.vector4_f32[0] == V2.vector4_f32[0]);\
    CHECK(V1.vector4_f32[1] == V2.vector4_f32[1]);\
    CHECK(V1.vector4_f32[2] == V2.vector4_f32[2]);\
    CHECK(V1.vector4_f32[3] == V2.vector4_f32[3]);\
}

#define CHECK_VECTOR_EQUAL_VECTOR_INT(V1, V2)\
{\
    CHECK(V1.vector4_u32[0] == V2.vector4_u32[0]);\
    CHECK(V1.vector4_u32[1] == V2.vector4_u32[1]);\
    CHECK(V1.vector4_u32[2] == V2.vector4_u32[2]);\
    CHECK(V1.vector4_u32[3] == V2.vector4_u32[3]);\
}

#define CHECK_VECTOR_EQUAL_SCALAR(V, s)\
{\
    CHECK(V.vector4_f32[0] == s);\
    CHECK(V.vector4_f32[1] == s);\
    CHECK(V.vector4_f32[2] == s);\
    CHECK(V.vector4_f32[3] == s);\
}

#define CHECK_VECTOR_EQUAL_SCALAR_INT(V, s)\
{\
    CHECK(V.vector4_u32[0] == s);\
    CHECK(V.vector4_u32[1] == s);\
    CHECK(V.vector4_u32[2] == s);\
    CHECK(V.vector4_u32[3] == s);\
}


TEST_CASE("MorphineMath::Scalar")
{
    constexpr int min = -10000;
    constexpr int max = 10000;
    constexpr size_t count = 5;

    srand(time(NULL));

    SUBCASE("MorphineMath::ScalarRound")
    {
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::F32 s = randomFloat(min, max);
            CHECK(MorphineMath::ScalarRound(s) == std::roundf(s));
        }
    }
    SUBCASE("MorphineMath::ScalarFloor")
    {
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::F32 s = randomFloat(min, max);
            CHECK(MorphineMath::ScalarFloor(s) == std::floorf(s));
        }
    }
    SUBCASE("MorphineMath::ScalarCeil")
    {
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::F32 s = randomFloat(min, max);
            CHECK(MorphineMath::ScalarCeil(s) == std::ceilf(s));
        }
    }
    SUBCASE("MorphineMath::ScalarTrunc")
    {
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::F32 s = randomFloat(min, max);
            CHECK(MorphineMath::ScalarTrunc(s) == std::truncf(s));
        }
    }
    SUBCASE("MorphineMath::ScalarClamp")
    {
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::F32 minS = randomFloat(min, max);
            const MorphineMath::F32 maxS = randomFloat(minS, max);
            const MorphineMath::F32 s = randomFloat(min, max);
            CHECK(MorphineMath::ScalarClamp(s, minS, maxS) == std::clamp(s, minS, maxS));
        }
    }
}
TEST_CASE("MorphineMath::Vector")
{
    constexpr int min = -10000;
    constexpr int max = 10000;
    constexpr size_t count = 5;

    srand(time(NULL));

    SUBCASE("MorphineMath::VectorZero")
    {
        const MorphineMath::VECTOR vZero = MorphineMath::VectorZero();
        CHECK(vZero.vector4_f32[0] == 0.0f);
        CHECK(vZero.vector4_f32[1] == 0.0f);
        CHECK(vZero.vector4_f32[2] == 0.0f);
        CHECK(vZero.vector4_f32[3] == 0.0f);
    }
    SUBCASE("MorphineMath::VectorSet")
    {
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::F32 x = randomFloat(min, max);
            const MorphineMath::F32 y = randomFloat(min, max);
            const MorphineMath::F32 z = randomFloat(min, max);
            const MorphineMath::F32 w = randomFloat(min, max);
            const MorphineMath::VECTOR vRandom = MorphineMath::VectorSet(x, y, z, w);
            CHECK(vRandom.vector4_f32[0] == x);
            CHECK(vRandom.vector4_f32[1] == y);
            CHECK(vRandom.vector4_f32[2] == z);
            CHECK(vRandom.vector4_f32[3] == w);
        }
    }
    SUBCASE("MorphineMath::VectorSetInt")
    {
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::U32 x = randomInt(0, max);
            const MorphineMath::U32 y = randomFloat(0, max);
            const MorphineMath::U32 z = randomFloat(0, max);
            const MorphineMath::U32 w = randomFloat(0, max);
            const MorphineMath::VECTOR vRandom = MorphineMath::VectorSetInt(x, y, z, w);
            CHECK(vRandom.vector4_u32[0] == x);
            CHECK(vRandom.vector4_u32[1] == y);
            CHECK(vRandom.vector4_u32[2] == z);
            CHECK(vRandom.vector4_u32[3] == w);
        }
    }
    SUBCASE("MorphineMath::VectorFill")
    {
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::F32 random = randomFloat(min, max);
            CHECK_VECTOR_EQUAL_SCALAR(MorphineMath::VectorFill(random), random);
        }
    }
    SUBCASE("MorphineMath::VectorFillInt")
    {
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::U32 random = randomInt(0, max);
            CHECK_VECTOR_EQUAL_SCALAR_INT(MorphineMath::VectorFillInt(random), random);
        }
    }
    SUBCASE("MorphineMath::VectorTrueInt")
    {
        MorphineMath::VECTOR v = MorphineMath::VectorTrueInt();
        CHECK_VECTOR_EQUAL_SCALAR_INT(v, 0xFFFFFFFFU);
    }
    SUBCASE("MorphineMath::VectorFalseInt")
    {
        MorphineMath::VECTOR v = MorphineMath::VectorFalseInt();
        CHECK_VECTOR_EQUAL_SCALAR_INT(v, 0x00000000U);
    }
    SUBCASE("MorphineMath::VectorSplat")
    {
        CHECK_VECTOR_EQUAL_SCALAR(MorphineMath::VectorSplatOne(), 1.0f);
        CHECK_VECTOR_EQUAL_SCALAR(MorphineMath::VectorSplatInfinity(), 0x7F800000);
        CHECK_VECTOR_EQUAL_SCALAR(MorphineMath::VectorSplatQNaN(), 0x7FC00000);
        CHECK_VECTOR_EQUAL_SCALAR(MorphineMath::VectorSplatEpsilon(), 0x34000000);
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::VECTOR vRandom = randomVector(min, max);
            CHECK_VECTOR_EQUAL_SCALAR(MorphineMath::VectorSplatX(vRandom), vRandom.vector4_f32[0]);
            CHECK_VECTOR_EQUAL_SCALAR(MorphineMath::VectorSplatY(vRandom), vRandom.vector4_f32[1]);
            CHECK_VECTOR_EQUAL_SCALAR(MorphineMath::VectorSplatZ(vRandom), vRandom.vector4_f32[2]);
            CHECK_VECTOR_EQUAL_SCALAR(MorphineMath::VectorSplatW(vRandom), vRandom.vector4_f32[3]);
        }
    }
    SUBCASE("MorphineMath::VectorGet[X/Y/Z/W/ByIndex]")
    {
        const MorphineMath::VECTOR vRandom = randomVector(min, max);
        MorphineMath::VECTORF32 vCopy = { { {
               MorphineMath::VectorGetX(vRandom),
               MorphineMath::VectorGetY(vRandom),
               MorphineMath::VectorGetZ(vRandom),
               MorphineMath::VectorGetW(vRandom)
        } } };
        CHECK_VECTOR_EQUAL_VECTOR(vRandom, vCopy.v);
    }
    SUBCASE("MorphineMath::VectorGetInt[X/Y/Z/W/ByIndex]")
    {
        const MorphineMath::VECTOR vRandom = randomVectorInt(0, max);
        MorphineMath::VECTORU32 vCopy = { { {
               MorphineMath::VectorGetIntX(vRandom),
               MorphineMath::VectorGetIntY(vRandom),
               MorphineMath::VectorGetIntZ(vRandom),
               MorphineMath::VectorGetIntW(vRandom)
        } } };
        CHECK_VECTOR_EQUAL_VECTOR(vRandom, vCopy.v);
    }
    SUBCASE("MorphineMath::VectorSet[X/Y/Z/W/ByIndex]")
    {
        const MorphineMath::VECTOR vRandom = randomVector(min, max);
        MorphineMath::VECTOR vCopy;
        vCopy = MorphineMath::VectorSetX(vRandom, MorphineMath::VectorGetX(vRandom));
        vCopy = MorphineMath::VectorSetY(vRandom, MorphineMath::VectorGetY(vRandom));
        vCopy = MorphineMath::VectorSetZ(vRandom, MorphineMath::VectorGetZ(vRandom));
        vCopy = MorphineMath::VectorSetW(vRandom, MorphineMath::VectorGetW(vRandom));
        CHECK_VECTOR_EQUAL_VECTOR(vRandom, vCopy);
    }
    SUBCASE("MorphineMath::VectorSetInt[X/Y/Z/W/ByIndex]")
    {
        const MorphineMath::VECTOR vRandom = randomVectorInt(0, max);
        MorphineMath::VECTOR vCopy;
        vCopy = MorphineMath::VectorSetIntX(vRandom, MorphineMath::VectorGetIntX(vRandom));
        vCopy = MorphineMath::VectorSetIntY(vRandom, MorphineMath::VectorGetIntY(vRandom));
        vCopy = MorphineMath::VectorSetIntZ(vRandom, MorphineMath::VectorGetIntZ(vRandom));
        vCopy = MorphineMath::VectorSetIntW(vRandom, MorphineMath::VectorGetIntW(vRandom));
        CHECK_VECTOR_EQUAL_VECTOR(vRandom, vCopy);
    }
    SUBCASE("MorphineMath::VectorEqual")
    {
        const MorphineMath::VECTOR vRandom = randomVector(min, max);
        const MorphineMath::VECTOR vRandomInt = randomVectorInt(0, max);
        const MorphineMath::VECTOR vCopy = vRandom;
        const MorphineMath::VECTOR vCopyInt = vRandomInt;
        CHECK_VECTOR_EQUAL_VECTOR_INT(MorphineMath::VectorEqual(vCopy, vRandom), MorphineMath::VectorTrueInt());
        CHECK_VECTOR_EQUAL_VECTOR_INT(MorphineMath::VectorEqualInt(vCopyInt, vRandomInt), MorphineMath::VectorTrueInt());
        CHECK_VECTOR_EQUAL_VECTOR_INT(MorphineMath::VectorNotEqual(vCopy, vRandom), MorphineMath::VectorFalseInt());
        CHECK_VECTOR_EQUAL_VECTOR_INT(MorphineMath::VectorNotEqualInt(vCopyInt, vRandomInt), MorphineMath::VectorFalseInt());
    }
    SUBCASE("MorphineMath::Vector[Greater/Less/InBounds]")
    {
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::F32 bounds = randomFloat(min, max);
            const MorphineMath::F32 absbounds = bounds > 0 ? bounds : -bounds;
            const MorphineMath::VECTOR vRandom = randomVector(min, max);
            const MorphineMath::VECTOR vLess = MorphineMath::VectorSet(
                vRandom.vector4_f32[0] - absbounds,
                vRandom.vector4_f32[1] - absbounds,
                vRandom.vector4_f32[2] - absbounds,
                vRandom.vector4_f32[3] - absbounds);
            const MorphineMath::VECTOR vGreater = MorphineMath::VectorSet(
                vRandom.vector4_f32[0] + absbounds,
                vRandom.vector4_f32[1] + absbounds,
                vRandom.vector4_f32[2] + absbounds,
                vRandom.vector4_f32[3] + absbounds);
            const MorphineMath::VECTOR vBounds = MorphineMath::VectorSet(
                vRandom.vector4_f32[0] + (vRandom.vector4_f32[0] > 0 ? absbounds : -absbounds),
                vRandom.vector4_f32[1] + (vRandom.vector4_f32[1] > 0 ? absbounds : -absbounds),
                vRandom.vector4_f32[2] + (vRandom.vector4_f32[2] > 0 ? absbounds : -absbounds),
                vRandom.vector4_f32[3] + (vRandom.vector4_f32[3] > 0 ? absbounds : -absbounds));
            CHECK_VECTOR_EQUAL_VECTOR_INT(MorphineMath::VectorGreater(vGreater, vRandom), MorphineMath::VectorTrueInt());
            CHECK_VECTOR_EQUAL_VECTOR_INT(MorphineMath::VectorGreaterOrEqual(vRandom, vRandom), MorphineMath::VectorTrueInt());
            CHECK_VECTOR_EQUAL_VECTOR_INT(MorphineMath::VectorLess(vLess, vRandom), MorphineMath::VectorTrueInt());
            CHECK_VECTOR_EQUAL_VECTOR_INT(MorphineMath::VectorLessOrEqual(vRandom, vRandom), MorphineMath::VectorTrueInt());
            CHECK_VECTOR_EQUAL_VECTOR_INT(MorphineMath::VectorInBounds(vRandom, vBounds), MorphineMath::VectorTrueInt());
        }
    }
    SUBCASE("MorphineMath::VectorIs[NaN/Infinite]")
    {
        CHECK_VECTOR_EQUAL_VECTOR_INT(MorphineMath::VectorIsNaN(MorphineMath::VectorSplatQNaN()), MorphineMath::VectorTrueInt());
        CHECK_VECTOR_EQUAL_VECTOR_INT(MorphineMath::VectorIsInfinite(MorphineMath::VectorSplatInfinity()), MorphineMath::VectorTrueInt());
    }
    SUBCASE("MorphineMath::VectorBitOperations")
    {
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::VECTOR vRandom1 = randomVector(min, max);
            const MorphineMath::VECTOR vRandom2 = randomVector(min, max);
            CHECK_VECTOR_EQUAL_VECTOR(MorphineMath::VectorAndInt(vRandom1, vRandom2), MorphineMath::VectorSetInt(
                vRandom1.vector4_u32[0] & vRandom2.vector4_u32[0],
                vRandom1.vector4_u32[1] & vRandom2.vector4_u32[1],
                vRandom1.vector4_u32[2] & vRandom2.vector4_u32[2],
                vRandom1.vector4_u32[3] & vRandom2.vector4_u32[3]
            ));
            CHECK_VECTOR_EQUAL_VECTOR(MorphineMath::VectorOrInt(vRandom1, vRandom2), MorphineMath::VectorSetInt(
                vRandom1.vector4_u32[0] | vRandom2.vector4_u32[0],
                vRandom1.vector4_u32[1] | vRandom2.vector4_u32[1],
                vRandom1.vector4_u32[2] | vRandom2.vector4_u32[2],
                vRandom1.vector4_u32[3] | vRandom2.vector4_u32[3]
            ));
            CHECK_VECTOR_EQUAL_VECTOR(MorphineMath::VectorNorInt(vRandom1, vRandom2), MorphineMath::VectorSetInt(
                ~(vRandom1.vector4_u32[0] | vRandom2.vector4_u32[0]),
                ~(vRandom1.vector4_u32[1] | vRandom2.vector4_u32[1]),
                ~(vRandom1.vector4_u32[2] | vRandom2.vector4_u32[2]),
                ~(vRandom1.vector4_u32[3] | vRandom2.vector4_u32[3])
            ));
            CHECK_VECTOR_EQUAL_VECTOR(MorphineMath::VectorXorInt(vRandom1, vRandom2), MorphineMath::VectorSetInt(
                vRandom1.vector4_u32[0] ^ vRandom2.vector4_u32[0],
                vRandom1.vector4_u32[1] ^ vRandom2.vector4_u32[1],
                vRandom1.vector4_u32[2] ^ vRandom2.vector4_u32[2],
                vRandom1.vector4_u32[3] ^ vRandom2.vector4_u32[3]
            ));
        }
    }
    SUBCASE("MorphineMath::VectorOrthoNormDot")
    {
        //Vector1
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::VECTOR vRandom1 = randomVector(min, max);
            const MorphineMath::VECTOR vRandom2 = randomVector(min, max);
            MorphineMath::VECTOR vDot;
            vDot.vector4_f32[0]
                = vDot.vector4_f32[1]
                = vDot.vector4_f32[2]
                = vDot.vector4_f32[3]
                = VectorGetX(vRandom1) * VectorGetX(vRandom2);
            CHECK_VECTOR_EQUAL_VECTOR(vDot, MorphineMath::Vector1OrthoNormDot(vRandom1, vRandom2));
        }
        //Vector2
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::VECTOR vRandom1 = randomVector(min, max);
            const MorphineMath::VECTOR vRandom2 = randomVector(min, max);
            MorphineMath::VECTOR vDot;
            vDot.vector4_f32[0]
                = vDot.vector4_f32[1]
                = vDot.vector4_f32[2]
                = vDot.vector4_f32[3]
                = VectorGetX(vRandom1) * VectorGetX(vRandom2)
                + VectorGetY(vRandom1) * VectorGetY(vRandom2);
            CHECK_VECTOR_EQUAL_VECTOR(vDot, MorphineMath::Vector2OrthoNormDot(vRandom1, vRandom2));
        }
        //Vector3
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::VECTOR vRandom1 = randomVector(min, max);
            const MorphineMath::VECTOR vRandom2 = randomVector(min, max);
            MorphineMath::VECTOR vDot;
            vDot.vector4_f32[0]
                = vDot.vector4_f32[1]
                = vDot.vector4_f32[2]
                = vDot.vector4_f32[3]
                = VectorGetX(vRandom1) * VectorGetX(vRandom2)
                + VectorGetY(vRandom1) * VectorGetY(vRandom2)
                + VectorGetZ(vRandom1) * VectorGetZ(vRandom2);
            CHECK_VECTOR_EQUAL_VECTOR(vDot, MorphineMath::Vector3OrthoNormDot(vRandom1, vRandom2));
        }
        //Vector4
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::VECTOR vRandom1 = randomVector(min, max);
            const MorphineMath::VECTOR vRandom2 = randomVector(min, max);
            
            {
                MorphineMath::VECTOR vDot;
                vDot.vector4_f32[0]
                    = vDot.vector4_f32[1]
                    = vDot.vector4_f32[2]
                    = vDot.vector4_f32[3]
                    = VectorGetX(vRandom1) * VectorGetX(vRandom2)
                    + VectorGetY(vRandom1) * VectorGetY(vRandom2)
                    + VectorGetZ(vRandom1) * VectorGetZ(vRandom2)
                    + VectorGetW(vRandom1) * VectorGetW(vRandom2);
                CHECK_VECTOR_EQUAL_VECTOR(vDot, MorphineMath::Vector4OrthoNormDot(vRandom1, vRandom2));
            }
        }
    }
    SUBCASE("MorphineMath::VectorCovector")
    {
        //Vector1
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::VECTOR vRandom = randomVector(min, max);
            const MorphineMath::VECTOR e1Random = randomVector(min, max);
            MorphineMath::VECTOR covector;
            {
                covector.vector4_f32[0] = MorphineMath::Vector1OrthoNormDot(vRandom, e1Random).vector4_f32[0];
                covector.vector4_f32[1] = 1.0f;
                covector.vector4_f32[2] = 1.0f;
                covector.vector4_f32[3] = 1.0f;
            }
            CHECK_VECTOR_EQUAL_VECTOR(covector, MorphineMath::Vector1Covector(vRandom, e1Random));
        }
        //Vector2
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::VECTOR vRandom = randomVector(min, max);
            const MorphineMath::VECTOR e1Random = randomVector(min, max);
            const MorphineMath::VECTOR e2Random = randomVector(min, max);
            MorphineMath::VECTOR covector;
            {
                covector.vector4_f32[0] = MorphineMath::Vector2OrthoNormDot(vRandom, e1Random).vector4_f32[0];
                covector.vector4_f32[1] = MorphineMath::Vector2OrthoNormDot(vRandom, e2Random).vector4_f32[0];
                covector.vector4_f32[2] = 1.0f;
                covector.vector4_f32[3] = 1.0f;
            }
            CHECK_VECTOR_EQUAL_VECTOR(covector, MorphineMath::Vector2Covector(vRandom, e1Random, e2Random));
        }
        //Vector3
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::VECTOR vRandom = randomVector(min, max);
            const MorphineMath::VECTOR e1Random = randomVector(min, max);
            const MorphineMath::VECTOR e2Random = randomVector(min, max);
            const MorphineMath::VECTOR e3Random = randomVector(min, max);
            MorphineMath::VECTOR covector;
            {
                covector.vector4_f32[0] = MorphineMath::Vector3OrthoNormDot(vRandom, e1Random).vector4_f32[0];
                covector.vector4_f32[1] = MorphineMath::Vector3OrthoNormDot(vRandom, e2Random).vector4_f32[0];
                covector.vector4_f32[2] = MorphineMath::Vector3OrthoNormDot(vRandom, e3Random).vector4_f32[0];
                covector.vector4_f32[3] = 1.0f;
            }
            CHECK_VECTOR_EQUAL_VECTOR(covector, MorphineMath::Vector3Covector(vRandom, e1Random, e2Random, e3Random));
        }
        //Vector4
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::VECTOR vRandom = randomVector(min, max);
            const MorphineMath::VECTOR e1Random = randomVector(min, max);
            const MorphineMath::VECTOR e2Random = randomVector(min, max);
            const MorphineMath::VECTOR e3Random = randomVector(min, max);
            const MorphineMath::VECTOR e4Random = randomVector(min, max);
            MorphineMath::VECTOR covector;
            {
                covector.vector4_f32[0] = MorphineMath::Vector4OrthoNormDot(vRandom, e1Random).vector4_f32[0];
                covector.vector4_f32[1] = MorphineMath::Vector4OrthoNormDot(vRandom, e2Random).vector4_f32[0];
                covector.vector4_f32[2] = MorphineMath::Vector4OrthoNormDot(vRandom, e3Random).vector4_f32[0];
                covector.vector4_f32[3] = MorphineMath::Vector4OrthoNormDot(vRandom, e4Random).vector4_f32[0];
            }
            CHECK_VECTOR_EQUAL_VECTOR(covector, MorphineMath::Vector4Covector(vRandom, e1Random, e2Random, e3Random, e4Random));
        }
    }
    SUBCASE("MorphineMath::VectorOrthoNormLength")
    {
        //Vector1
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::VECTOR vRandom = randomVector(min, max);
            MorphineMath::VECTOR vOrthoNormLength = MorphineMath::VectorSqrt(MorphineMath::Vector1OrthoNormDot(vRandom, vRandom));
            CHECK_VECTOR_EQUAL_VECTOR(vOrthoNormLength, MorphineMath::Vector1OrthoNormLength(vRandom));
        }
        //Vector2
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::VECTOR vRandom = randomVector(min, max);
            MorphineMath::VECTOR vOrthoNormLength = MorphineMath::VectorSqrt(MorphineMath::Vector2OrthoNormDot(vRandom, vRandom));
            CHECK_VECTOR_EQUAL_VECTOR(vOrthoNormLength, MorphineMath::Vector2OrthoNormLength(vRandom));
        }
        //Vector3
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::VECTOR vRandom = randomVector(min, max);
            MorphineMath::VECTOR vOrthoNormLength = MorphineMath::VectorSqrt(MorphineMath::Vector3OrthoNormDot(vRandom, vRandom));
            CHECK_VECTOR_EQUAL_VECTOR(vOrthoNormLength, MorphineMath::Vector3OrthoNormLength(vRandom));
        }
        //Vector4
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::VECTOR vRandom = randomVector(min, max);
            MorphineMath::VECTOR vOrthoNormLength = MorphineMath::VectorSqrt(MorphineMath::Vector4OrthoNormDot(vRandom, vRandom));
            CHECK_VECTOR_EQUAL_VECTOR(vOrthoNormLength, MorphineMath::Vector4OrthoNormLength(vRandom));
        }
    }
    SUBCASE("MorphineMath::VectorOrthoNormNormalize")
    {
        //Vector1
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::VECTOR vRandom = randomVector(min, max);
            MorphineMath::VECTOR vOrthoNormNormalize;
            {
                MorphineMath::VECTOR vLength = MorphineMath::Vector1OrthoNormLengthSq(vRandom);
                MorphineMath::F32 fLength = vLength.vector4_f32[0];
                MorphineMath::F32 fInvLength;
                {
                    if (fLength > 0)
                    {
                        fInvLength = 1.0f / fLength;
                    }
                    else
                    {
                        fInvLength = MorphineMath::CMAXF32;
                    }
                }

                vOrthoNormNormalize.vector4_f32[0] = vRandom.vector4_f32[0] * fInvLength;
                vOrthoNormNormalize.vector4_f32[1] = vRandom.vector4_f32[1];
                vOrthoNormNormalize.vector4_f32[2] = vRandom.vector4_f32[2];
                vOrthoNormNormalize.vector4_f32[3] = vRandom.vector4_f32[3];
            }
            CHECK_VECTOR_EQUAL_VECTOR(vOrthoNormNormalize, MorphineMath::Vector1OrthoNormNormalize(vRandom));
        }
        //Vector2
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::VECTOR vRandom = randomVector(min, max);
            MorphineMath::VECTOR vOrthoNormNormalize;
            {
                MorphineMath::VECTOR vLength = MorphineMath::Vector2OrthoNormLengthSq(vRandom);
                MorphineMath::F32 fLength = vLength.vector4_f32[0];
                MorphineMath::F32 fInvLength;
                {
                    if (fLength > 0)
                    {
                        fInvLength = 1.0f / fLength;
                    }
                    else
                    {
                        fInvLength = MorphineMath::CMAXF32;
                    }
                }

                vOrthoNormNormalize.vector4_f32[0] = vRandom.vector4_f32[0] * fInvLength;
                vOrthoNormNormalize.vector4_f32[1] = vRandom.vector4_f32[1] * fInvLength;
                vOrthoNormNormalize.vector4_f32[2] = vRandom.vector4_f32[2];
                vOrthoNormNormalize.vector4_f32[3] = vRandom.vector4_f32[3];
            }
            CHECK_VECTOR_EQUAL_VECTOR(vOrthoNormNormalize, MorphineMath::Vector2OrthoNormNormalize(vRandom));
        }
        //Vector3
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::VECTOR vRandom = randomVector(min, max);
            MorphineMath::VECTOR vOrthoNormNormalize;
            {
                MorphineMath::VECTOR vLength = MorphineMath::Vector3OrthoNormLengthSq(vRandom);
                MorphineMath::F32 fLength = vLength.vector4_f32[0];
                MorphineMath::F32 fInvLength;
                {
                    if (fLength > 0)
                    {
                        fInvLength = 1.0f / fLength;
                    }
                    else
                    {
                        fInvLength = MorphineMath::CMAXF32;
                    }
                }

                vOrthoNormNormalize.vector4_f32[0] = vRandom.vector4_f32[0] * fInvLength;
                vOrthoNormNormalize.vector4_f32[1] = vRandom.vector4_f32[1] * fInvLength;
                vOrthoNormNormalize.vector4_f32[2] = vRandom.vector4_f32[2] * fInvLength;
                vOrthoNormNormalize.vector4_f32[3] = vRandom.vector4_f32[3];
            }
            CHECK_VECTOR_EQUAL_VECTOR(vOrthoNormNormalize, MorphineMath::Vector3OrthoNormNormalize(vRandom));
        }
        //Vector4
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::VECTOR vRandom = randomVector(min, max);
            MorphineMath::VECTOR vOrthoNormNormalize;
            {
                MorphineMath::VECTOR vLength = MorphineMath::Vector4OrthoNormLengthSq(vRandom);
                MorphineMath::F32 fLength = vLength.vector4_f32[0];
                MorphineMath::F32 fInvLength;
                {
                    if (fLength > 0)
                    {
                        fInvLength = 1.0f / fLength;
                    }
                    else
                    {
                        fInvLength = MorphineMath::CMAXF32;
                    }
                }

                vOrthoNormNormalize.vector4_f32[0] = vRandom.vector4_f32[0] * fInvLength;
                vOrthoNormNormalize.vector4_f32[1] = vRandom.vector4_f32[1] * fInvLength;
                vOrthoNormNormalize.vector4_f32[2] = vRandom.vector4_f32[2] * fInvLength;
                vOrthoNormNormalize.vector4_f32[3] = vRandom.vector4_f32[3] * fInvLength;
            }
            CHECK_VECTOR_EQUAL_VECTOR(vOrthoNormNormalize, MorphineMath::Vector4OrthoNormNormalize(vRandom));
        }
    }
    SUBCASE("MorphineMath::VectorOrthoNormTripleProduct")
    {
        //Vector3
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::VECTOR vRandom1 = randomVector(min, max);
            const MorphineMath::VECTOR vRandom2 = randomVector(min, max);
            const MorphineMath::VECTOR vRandom3 = randomVector(min, max);
            MorphineMath::VECTOR vOrthoNormTripleProduct;
            {
                MorphineMath::F32 x;
                {
                    x = VectorGetX(vRandom1) * (VectorGetY(vRandom2) * VectorGetZ(vRandom3) - VectorGetY(vRandom3) * VectorGetZ(vRandom2));
                    x -= VectorGetY(vRandom1) * (VectorGetX(vRandom2) * VectorGetZ(vRandom3) - VectorGetX(vRandom3) * VectorGetZ(vRandom2));
                    x += VectorGetZ(vRandom1) * (VectorGetX(vRandom2) * VectorGetY(vRandom3) - VectorGetX(vRandom3) * VectorGetY(vRandom2));
                }

                vOrthoNormTripleProduct = MorphineMath::VectorFill(x);
            }
            CHECK_VECTOR_EQUAL_VECTOR(vOrthoNormTripleProduct, MorphineMath::Vector3OrthoNormTripleProduct(vRandom1, vRandom2, vRandom3));
        }
    }
    SUBCASE("MorphineMath::VectorOrthoNormCross")
    {
        //Vector3
        for (size_t i = 0; i < count; ++i)
        {
            const MorphineMath::VECTOR vRandom1 = randomVector(min, max);
            const MorphineMath::VECTOR vRandom2 = randomVector(min, max);
            MorphineMath::VECTOR vOrthoNormOrtho = MorphineMath::VectorSet(
                VectorGetY(vRandom1) * VectorGetZ(vRandom2) - VectorGetY(vRandom2) * VectorGetZ(vRandom1),
                VectorGetX(vRandom2) * VectorGetZ(vRandom1) - VectorGetX(vRandom1) * VectorGetZ(vRandom2),
                VectorGetX(vRandom1) * VectorGetY(vRandom2) - VectorGetX(vRandom2) * VectorGetY(vRandom1),
                0.0f);
            CHECK_VECTOR_EQUAL_VECTOR(vOrthoNormOrtho, MorphineMath::Vector3OrthoNormCross(vRandom1, vRandom2));
        }
    }
}