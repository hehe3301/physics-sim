/* 
 * File:   vector.h
 * Author: Alex
 *
 * Created on August 30, 2015, 10:37 AM
 */

#ifndef VECTOR_H
#define	VECTOR_H

#ifdef	__cplusplus
extern "C" {
#endif

    typedef struct {
        double x;
        double y;
        double z;
    } Vector;

    /**
     * Genaric constructor 
     * @return - A new initalised Vector struct
     */
    Vector vectorNew();

    /**
     * Copy constructor
     * 
     * @param pVectorA - The vector to be copied
     * @return - The new vector with same dimentions as the original
     */
    Vector vectorNew(Vector pVectorA);

    /**
     * Constructor that takes three doubles as the three coordenates 
     * @param pDoubleA - The X Coordenate 
     * @param pDoubleB - The Y Coordenate 
     * @param pDoubleC - The Z Coordenate
     * @return - A new initalised Vector struct
     */
    Vector vectorNew(double pDoubleA, double pDoubleB, double pDoubleC);
     
    /**
     * vectorAdd
     * Takes in two vectors and returns the sum of those vectors
     * @param pVectorA - The First Vector
     * @param pVectorB - The Secound Vector
     * @return - A new initalised Vector struct
     */
    Vector vectorAdd(Vector pVectorA, Vector pVectorB);

    /**
     * vectorMinus
     * Takes in two vectors and returns the diffrence of those vectors
     * @param pVectorA - The First Vector
     * @param pVectorB - The Secound Vector
     * @return - A new initalised Vector struct
     */
    Vector vectorMinus(Vector pVectorA, Vector pVectorB);

    /**
     * vectorScale
     * This function takes a vector and scales it based on a double
     * @param pVectorA - the vector to be scaled
     * @param pDoubleA - the amount to be scaled
     * @return - a new vector
     */
    Vector vectorScale(Vector pVectorA, double pDoubleA);

    /**
     * vectorGetLength
     * This vector takes in a vector and returns the length of it
     * @param pVectorA - the vector to be mesaured  
     * @return - the Length of the vector
     */
    double vectorGetLength(Vector pVectorA);

    Vector vectorCrossProduct(Vector pVectorA, Vector pVectorB);

    Vector vectorDotProduct(Vector pVectorA, Vector pVectorB);
    
   


#ifdef	__cplusplus
}
#endif

#endif	/* VECTOR_H */

