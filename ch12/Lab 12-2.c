#include <stdio.h>

void process();

void main() {
	process();
	process();
	process();
}

void process() {
	static int sx;
	int x = 1;

	printf("%d %d\n", x, sx);

	x += 3;
	sx += x + 3;
}
