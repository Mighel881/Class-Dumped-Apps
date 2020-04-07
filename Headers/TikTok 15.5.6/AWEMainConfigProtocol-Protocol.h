//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEAwemeModel, NSString;

@protocol AWEMainConfigProtocol <NSObject>
+ (_Bool)requireLoginWhenSuggestion;
+ (_Bool)shouldUseSuperAccountsRecommendPolicy;
+ (_Bool)shouldUseSuperAccountsStyle;
+ (_Bool)enableScrollOptimizeInMainScreenFollow;
+ (_Bool)enableCommentAtAutoSearchWithReferString:(NSString *)arg1 awemeModel:(AWEAwemeModel *)arg2;
+ (_Bool)shouldLandingFollowTab;
+ (_Bool)enableOptimizeImageCacheInAwemeDetail;
+ (unsigned long long)i18NFeedSlideStrategy;
+ (_Bool)enableFeedSlide;
+ (_Bool)enableFeedContainerSlide;
+ (_Bool)isSecondTabFullScreenConcern;
+ (_Bool)shouldShowBulletScreen:(NSString *)arg1;
+ (long long)friendTabControllerInitIndex;
+ (unsigned long long)tabBarIconTextStyle;
+ (_Bool)useTTNetUtility;
+ (_Bool)useV2CommentList;
+ (_Bool)enableTTPlayer:(AWEAwemeModel *)arg1;
+ (_Bool)enablePostNotificationSwitch;
+ (_Bool)enableAppleMusic;
+ (_Bool)onlyAuthorCanSaveAweme;
@end
