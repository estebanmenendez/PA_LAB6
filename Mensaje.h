/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Mensaje.h
 * Author: esteban
 *
 * Created on 11 de junio de 2017, 12:06 AM
 */


#ifndef MENSAJE_H
#define MENSAJE_H

#include<string.h>
#include <stdio.h>
#include "Chat.h"
#include <iostream>

using namespace std;

class mensaje {
private:
	string textMsj;
	dtFecha * fechaMsj;
	dtHora * horaMsj;
	dtMensajes * mens;

public:
	mensaje();
	~mensaje();
        getTextoMsj();
        getfechaMsj();
        getHoraMsj();
        setTextoMsj(string);
        fechaMsj(&horaMsj);
        
	Usuarios getMensaje();
        
        
};

#endif