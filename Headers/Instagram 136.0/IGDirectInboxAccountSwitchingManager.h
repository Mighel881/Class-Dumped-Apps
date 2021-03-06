//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGSwitchUsersControllerDelegate-Protocol.h>

@class IGProfileTitleViewController, IGUserSession, NSString;
@protocol IGAccountSwitcherPresenting, IGDirectInboxAccountSwitchingManagerDelegate;

@interface IGDirectInboxAccountSwitchingManager : NSObject <IGSwitchUsersControllerDelegate>
{
    IGProfileTitleViewController *_profileTitleViewController;
    NSString *_analyticsModule;
    IGUserSession *_userSession;
    id <IGAccountSwitcherPresenting> _accountSwitcherPresenter;
    id <IGDirectInboxAccountSwitchingManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGDirectInboxAccountSwitchingManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)switchUsersControllerDidSelectRowWithCurrentUser:(id)arg1;
- (void)switchUsersControllerDidSelectAddAccountRow:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)switchUsersController:(id)arg1 tableViewDidSelectRowWithIGDeviceBasedLoginDeferredAccount:(id)arg2;
- (void)switchUsersController:(id)arg1 didSelectMessagingInteropAccount:(id)arg2;
- (void)switchUsersController:(id)arg1 tableViewDidSelectRowWithIGDeviceBasedLoginAccount:(id)arg2;
- (void)switchUsersController:(id)arg1 tableViewDidSelectRowWithUser:(id)arg2;
- (void)hideSwitchControl;
- (id)accountSwitchingTitleViewForViewController:(id)arg1 rightBarButtonItems:(id)arg2 leftBarButtonItems:(id)arg3;
- (void)refreshAccountSwitcher;
- (id)initWithUserSession:(id)arg1 accountSwitcherPresenter:(id)arg2 analyticsModule:(id)arg3;
- (_Bool)shouldShowAccountSwitcher;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

