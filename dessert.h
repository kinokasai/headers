#ifndef DESSERT_H
# define DESSERT_H

#define dessert(A) \
    if (!(A)) { printf("[KO] - %s - %s:%d", #A, __FILE__, __LINE__); d_f++;} \
    else {printf("[OK] - %s - %s:%d", #A, __FILE__, __LINE__); d_s++;} \
    printf(" - test %d\n", d_f + d_s); \

#endif /* DESSERT_H */
