//
//  mathtool.c
//  Algorithms
//
//  Created by apple on 2019/5/31.
//  Copyright © 2019 华生侯. All rights reserved.
//

#include <stdio.h>
#include "mathtool.h"

int gcd(int a, int b) {
    
    if (a == b) return a;
    if (a == 0 || b == 0) return 0;
    int r = a % b;

    if (r < b) {
        return gcd(a, r);
    } else if (r > b) {
        return gcd(r, b);
    } else {
        return b;
    }
}
