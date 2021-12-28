#include "Zad1.h"
#define M_PI 3.14159265358979323846

float PoleKola(float r)
{
    if (r < 0)
        return 0;

    return M_PI * r * r;
}

float ObwodKola(float r)
{
    if (r < 0)
        return 0;

    return 2 * M_PI * r;
}

float PoleProstokata(float a, float b)
{
    if (a < 0 || b < 0)
        return 0;

    return a * b;
}

float ObwodProstokata(float a, float b)
{
    if (a < 0 || b < 0)
        return 0;

    return (a + b) * 2;
}

float PoleTrojkata(float a, float h)
{
    if (a < 0 || h < 0)
        return 0;

    return 0.5 * a * h;
}

float PoleSzescianu(float a)
{
    if (a < 0)
        return 0;

    return a * a * 4;
}

float ObjetoscSzescianu(float a)
{
    return a * a * a;
}

float PoleWalca(float r, float h)
{
    if (r < 0 || h < 0)
        return 0;

    float polePodstawy = PoleKola(r);
    float powierzchniaBoczna = 2 * M_PI * r * h;
    return (2 * polePodstawy) + powierzchniaBoczna;
}

float ObjetoscWalca(float r, float h)
{
    if (r < 0 || h < 0)
        return 0;

    float polePodstawy = PoleKola(r);
    return polePodstawy * h;
}
