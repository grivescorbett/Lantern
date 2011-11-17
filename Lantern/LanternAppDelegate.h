//
//  LanternAppDelegate.h
//  Lantern
//
//  Created by Gabriel Rives-Corbett on 11/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LanternViewController;

@interface LanternAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet LanternViewController *viewController;

@end
