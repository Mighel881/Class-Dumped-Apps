//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGBusinessConversionCategorySelectionViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGBusinessFlow-Protocol.h>
#import <InstagramAppCoreFramework/IGBusinessSignUpConfirmationCodeViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGBusinessSignUpContactPointViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGBusinessSignUpNamePasswordViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGBusinessSignUpViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGBusinessSignUpWelcomeViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGInterestCategorySelectionViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGProConnectFBPageFlowDelegate-Protocol.h>

@class IG4BLogger, IGBusinessFlowNavigationPresenter, IGBusinessFlowPrefillInfo, IGBusinessSignUpNetworker, IGBusinessSignUpUserInfoModel, IGProConnectFBPageFlow, IGUserSession, NSString;
@protocol IGBusinessFlowBusinessSignUpCompletionDelegate;

@interface IGBusinessFlowBusinessSignUp : NSObject <IGBusinessConversionCategorySelectionViewControllerDelegate, IGBusinessSignUpConfirmationCodeViewControllerDelegate, IGBusinessSignUpContactPointViewControllerDelegate, IGBusinessSignUpNamePasswordViewControllerDelegate, IGBusinessSignUpWelcomeViewControllerDelegate, IGBusinessSignUpViewControllerDelegate, IGProConnectFBPageFlowDelegate, IGInterestCategorySelectionViewControllerDelegate, IGBusinessFlow>
{
    IGUserSession *_userSession;
    IGBusinessSignUpNetworker *_networker;
    IG4BLogger *_flowLogger;
    IGBusinessFlowPrefillInfo *_prefillInfo;
    IGProConnectFBPageFlow *_connectPageFlow;
    IGBusinessFlowNavigationPresenter *_flowPresenter;
    CDUnknownBlockType _flowCompletionNavigation;
    id <IGBusinessFlowBusinessSignUpCompletionDelegate> _completionDelegate;
    IGBusinessSignUpUserInfoModel *_userInfoModel;
}

@property(retain, nonatomic) IGBusinessSignUpUserInfoModel *userInfoModel; // @synthesize userInfoModel=_userInfoModel;
@property(nonatomic) __weak id <IGBusinessFlowBusinessSignUpCompletionDelegate> completionDelegate; // @synthesize completionDelegate=_completionDelegate;
@property(copy, nonatomic) CDUnknownBlockType flowCompletionNavigation; // @synthesize flowCompletionNavigation=_flowCompletionNavigation;
@property(readonly, nonatomic) IGBusinessFlowNavigationPresenter *flowPresenter; // @synthesize flowPresenter=_flowPresenter;
- (void).cxx_destruct;
- (void)_didCompleteBusinessSignUp;
- (void)_routeToCategorySelectionStep;
- (void)_routeToChooseUsernameStepAndDropPrevious:(_Bool)arg1;
- (void)_routeToWelcomeStepAndDropPrevious:(_Bool)arg1;
- (void)_routeToNamePasswordStep;
- (void)_didChooseCategory:(id)arg1;
- (void)interestCategorySelectionViewController:(id)arg1 didCompleteCategorySelectionWithCategory:(id)arg2 query:(id)arg3;
- (void)businessConversionCategorySelectionViewController:(id)arg1 didSelectCategoryWithID:(id)arg2;
- (void)businessSignUpWelcomeViewControllerDidTapChangeUsername:(id)arg1;
- (void)signUpViewControllerGDPRFinishedSignUpFailed:(id)arg1;
- (void)signUpViewControllerGDPRBlocked:(id)arg1;
- (void)signUpViewController:(id)arg1 didCompleteWithStep:(id)arg2;
- (void)connectFBPageFlow:(id)arg1 didNotFinishWithReason:(id)arg2;
- (void)connectFBPageFlow:(id)arg1 didFinishWithResult:(id)arg2;
- (void)businessSignUpNamePasswordViewController:(id)arg1 didSignUpWithBusinessFullname:(id)arg2 password:(id)arg3 suggestedUsernames:(id)arg4;
- (void)businessSignUpConfirmationCodeViewController:(id)arg1 didTapNextWithConfirmationCode:(id)arg2;
- (void)businessSignUpContactPointViewControllerDidDismiss:(id)arg1;
- (void)businessSignUpContactPointViewController:(id)arg1 didTapNextWithEmail:(id)arg2 suggestedUsernames:(id)arg3 isGDPRRequired:(_Bool)arg4 tosVersion:(id)arg5;
- (void)businessSignUpContactPointViewController:(id)arg1 didTapNextWithPhoneNumber:(id)arg2 countryCode:(id)arg3 isAutoConfirmed:(_Bool)arg4 verificationCode:(id)arg5 isGDPRRequired:(_Bool)arg6 tosVersion:(id)arg7;
- (void)start;
- (id)initWithFlowPresenter:(id)arg1 userSession:(id)arg2 logger:(id)arg3 prefillInfo:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

