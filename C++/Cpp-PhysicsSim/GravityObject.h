/* 
 * File:   GravityObject.h
 * Author: Alexander Habermann
 *
 * Created on August 30, 2015, 12:59 PM
 */

#ifndef GRAVITYOBJECT_H
#define	GRAVITYOBJECT_H

class GravityObject {
    
public:
    GravityObject();
    GravityObject(char * pmObjName);
    GravityObject(const GravityObject& orig);
    virtual ~GravityObject();
    bool Update();
    enum GravObjectState:int {  INIT,
                                PREP_TO_TICK, 
                                READY_TO_TICK, 
                                TICK, 
                                CLEANUP,
                                ERROR };
    GravObjectState mObjState;
    
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

    bool PrepToTick();
    bool Tick();
    bool Cleanup();
    
};

#endif	/* GRAVITYOBJECT_H */

