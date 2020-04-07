//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEStoryUserUnreadAwemeManagerProtocol-Protocol.h"
#import "AWEUserMessage-Protocol.h"

@class NSMutableDictionary, NSString;

@interface AWEStoryUserUnreadAwemeManager : NSObject <AWEUserMessage, AWEStoryUserUnreadAwemeManagerProtocol>
{
    NSMutableDictionary *_userUnreadCountMapTable;
    NSMutableDictionary *_userUnreadAwemeListMapTable;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *userUnreadAwemeListMapTable; // @synthesize userUnreadAwemeListMapTable=_userUnreadAwemeListMapTable;
@property(retain, nonatomic) NSMutableDictionary *userUnreadCountMapTable; // @synthesize userUnreadCountMapTable=_userUnreadCountMapTable;
- (void).cxx_destruct;
- (void)readAweme:(id)arg1;
- (void)fetchUnreadUserList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchUserUnreadAwemeList:(id)arg1 isNeedDisplayToast:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateUserID:(id)arg1 unreadAwemeList:(id)arg2;
- (id)unreadAwemesListWithUserID:(id)arg1;
- (long long)unreadAwemeCountWithUserID:(id)arg1;
- (_Bool)hasUnreadAweme:(id)arg1;
- (void)updateUserID:(id)arg1 unreadAwemeCount:(long long)arg2;
- (void)didFinishUnBlockUser:(id)arg1 status:(long long)arg2;
- (void)didFinishUnFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishLogout;
- (void)dealloc;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
