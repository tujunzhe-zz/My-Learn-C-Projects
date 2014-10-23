//
//  main.c
//  Sample
//
//  Created by tujunzhe on 14/10/22.
//  Copyright (c) 2014年 tujunzhe. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int number,sum;
    sum = 0;
    for (number=0; number<=10; number++) {
        sum+=number;
    }
    printf("The sum of the numbers from 1 to 10 is %d.\n",sum);
    return 0;
}
