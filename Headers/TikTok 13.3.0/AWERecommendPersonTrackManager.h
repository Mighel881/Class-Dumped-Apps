//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEUserMessage-Protocol.h"

@class NSMutableArray, NSString;

@interface AWERecommendPersonTrackManager : NSObject <AWEUserMessage>
{
    NSMutableArray *_recommendPersons;
}

+ (void)save;
+ (id)recommendUsers;
+ (void)clean;
+ (void)viewRecommendPersonWithReferString:(id)arg1 userID:(id)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *recommendPersons; // @synthesize recommendPersons=_recommendPersons;
- (void).cxx_destruct;
- (void)didFinishLogout;
- (void)addTrackNode:(id)arg1;
- (void)cleanTrackNodes;
- (void)saveTrackNodesWithArray:(id)arg1;
- (void)saveTrackNodes;
- (id)trackNodes;
- (void)unregisterNotifications;
- (void)registerNotifications;
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
