//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HTSBackgroundFetchContext, HTSBgURLSessionContext, HTSBootAppDelegate, HTSNotificationContext, HTSOpenURLContext, HTSShortcutContext, HTSUserActivityContext, NSDictionary, UIApplication;

@interface HTSAppContext : NSObject
{
    _Bool _backgroundLaunch;
    NSDictionary *_launchOptions;
    UIApplication *_application;
    HTSBootAppDelegate *_appDelegate;
    HTSOpenURLContext *_openURLContext;
    HTSNotificationContext *_notificationContext;
    HTSUserActivityContext *_userActivityContext;
    HTSBackgroundFetchContext *_backgroundFetchContext;
    HTSShortcutContext *_shortcutContext;
    HTSBgURLSessionContext *_bgURLSessionContext;
}

+ (id)sharedContext;
@property(retain, nonatomic) HTSBgURLSessionContext *bgURLSessionContext; // @synthesize bgURLSessionContext=_bgURLSessionContext;
@property(retain, nonatomic) HTSShortcutContext *shortcutContext; // @synthesize shortcutContext=_shortcutContext;
@property(retain, nonatomic) HTSBackgroundFetchContext *backgroundFetchContext; // @synthesize backgroundFetchContext=_backgroundFetchContext;
@property(retain, nonatomic) HTSUserActivityContext *userActivityContext; // @synthesize userActivityContext=_userActivityContext;
@property(retain, nonatomic) HTSNotificationContext *notificationContext; // @synthesize notificationContext=_notificationContext;
@property(retain, nonatomic) HTSOpenURLContext *openURLContext; // @synthesize openURLContext=_openURLContext;
@property(retain, nonatomic) HTSBootAppDelegate *appDelegate; // @synthesize appDelegate=_appDelegate;
@property(nonatomic) _Bool backgroundLaunch; // @synthesize backgroundLaunch=_backgroundLaunch;
@property(retain, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(retain, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
- (void).cxx_destruct;

@end
