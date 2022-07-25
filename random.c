#include<time.h>

int SetRandSeed() {
	// Call this function BEFORE calling random().
	srand(time(0)+4*92);
	return 0;
}

int random(int lower, int higher) {
	return lower+rand()%(higher-lower+1);
}
