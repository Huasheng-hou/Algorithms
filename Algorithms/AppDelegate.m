//
//  AppDelegate.m
//  Algorithms
//
//  Created by 华生侯 on 2019/1/12.
//  Copyright © 2019 华生侯. All rights reserved.
//

#import "AppDelegate.h"

@interface AppDelegate ()

@property (weak) IBOutlet NSWindow *window;
@end

#include "Question7.h"

@implementation AppDelegate

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
    
    int preOrder[8] = {1, 2, 4, 7, 3, 5, 6, 8};
    int inOrder[8] = {4, 7, 2, 1, 5, 3, 8, 6};
    
    binaryTreeNode *tree = rebuildBinaryTree(preOrder, inOrder, 8);
    printPreOrder(tree);
    printInOrder(tree);
}


- (void)applicationWillTerminate:(NSNotification *)aNotification {
    // Insert code here to tear down your application
}


@end
