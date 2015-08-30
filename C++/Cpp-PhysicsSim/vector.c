#include "vector.h";
#include <math.h>

    Vector vectorNew()
    {
        Vector rtnVector;
        rtnVector->x=0;
        rtnVector->y=0;
        rtnVector->z=0;
        return rtnVector;
    }

    Vector vectorNew(Vector pVectorA)
    {
        Vector rtnVector = vectorNew();
        rtnVector.x=pVectorA.x;
        rtnVector.y=pVectorA.y;
        rtnVector.z=pVectorA.z;
        return rtnVector;
    }

    Vector vectorNew(double pDoubleA, double pDoubleB, double pDoubleC)
    {
        Vector rtnVector = vectorNew();
        rtnVector.x=pDoubleA;
        rtnVector.y=pDoubleB;
        rtnVector.z=pDoubleC;
        return rtnVector;
    }

    Vector vectorAdd(Vector pVectorA, Vector pVectorB)
    {
        Vector rtnVector = vectorNew();
        rtnVector.x=pVectorA.x+pVectorB.x;
        rtnVector.y=pVectorA.y+pVectorB.y;
        rtnVector.z=pVectorA.z+pVectorB.z;
        return rtnVector;
    }

    Vector vectorMinus(Vector pVectorA, Vector pVectorB)
    {
        Vector rtnVector = vectorNew();
        rtnVector.x=pVectorA.x-pVectorB.x;
        rtnVector.y=pVectorA.y-pVectorB.y;
        rtnVector.z=pVectorA.z-pVectorB.z;
        return rtnVector;
    }

    Vector vectorScale(Vector pVectorA, double pDoubleA)
    {
        Vector rtnVector = vectorNew();
        rtnVector.x=pVectorA.x*pDoubleA;
        rtnVector.y=pVectorA.y*pDoubleA;
        rtnVector.z=pVectorA.z*pDoubleA;
        return rtnVector;
    }
    double vectorGetLength(Vector pVectorA)
    {
        double xx = pVectorA.x * pVectorA.x;
        double yy = pVectorA.y * pVectorA.y;
        double zz = pVectorA.z * pVectorA.z;
        return sqrt( xx + yy + zz);
    }
