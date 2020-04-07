//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/NSObject-Protocol.h>

@class ASHandle, NSString;

@protocol ASWatcher <NSObject>
@property(readonly, nonatomic) ASHandle *actionHandle;

@optional
- (void)actorMessageReceived:(NSString *)arg1 messageType:(NSString *)arg2 message:(id)arg3;
- (void)actionStageActionRequested:(NSString *)arg1 options:(id)arg2;
- (void)actionStageResourceDispatched:(NSString *)arg1 resource:(id)arg2 arguments:(id)arg3;
- (void)actorReportedProgress:(NSString *)arg1 progress:(float)arg2;
- (void)actorCompleted:(int)arg1 path:(NSString *)arg2 result:(id)arg3;
@end
