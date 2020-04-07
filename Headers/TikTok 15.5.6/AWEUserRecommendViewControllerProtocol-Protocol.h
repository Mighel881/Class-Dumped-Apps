//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIView, UIViewController;
@protocol AWERecommendUserDataControllerProtocol;

@protocol AWEUserRecommendViewControllerProtocol <NSObject>
+ (double)userRecommendViewHeightWithNewFindMoreButton;
+ (double)userRecommendViewHeightMT;
+ (double)userRecommendViewHeight;
+ (id)initWithConfigWithUserID:(NSString *)arg1 enterFrom:(NSString *)arg2 enterPosition:(NSString *)arg3 isDirect:(_Bool)arg4 groupId:(NSString *)arg5 label:(NSString *)arg6 type:(long long)arg7 hasAwemeCell:(_Bool)arg8 isColdLaunch:(_Bool)arg9 usesNewFindMoreButton:(_Bool)arg10 addToViewController:(UIViewController *)arg11 addToView:(UIView *)arg12;
@property(readonly, nonatomic) id <AWERecommendUserDataControllerProtocol> userRecommendDataController;
@property(copy, nonatomic) CDUnknownBlockType hideRecommendVCBlock;
@property(copy, nonatomic) CDUnknownBlockType deleteAllUserBlock;
@property(copy, nonatomic) CDUnknownBlockType moreBtnBlock;
- (_Bool)needReloadData;
- (void)refreshDataWithCompletion:(void (^)(_Bool))arg1;
- (void)configWithInitialUsers:(NSArray *)arg1 requestID:(NSString *)arg2;
- (void)configWithUserID:(NSString *)arg1 enterFrom:(NSString *)arg2 enterPosition:(NSString *)arg3 isDirect:(_Bool)arg4 groupId:(NSString *)arg5 label:(NSString *)arg6 type:(long long)arg7 hasAwemeCell:(_Bool)arg8;
@end
