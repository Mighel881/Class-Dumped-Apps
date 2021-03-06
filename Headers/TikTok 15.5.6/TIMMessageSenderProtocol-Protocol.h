//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;
@protocol TIMSendTemplateModelProtocol;

@protocol TIMMessageSenderProtocol <NSObject>
- (void)sendInputStatusMessageWithInputStatus:(int)arg1 conversationID:(NSString *)arg2 extra:(NSDictionary *)arg3 completion:(void (^)(NSError *))arg4;
- (void)sendUserActionMessageWithActionType:(int)arg1 conversationID:(NSString *)arg2 extra:(NSDictionary *)arg3 completion:(void (^)(NSError *))arg4;
- (void)resendMessage:(NSString *)arg1 sessionID:(NSString *)arg2;
- (NSString *)sendMessageWithTemplateNoSaveDB:(id <TIMSendTemplateModelProtocol>)arg1 error:(id *)arg2;
- (NSString *)sendMessageWithTemplate:(id <TIMSendTemplateModelProtocol>)arg1 error:(id *)arg2;
@end

