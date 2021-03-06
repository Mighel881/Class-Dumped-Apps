//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBGeneratedIntentTarget.h>

@class IGUser, IGUserSession, NSArray, NSNumber, NSString;

@interface IGTabbedFollowListIntentTarget : FBGeneratedIntentTarget
{
    _Bool _rankByMutualFollowers;
    _Bool _isFromChainingSeeAllButtonPress;
    _Bool _showRemoveButtonAsMainCta;
    NSArray *_tabTypes;
    IGUser *_user;
    NSString *_sourceAnalyticsModule;
    IGUserSession *_userSession;
    NSNumber *_followingUserCount;
    NSNumber *_followingHashtagCount;
    NSString *_viewControllerTitle;
    long long _defaultTabType;
    NSNumber *_followerUserCount;
    NSNumber *_mutualFollowerUserCount;
    NSString *_order;
}

@property(readonly, nonatomic) _Bool showRemoveButtonAsMainCta; // @synthesize showRemoveButtonAsMainCta=_showRemoveButtonAsMainCta;
@property(readonly, nonatomic) NSString *order; // @synthesize order=_order;
@property(readonly, nonatomic) _Bool isFromChainingSeeAllButtonPress; // @synthesize isFromChainingSeeAllButtonPress=_isFromChainingSeeAllButtonPress;
@property(readonly, nonatomic) NSNumber *mutualFollowerUserCount; // @synthesize mutualFollowerUserCount=_mutualFollowerUserCount;
@property(readonly, nonatomic) NSNumber *followerUserCount; // @synthesize followerUserCount=_followerUserCount;
@property(readonly, nonatomic) long long defaultTabType; // @synthesize defaultTabType=_defaultTabType;
@property(readonly, nonatomic) NSString *viewControllerTitle; // @synthesize viewControllerTitle=_viewControllerTitle;
@property(readonly, nonatomic) NSNumber *followingHashtagCount; // @synthesize followingHashtagCount=_followingHashtagCount;
@property(readonly, nonatomic) NSNumber *followingUserCount; // @synthesize followingUserCount=_followingUserCount;
@property(readonly, nonatomic) _Bool rankByMutualFollowers; // @synthesize rankByMutualFollowers=_rankByMutualFollowers;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) NSString *sourceAnalyticsModule; // @synthesize sourceAnalyticsModule=_sourceAnalyticsModule;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) NSArray *tabTypes; // @synthesize tabTypes=_tabTypes;
- (void).cxx_destruct;
- (id)initWithTabTypes:(id)arg1 user:(id)arg2 sourceAnalyticsModule:(id)arg3 userSession:(id)arg4 rankByMutualFollowers:(_Bool)arg5 followingUserCount:(id)arg6 followingHashtagCount:(id)arg7 viewControllerTitle:(id)arg8 defaultTabType:(long long)arg9 followerUserCount:(id)arg10 mutualFollowerUserCount:(id)arg11 isFromChainingSeeAllButtonPress:(_Bool)arg12 order:(id)arg13 showRemoveButtonAsMainCta:(_Bool)arg14;

@end

