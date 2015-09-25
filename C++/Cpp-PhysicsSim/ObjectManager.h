/* 
 * File:   ObjectManager.h
 * Author: Alexander Habermann
 *
 * Created on September 25, 2015, 10:02 AM
 */

#ifndef OBJECTMANAGER_H
#define	OBJECTMANAGER_H

class ObjectManager {
public:
    ObjectManager * Instance();
    void InstanceExit();
    int mObjCount;
private:
    
    ObjectManager * mpObjectManager;
    ObjectManager();
    ObjectManager(const ObjectManager& orig);
    virtual ~ObjectManager();

};

#endif	/* OBJECTMANAGER_H */

