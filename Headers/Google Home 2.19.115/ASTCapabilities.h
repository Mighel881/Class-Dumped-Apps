//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ASTCapabilities : NSObject
{
}

+ (id)suggestionChipCollectionStreamItem;
+ (id)carouselStreamItemWithHeight:(double)arg1 spacing:(double)arg2;
+ (id)suggestionChipCarouselStreamItem;
+ (id)v2SuggestionChipWithTitle:(id)arg1 index:(int)arg2;
+ (id)defaultV2SettingsUiSelector;
+ (id)defaultSettingsFetcherParameters;
+ (id)agentFromServiceSettings:(id)arg1;
+ (id)createWebViewControllerFromURLString:(id)arg1;
+ (_Bool)canShowGroupInfoAccessoryWithGroupInfo:(id)arg1;
+ (_Bool)needDeviceSetupForAgent:(id)arg1;
+ (id)primaryLinkForAgent:(id)arg1;
+ (_Bool)isAgentEnabledOnPhone:(id)arg1;
+ (_Bool)isAgentLinkable:(id)arg1;
+ (_Bool)isAgentLinked:(id)arg1;
+ (id)categoryPageForCategory:(int)arg1 title:(id)arg2 delegate:(id)arg3;
+ (id)viewControllerForReportAgent:(id)arg1 parameters:(id)arg2;
+ (id)viewControllerForGroupInfo:(id)arg1 parameters:(id)arg2;
+ (id)viewControllerForExploreItentWithDeeplinkURL:(id)arg1 parameters:(id)arg2;
+ (id)viewControllerForCategoryWithURL:(id)arg1 parameters:(id)arg2;
+ (id)viewControllerForAgentWithURL:(id)arg1 parameters:(id)arg2;
+ (id)viewControllerForAgentWithID:(id)arg1 parameters:(id)arg2;
+ (id)defaultErrorView;

@end

