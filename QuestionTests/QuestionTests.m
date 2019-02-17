//
//  QuestionTests.m
//  QuestionTests
//
//  Created by 华生侯 on 2019/1/13.
//  Copyright © 2019 华生侯. All rights reserved.
//

#import <XCTest/XCTest.h>
#include "Question7.h"

@interface QuestionTests : XCTestCase

@end

@implementation QuestionTests

- (void)setUp {
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
//    sleep(100);
}

- (void)testExample {
    
    int preOrder[8] = {1, 2, 4, 7, 3, 5, 6, 8};
    int inOrder[8] = {4, 7, 2, 1, 5, 3, 8, 6};
    
    binaryTreeNode *tree = rebuildBinaryTree(preOrder, inOrder, 8);
    printPreOrder(tree);
    printInOrder(tree);
}

- (void)testPerformanceExample {
    // This is an example of a performance test case.
    [self measureBlock:^{
        // Put the code you want to measure the time of here.
    }];
}

@end
