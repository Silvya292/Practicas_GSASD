/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "prueba.h"
#include <math.h> //To use function pow()

int *
suma_1_svc(operandos *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */
	result=argp->a+argp->b;

	return &result;
}

int *
multiplicacion_1_svc(operandos *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */
	result=argp->a*argp->b;

	return &result;
}

int *
resta_1_svc(operandos *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */
	result=argp->a-argp->b;

	return &result;
}

int *
division_1_svc(operandos *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */
	if(argp->b!=0){
		result=argp->a/argp->b;
	}

	return &result;
}

int *
potencia_1_svc(operandos *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */
	result=pow(argp->a,argp->b);

	return &result;
}

int *
modulo_1_svc(operandos *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */
	result=argp->a%argp->b;

	return &result;
}
