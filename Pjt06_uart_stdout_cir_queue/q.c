#include <stdio.h>
#include <stdlib.h>
#include "q.h"
#define Q_SIZE 64

int f, r;
char q[Q_SIZE];


void q_init()
{
	f = r =0;
}

int q_insert(char ch)
{
	if((r+1) % Q_SIZE == f)
		return(0);
	r = (r + 1) % Q_SIZE;
	q[r] = ch;
	return(1);
}

int q_delete()
{
	if(r==f)
		return(0);
	f = (f + 1) % Q_SIZE;
	return(q[f]);
}
