//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWEMemoryDebuggerMonitor : NSObject
{
}

+ (void)p_logInfoWithTosId:(id)arg1 timestamp:(double)arg2;
+ (void)p_uploadFile:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)p_checkAndUpload;
+ (void)p_didReceiveMemoryPeakedNotification:(id)arg1;
+ (id)graphPath;
+ (void)p_didReceiveMemoryWillPeakedNotification:(id)arg1;
+ (void)start;
+ (void)stop;

@end
