//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IESVisionSearchTrackerServiceImpl : NSObject
{
}

- (void)trackEvent:(id)arg1 label:(id)arg2 value:(id)arg3 extra:(id)arg4 attributes:(id)arg5;
- (void)trackEvent:(id)arg1 params:(id)arg2 needStagingFlag:(_Bool)arg3;
- (void)trackEvent:(id)arg1 params:(id)arg2;
- (id)clientDID;
- (id)deviceID;
- (id)installID;

@end

