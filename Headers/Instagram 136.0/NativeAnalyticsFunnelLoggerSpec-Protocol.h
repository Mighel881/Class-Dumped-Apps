//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/RCTBridgeModule-Protocol.h>
#import <InstagramAppCoreFramework/RCTTurboModule-Protocol.h>

@class NSDictionary, NSString;

@protocol NativeAnalyticsFunnelLoggerSpec <RCTBridgeModule, RCTTurboModule>
- (void)cancelFunnel:(NSString *)arg1 instanceID:(double)arg2;
- (void)addFunnelTag:(NSString *)arg1 instanceID:(double)arg2 tag:(NSString *)arg3;
- (void)endFunnel:(NSString *)arg1 instanceID:(double)arg2;
- (void)addActionToFunnel:(NSString *)arg1 instanceID:(double)arg2 actionName:(NSString *)arg3 tag:(NSString *)arg4 payload:(NSDictionary *)arg5;
- (void)startFunnel_DEV_MODE:(NSString *)arg1 instanceID:(double)arg2;
- (void)startFunnel:(NSString *)arg1 instanceID:(double)arg2;
@end

