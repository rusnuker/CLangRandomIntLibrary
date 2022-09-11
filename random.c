#include<time.h>

#define SetRandSeed() srand(time(0)+4*92)
#define random(a,b) a+rand()%(b-a+1)
