#ifndef DESSERT_H
# define DESSERT_H

#define dessert(A) \
    if (!(A)) { printf("[KO] - %s - %s:%d", #A, __FILE__, __LINE__); dessert_fail++;} \
    else {printf("[OK] - %s - %s:%d", #A, __FILE__, __LINE__); dessert_succ++;} \
    printf(" - test %d\n", dessert_fail + dessert_succ); \

#endif /* DESSERT_H */
