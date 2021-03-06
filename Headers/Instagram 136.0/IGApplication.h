//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGBaseApplication.h>

@protocol IGAnalyticsEventLoggingProvider;

@interface IGApplication : IGBaseApplication
{
    long long _touchState;
    id <IGAnalyticsEventLoggingProvider> _eventLoggingProvider;
}

@property(nonatomic) __weak id <IGAnalyticsEventLoggingProvider> eventLoggingProvider; // @synthesize eventLoggingProvider=_eventLoggingProvider;
- (void).cxx_destruct;
- (void)_handleTouch;
- (void)_backgroundTaskExpired:(unsigned long long)arg1;
- (unsigned long long)beginBackgroundTaskWithName:(id)arg1 expirationHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)beginBackgroundTaskWithExpirationHandler:(CDUnknownBlockType)arg1;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;
- (void)_processTouchEvent:(id)arg1;
- (void)sendEvent:(id)arg1;
- (id)init;

@end

