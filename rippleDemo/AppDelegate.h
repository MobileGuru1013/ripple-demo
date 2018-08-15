//
//  AppDelegate.h
//  rippleDemo
//
//  Created by Alexandr Lesan on 02/12/18.
//  Copyright __MyCompanyName__ 2018. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CCDirectorIOS;

@interface AppDelegate : NSObject <UIApplicationDelegate, CCDirectorDelegate> {
	UIWindow			*window_;
    UINavigationController *navController_;
    
	CCDirectorIOS	*director_;	
}

@property (nonatomic, retain) UIWindow *window;

@end
