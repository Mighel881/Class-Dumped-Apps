//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveLoggerService-Protocol.h"

@class NSString;

@interface AWELiveLoggerServiceImpl : NSObject <IESLiveLoggerService>
{
}

- (int)mapBDALogLevelWithIESLiveLogLevel:(unsigned long long)arg1;
- (unsigned long long)mapDDLogFlagWithIESLiveLogLevel:(unsigned long long)arg1;
- (void)ieslive_logWithLevel:(unsigned long long)arg1 tag:(id)arg2 filename:(const char *)arg3 function:(const char *)arg4 lineNumber:(int)arg5 logString:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
