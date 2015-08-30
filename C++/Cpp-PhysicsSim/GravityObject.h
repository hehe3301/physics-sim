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
    const char * mObjName;
    Vector * mCurrentPos;
    Vector * mNextPos;
    Vector * mCurrentVel;
    Vector * mNextVel;
    Vector * mCurrentAcc;
    Vector * mCurrentForce;
    double mMass;
    double mRadus;
    
    
    
    GravityObject();
    GravityObject( char * pmObjName);
    GravityObject(const GravityObject& orig);
    virtual ~GravityObject();
    void Tick();
private:
    
    

};

#endif	/* GRAVITYOBJECT_H */

