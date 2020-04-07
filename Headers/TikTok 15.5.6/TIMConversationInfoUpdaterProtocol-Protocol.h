//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol TIMConversationInfoUpdaterProtocol <NSObject>
- (void)updateConversationCoreInfoEntries:(NSDictionary *)arg1 onConversation:(NSString *)arg2 completion:(void (^)(id <TIMConversationOperationResponse>, NSError *))arg3;
- (void)updateConversationSettingsEntries:(NSDictionary *)arg1 onConversation:(NSString *)arg2 completion:(void (^)(id <TIMConversationOperationResponse>, NSError *))arg3;
- (void)updateConversationParticipant:(long long)arg1 entries:(NSDictionary *)arg2 onConversation:(NSString *)arg3 completion:(void (^)(id <TIMConversationOperationResponse>, NSError *))arg4;
- (void)updateConversationCoreInfoSyncedExtEntries:(NSDictionary *)arg1 onConversation:(NSString *)arg2 completion:(void (^)(id <TIMConversationOperationResponse>, NSError *))arg3;
- (void)updateConversationSettingsSyncedExtEntries:(NSDictionary *)arg1 onConversation:(NSString *)arg2 completion:(void (^)(id <TIMConversationOperationResponse>, NSError *))arg3;
- (void)upsertWithLocalObject:(id)arg1 inInbox:(int)arg2 completion:(void (^)(NSError *))arg3;
- (void)upsertWithLocalObject:(id)arg1 inInbox:(int)arg2;
- (void)updateConversation:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)updateConversation:(NSString *)arg1;
@end
