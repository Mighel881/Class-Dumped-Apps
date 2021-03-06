//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GOOActionSheetController, GTLRAccesspoints_InsightCard, GTLRDateTime, NSString, UIViewController;
@protocol GOOContentViewObject, JETInsightCard;

@protocol JETInsightsCardDelegate <NSObject>
- (void)setMainViewController:(UIViewController *)arg1;
- (void)showHUDMessage:(NSString *)arg1;
- (void)reRenderInsightCard:(id <JETInsightCard>)arg1;
- (_Bool)updateDynamicInsightCard:(GTLRAccesspoints_InsightCard *)arg1;
- (void)updateLastUserActionTime:(GTLRDateTime *)arg1 forCard:(NSString *)arg2;
- (void)handleDismissButtonForCard:(id <JETInsightCard>)arg1;
- (void)refreshCardsWithSpinner:(_Bool)arg1 forced:(_Bool)arg2;
- (void)pushViewController:(UIViewController *)arg1;
- (void)displayStaticHelpArticle:(NSString *)arg1;
- (void)displayHelpCenterContext:(NSString *)arg1;

@optional
- (void)reloadItem:(id <GOOContentViewObject>)arg1;
- (void)replaceItem:(id <GOOContentViewObject>)arg1 with:(id <GOOContentViewObject>)arg2;
- (void)presentActionSheet:(GOOActionSheetController *)arg1;
@end

