//
//  main.m
//  Algorithms
//
//  Created by 华生侯 on 2019/1/12.
//  Copyright © 2019 华生侯. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#include "queue.h"
#include "stack.h"

int main(int argc, const char * argv[]) {
    
    printf("fuck world!\n");
    
    stack *aStack = newStack();
    
    push(aStack, (void *)0x00);
    push(aStack, (void *)0x01);
    push(aStack, (void *)0x02);
    push(aStack, (void *)0x03);
    
    printf("poped number is:%p\n", pop(aStack));
    printf("poped number is:%p\n", pop(aStack));
    printf("poped number is:%p\n", pop(aStack));
    printf("poped number is:%p\n", pop(aStack));
    
    return NSApplicationMain(argc, argv);
}
