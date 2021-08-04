//
//  main.c
//  myFirst
//
//  Created by thanh on 02/08/2021.
//

#include <stdio.h>
#include <stdlib.h>

int fun(int n) {
    static int x = 0;
    if (n>0) {
        x++;
        return fun(n-1) + x;
    }
    return 0;
}

void increasingArray() {
    int *p,*q;
    int i;
    p = (int *)malloc(5*sizeof(int));
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;
    
    q = (int *)malloc(10*sizeof(int));
    for (i=0;i<10; i++) {
        q[i] = p[i];
        //printf("%d \n",p[i]);
    }
  free(p);
    p = q;
    q = NULL;
    for (i=0;i<5; i++) {
        printf("%d \n",p[i]);
    }
    
}



int main(int argc, const char * argv[]) {
    // insert code here...
//    int r ;
//    r = fun(5);
//    printf("%d\n",r);
//    r = fun(5);
//    printf("%d\n",r);
    increasingArray();
    return 0;
}
