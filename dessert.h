#ifndef DESSERT_H
# define DESSERT_H

#define dessert(A) \
    if(!(A)) { printf("[KO] - %s - %s:%d \n", #A, __FILE__, __LINE__); } \
    else {printf("[OK] - %s - %s:%d \n", #A, __FILE__, __LINE__); } \

#endif /* DESSERT_H */
