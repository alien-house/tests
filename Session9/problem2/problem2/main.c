//
//  main.c
//  problem2
//
//  Created by sin on 2017/01/27.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
float * combineArray(float* array1, float* array2);
int main(int argc, const char * argv[]) {
    
    float array1[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    float array2[10] = {11.0, 12.0, 13.0, 14.0, 15.0, 16.0, 17.0, 18.0, 19.0, 20.0};
    float* result;
    
    result = combineArray(array1, array2);
    
    for (int i = 0; i < 4; i++) {
        printf("%f \n", result[i]);
    }
    
    return 0;
}

float* combineArray(float* array1, float* array2){
    float *newArray;
    for (int i = 0; i < 4; i++) {
        newArray[i] = array1[i] + array2[i];
    }
    return newArray;
}
