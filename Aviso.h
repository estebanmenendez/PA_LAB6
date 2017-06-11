/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Aviso.h
 * Author: esteban
 *
 * Created on 11 de junio de 2017, 12:02 AM
 */

#ifndef AVISO_H
#define AVISO_H

#include<string.h>
#include <stdio.h>
#include <iostream>
#include "PropInmo.h"

class aviso {
       
public:
    aviso();
    aviso(const aviso& orig);
    virtual ~aviso();
       
    virtual void setAviso(&propInmo);
    virtual aviso getAviso();
    
    virtual void crearAvisoProp(&Propiedad);
    virtual void altaAlquiler(float);
    virtual void altaVenta(float);
  

private:    
    alquiler * propEnAlq;
    venta * propEnVenta;

    

};

#endif /* AVISO_H */