//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ASMLaunchManager : NSObject
{
}

+ (void)overrideInterfaceStyleOfViewController:(id)arg1 withStyle:(unsigned long long)arg2;
+ (void)launchExternalExperienceWithBlueprint:(id)arg1 launchExternalExperienceAction:(id)arg2 initialIdentity:(id)arg3 accountModel:(id)arg4 externalLauncher:(id)arg5 animated:(_Bool)arg6 fromViewController:(id)arg7 pushIfPossible:(_Bool)arg8 session:(id)arg9;
+ (id)googleAccountViewControllerFromProvider:(id)arg1 withUserInterfaceStyle:(unsigned long long)arg2;
+ (id)navigationControllerForViewController:(id)arg1;
+ (_Bool)tryPushingViewController:(id)arg1 overLoadingViewController:(id)arg2 animated:(_Bool)arg3 session:(id)arg4;
+ (void)showViewController:(id)arg1 onViewController:(id)arg2 animated:(_Bool)arg3 pushIfPossible:(_Bool)arg4 session:(id)arg5;
+ (void)launchGoogleAccountWithBlueprint:(id)arg1 launchExternalExperienceAction:(id)arg2 initialIdentity:(id)arg3 accountModel:(id)arg4 externalLauncher:(id)arg5 animated:(_Bool)arg6 fromViewController:(id)arg7 withGoogleAccountViewControllerProvider:(id)arg8 pushIfPossible:(_Bool)arg9 userInterfaceStyle:(unsigned long long)arg10 session:(id)arg11;
+ (void)launchGoogleAccountWithBlueprint:(id)arg1 launchExternalExperienceAction:(id)arg2 initialIdentity:(id)arg3 accountModel:(id)arg4 externalLauncher:(id)arg5 animated:(_Bool)arg6 fromViewController:(id)arg7 loadingViewController:(id)arg8 pushIfPossible:(_Bool)arg9 withGoogleAccountViewControllerProvider:(id)arg10 userInterfaceStyle:(unsigned long long)arg11 session:(id)arg12;

@end
