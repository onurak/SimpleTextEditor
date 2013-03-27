//
//  AppDelegate.m
//  SimpleTextEditor
//
//  Created by Onur Ak on 3/27/13.
//  Copyright (c) 2013 Onur Ak. All rights reserved.
//

#import "AppDelegate.h"

@implementation AppDelegate

@synthesize window = _window;

- (void)initializeiCloudAccess {
    
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        if ([[NSFileManager defaultManager] URLForUbiquityContainerIdentifier:nil])
            NSLog(@"iCloud is available.\n");
        else
            NSLog(@"iCloud is not available.\n");
    });
}

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    [self initializeiCloudAccess];
    // Override point for customization after application launch.
    return YES;
}
@end
