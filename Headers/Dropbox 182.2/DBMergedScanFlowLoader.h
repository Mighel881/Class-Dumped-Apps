//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBMergedScanFlowLoader : NSObject
{
}

+ (void)db_showOnboardingViewControllerWithModalManager:(id)arg1 continueBlock:(CDUnknownBlockType)arg2;
+ (void)db_showOnboardingIfNeededForSource:(long long)arg1 withModalManager:(id)arg2 analyticsLogger:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
+ (id)db_defaultProviderBundlesFromProviders:(id)arg1;
+ (void)showPreviewControllerForFileEntry:(id)arg1 isBusinessAccountFile:(_Bool)arg2 parentFileEntry:(id)arg3 modalManager:(id)arg4 analyticsLogger:(id)arg5 source:(long long)arg6 linkedUserIds:(id)arg7 currentTeamId:(id)arg8 delegate:(id)arg9;
+ (id)db_createPreviewViewControllerWithProviderBundles:(id)arg1 destinationFolderFileEntry:(id)arg2 modalManager:(id)arg3 analyticsLogger:(id)arg4 suitableForFeedback:(_Bool)arg5 linkedUserIds:(id)arg6 currentTeamId:(id)arg7 dismissalBlock:(CDUnknownBlockType)arg8;
+ (id)db_createCaptureControllerWithDestinationFolderFileEntry:(id)arg1 modalManager:(id)arg2 analyticsLogger:(id)arg3 suitableForFeedback:(_Bool)arg4 linkedUserIds:(id)arg5 currentTeamId:(id)arg6 delegate:(id)arg7 dismissalBlock:(CDUnknownBlockType)arg8;
+ (void)showCaptureControllerForSource:(long long)arg1 destinationFolderFileEntry:(id)arg2 modalManager:(id)arg3 analyticsLogger:(id)arg4 suitableForFeedback:(_Bool)arg5 linkedUserIds:(id)arg6 currentTeamId:(id)arg7 delegate:(id)arg8 dismissalBlock:(CDUnknownBlockType)arg9;

@end
