#include <stdio.h>
#define N 10000
main() { 
	int i, p, q, t, id[N];
	for (i = 0; i < N; i++) id[i] = i;
	// as long as there are two node ids in input...
	while (scanf("%d %d\n", &p, &q) == 2) {
		// continue loop if already connected
		if (id[p] == id[q]) continue;
		// for all nodes connected to p, connect them to q!
		for (t = id[p], i = 0; i < N; i++) {
			if (id[i] == t) id[i] = id[q];
		}
		// print out the new connection between p & q
		printf(" %d %d\n", p, q);
	}
}

