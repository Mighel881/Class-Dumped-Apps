//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEIMBatchFetchUserSessionDelegate-Protocol.h"
#import "AWEUserMessage-Protocol.h"

@class NSCache, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSTimer;

@interface AWEIMUserManager : NSObject <AWEIMBatchFetchUserSessionDelegate, AWEUserMessage>
{
    NSMutableSet *_fetchingUserSet;
    NSMutableArray *_sessions;
    NSMutableArray *_waitRequestQueue;
    NSMutableDictionary *_userCompletionDict;
    NSCache *_userCache;
    NSMapTable *_userMapTable;
    NSTimer *_timer;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMapTable *userMapTable; // @synthesize userMapTable=_userMapTable;
@property(retain, nonatomic) NSCache *userCache; // @synthesize userCache=_userCache;
@property(retain, nonatomic) NSMutableDictionary *userCompletionDict; // @synthesize userCompletionDict=_userCompletionDict;
@property(retain, nonatomic) NSMutableArray *waitRequestQueue; // @synthesize waitRequestQueue=_waitRequestQueue;
@property(retain, nonatomic) NSMutableArray *sessions; // @synthesize sessions=_sessions;
@property(retain, nonatomic) NSMutableSet *fetchingUserSet; // @synthesize fetchingUserSet=_fetchingUserSet;
- (void).cxx_destruct;
- (id)p_saveIMUser:(id)arg1;
- (id)p_saveAweUser:(id)arg1;
- (void)p_updateUserVM:(id)arg1;
- (void)p_fetchSingleUser:(id)arg1 secUserID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)userDetailUpdateNotification:(id)arg1;
- (void)didFinishSetRemarkWithUser:(id)arg1;
- (void)batchFetchUserSessionDidFinished:(id)arg1;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1 toUser:(id)arg2;
- (void)timerFired:(id)arg1;
- (void)fetchUser:(id)arg1 secUserID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchIMUser:(id)arg1 secUserID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)userVMForUserID:(id)arg1 secUserID:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

