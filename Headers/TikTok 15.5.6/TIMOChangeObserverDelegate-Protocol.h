//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol TIMOChangeObserverDelegate <NSObject>

@optional
- (void)onMessagesNewPropertiesUpdated:(NSString *)arg1 inConversation:(NSString *)arg2 messageOldPropertiesMap:(NSDictionary *)arg3 messageNewPropertiesMap:(NSDictionary *)arg4;
- (void)didInsertNewMessagesWithMessageIdentifiers:(NSArray *)arg1 belongingConversationMap:(NSDictionary *)arg2 reason:(unsigned long long)arg3;
- (void)messageUpdated:(NSString *)arg1 inConversation:(NSString *)arg2;
- (void)conversationDidDissolved:(NSString *)arg1;
- (void)conversationUpdated:(NSString *)arg1;
@end
