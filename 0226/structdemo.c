#include <stdio.h>
#include <stdlib.h>

struct point {
    float x;
    float y;
};

int main(int argc, char* argv[]) {
    struct point p;
    p.x = 1.0;
    p.y = 0.1;
    printf("%f, %f\n", p.x, p.y);

    struct point* q;
    q = (struct point*) malloc(sizeof(struct point));
    q->x = 2.0;
    q->y = 0.2;
    printf("%f, %f\n", q->x, q->y);
}
