//Code by G V V Sharma
//October 27, 2023
//matrix operations using arrays
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "libs/matfun.h"


int  main()
{
FILE *fp; //file pointer
double **A,**B,**C;//declare vertices
double **m1,**m2,**m3;//direction vectors
double **n1,**n2,**n3;//normal vectors
double **temp;//temporary array
double c1,c2,c3;//direction vectors
double a,b,c; //triangle sides
int m =2, n=3, i, j;
double **mat =createMat(m,n);//vertices matrix 
mat = loadMat("vertices.dat",m, n);//loading matrix from file

//Extracting vertices
A = Matcol(mat,m,0);
B = Matcol(mat,m,1);
C = Matcol(mat,m,2);

//Direction vectors
m1 = Matsub(B,A,m,1);
m2 = Matsub(C,B,m,1);
m3 = Matsub(A,C,m,1);

//Line Parameters
//Normal vectors
n1 = normVec(m1);
n2 = normVec(m2);
n3 = normVec(m3);
//Line constants
c1 = Matdot(n1,A,2);


//Sides
a = Matnorm(m2,m);
b = Matnorm(m3,m);
c = Matnorm(m1,m);

//Normal vectors

//Printing
/*
printMat(n1,2,1);
printMat(A,2,1);
printf("%lf\n",c1);
*/
printf("%lf\n",a);
printf("%lf\n",b);
printf("%lf\n",c);
//printMat(rotMat(M_PI/2),2,2);
/*
printMat(n1,2,1);
printMat(n2,2,1);
printMat(n3,2,1);
*/
/*
printMat(m1,m,1);
printMat(m2,m,1);
printMat(m3,m,1);
*/


    return 0;
}
