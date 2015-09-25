/* 
 * File:   GravityObject.cpp
 * Author: Alexander Habermann
 * 
 * Created on August 30, 2015, 12:59 PM
 */

#include "GravityObject.h"

/*
 * Public functions
 */

GravityObject::GravityObject(){
}

GravityObject::GravityObject(char * pmObjName){
}

GravityObject::GravityObject(const GravityObject& orig){
}

GravityObject::~GravityObject(){
}

bool GravityObject::Update(){
    bool rtnErrHappened = true;
    switch(mObjState){
        case INIT:
            
            break;
        case PREP_TO_TICK:
            rtnErrHappened = PrepToTick();
            if(rtnErrHappened){ //If an error happened
                mObjState = ERROR; //Set the state to error
            } else {
                mObjState = READY_TO_TICK;//report you are ready to tick
            }
            break;
        case READY_TO_TICK:
            
            break;
        case TICK:
            
            break;
        case CLEANUP:
            
            break;
        default:
            break;
    }
    
    return rtnErrHappened;
}
/*
 * Private functions
 */

bool PrepToTick(){
    
}
bool Tick(){
    
}
bool Cleanup(){
    
}