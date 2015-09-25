/* 
 * File:   ObjectManager.cpp
 * Author: Alexander Habermann
 * 
 * Created on September 25, 2015, 10:02 AM
 */

#include "ObjectManager.h"

/*
 * Public Functions
 */
    ObjectManager * Instance(){
        mObjCount++;
    }
    
    void InstanceExit(){
        mObjCount--;
    }


/*
 * Private Functions
 */
ObjectManager::ObjectManager() {
}

ObjectManager::ObjectManager(const ObjectManager& orig) {
}

ObjectManager::~ObjectManager() {
}

