#include <stdio.h>
#include <stdlib.h>
 
typedef unsigned long long ham;
size_t alloc = 0, n = 1;
ham *q = 0;

void qpush(ham h)
{
	int i, j;
	if (alloc <= n)
	{
		alloc = alloc ? alloc * 2 : 16;
		q = realloc(q, sizeof(ham) * alloc);
	}

	for (i = n++; (j = i/2) && q[j] > h; q[i] =q[j], i = j);
	q[i] = h;
	
	
}

ham qpop()
{
	int i, j;
	ham r, t;

	/*Boucle externe pour ignorer les termes repetés*/

	for (r = q[1]; n > 1 && r == q[1]; q[i] = t)
	{
		for (i = 1, t = q[--n]; (j = i * 2) < n;)
		{
			if (j + 1 < n && q[j] > q[j + 1]) j++;
			if (t <= q[j]) break;
			q[i] = q[j], i = j;
			
		}
	}

	return r;	
	
}

int main()
{
	int i;
	ham h;

	for (qpush(i = 1); i <= 45; i++)
	{
		h = qpop();
		qpush(h * 2);
		qpush(h * 3);
		qpush(h * 5);

		if (i <= 15 || i == 45)
		{
			printf("%6d: %llu\n", i, h);
		}
		
	}
	
	return 0;
}