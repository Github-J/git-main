//
//  AppDelegate.h
//  自己紹介
//
//  Created by 伊東 純平 on 12/04/22.
//  Copyright 北海道情報大学 2012年. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
