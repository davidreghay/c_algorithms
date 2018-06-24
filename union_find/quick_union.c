#include <stdio.h>
#define N 10000
main() { 
	int i, j, p, q, t, id[N];
	for (i = 0; i < N; i++) id[i] = i;
	// as long as there are two node ids in input...
	while (scanf("%d %d\n", &p, &q) == 2) {
		// follow the "links" for p and q until reaching the identity
		for(i = p; i != id[i]; i = id[i]);
		for(j = q; j != id[j]; j = id[j]);
		// if they have the same identity, read next input
		if(i == j) continue;
		id[i] = j;
		// print out the new connection between p & q
		printf(" %d %d\n", p, q);
	}
}

