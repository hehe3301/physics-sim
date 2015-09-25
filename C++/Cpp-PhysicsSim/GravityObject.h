/* 
 * File:   GravityObject.h
 * Author: Alex
 *
 * Created on August 30, 2015, 12:59 PM
 */

#ifndef GRAVITYOBJECT_H
#define	GRAVITYOBJECT_H

class GravityObject {
    
public:
    GravityObject();
    GravityObject( char * pmObjName);
    GravityObject(const GravityObject& orig);
    virtual ~GravityObject();
    void Update();
    enum ObjectState:int { PREP, READY_TO_TICK, TICK, CLEANUP };
    
private:
    const char * mObjName;
    Vector * mCurrentPos;
    Vector * mNextPos;
    Vector * mCurrentVel;
    Vector * mNextVel;
    Vector * mCurrentAcc;
    Vector * mCurrentForce;
    double mMass;
    double mRadus;

    void PrepToTick();
    void Tick();
    void Cleanup();
    
};

#endif	/* GRAVITYOBJECT_H */

