//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLoginLogoutHandler-Protocol.h"
#import "SPTLoginService-Protocol.h"
#import "SPTPageRegistryObserver-Protocol.h"
#import "SPTPreSignupExperimentationFeatureFlagsLoaderDelegate-Protocol.h"

@class NSError, NSString, SPTAllocationContext, SPTAuthenticationHandler, SPTDynamicSignupFlowController, SPTLoginAttemptLogger, SPTLoginDbManager, SPTLoginDelayedSignupAccountCreator, SPTLoginDelayedSignupAccountSwitcher, SPTLoginDialogController, SPTLoginErrorDecorator, SPTLoginFeatureNavigationCoordinator, SPTLoginKeychainManagerImplementation, SPTLoginLogoutAwaiter, SPTLoginNavigationRouter, SPTLoginSlideUpModalPresenter, SPTLoginStateControllerImplementation, SPTObserverManager, SPTSigninWithAppleHandler, SPTSignupAttemptTrackerImplementation;
@protocol SPTContainerService, SPTContainerUIService, SPTCoreService, SPTCrashReporterService, SPTFacebookIntegrationService, SPTGLUEService, SPTLoginLoggingService, SPTNetworkService, SPTPreSignupExperimentationFeatureFlags, SPTPreSignupExperimentationFeatureFlagsLoader, SPTPreSignupExperimentationService, SPTServiceManagerService, SPTUBIService, SPTURIDispatchService;

@interface SPTLoginServiceImplementation : NSObject <SPTPageRegistryObserver, SPTPreSignupExperimentationFeatureFlagsLoaderDelegate, SPTLoginService, SPTLoginLogoutHandler>
{
    _Bool _logoutAfterShowingLoginView;
    _Bool _userDidAuthenticateWithGuestAccount;
    id <SPTContainerService> _containerService;
    id <SPTGLUEService> _glueService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTServiceManagerService> _serviceManagerService;
    id <SPTPreSignupExperimentationService> _psesService;
    id <SPTCrashReporterService> _crashReporterService;
    id <SPTCoreService> _coreService;
    id <SPTFacebookIntegrationService> _facebookIntegrationService;
    id <SPTNetworkService> _networkService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTLoginLoggingService> _loggerService;
    id <SPTUBIService> _ubiService;
    id <SPTPreSignupExperimentationFeatureFlagsLoader> _flagsLoader;
    id <SPTPreSignupExperimentationFeatureFlags> _featureFlags;
    NSError *_autoLoginError;
    SPTLoginStateControllerImplementation *_loginStateController;
    SPTLoginKeychainManagerImplementation *_keychainManager;
    SPTObserverManager *_observerManager;
    SPTLoginDialogController *_dialogController;
    SPTLoginErrorDecorator *_loginErrorDecorator;
    SPTLoginLogoutAwaiter *_logoutAwaiter;
    SPTLoginAttemptLogger *_loginAttemptLogger;
    SPTLoginDelayedSignupAccountCreator *_guestAccountCreator;
    SPTLoginNavigationRouter *_loginNavigationRouter;
    SPTLoginDelayedSignupAccountSwitcher *_accountSwitcher;
    SPTAuthenticationHandler *_authenticationHandler;
    SPTLoginSlideUpModalPresenter *_slideUpModalPresenter;
    SPTLoginFeatureNavigationCoordinator *_navigationCoordinator;
    SPTSigninWithAppleHandler *_siaHandler;
    SPTSignupAttemptTrackerImplementation *_signupAttemptTracker;
    SPTDynamicSignupFlowController *_flowController;
    SPTLoginDbManager *_stickyCredentialsDbManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTLoginDbManager *stickyCredentialsDbManager; // @synthesize stickyCredentialsDbManager=_stickyCredentialsDbManager;
@property(retain, nonatomic) SPTDynamicSignupFlowController *flowController; // @synthesize flowController=_flowController;
@property(retain, nonatomic) SPTSignupAttemptTrackerImplementation *signupAttemptTracker; // @synthesize signupAttemptTracker=_signupAttemptTracker;
@property(retain, nonatomic) SPTSigninWithAppleHandler *siaHandler; // @synthesize siaHandler=_siaHandler;
@property(retain, nonatomic) SPTLoginFeatureNavigationCoordinator *navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
@property(retain, nonatomic) SPTLoginSlideUpModalPresenter *slideUpModalPresenter; // @synthesize slideUpModalPresenter=_slideUpModalPresenter;
@property(retain, nonatomic) SPTAuthenticationHandler *authenticationHandler; // @synthesize authenticationHandler=_authenticationHandler;
@property(retain, nonatomic) SPTLoginDelayedSignupAccountSwitcher *accountSwitcher; // @synthesize accountSwitcher=_accountSwitcher;
@property(retain, nonatomic) SPTLoginNavigationRouter *loginNavigationRouter; // @synthesize loginNavigationRouter=_loginNavigationRouter;
@property(nonatomic) _Bool userDidAuthenticateWithGuestAccount; // @synthesize userDidAuthenticateWithGuestAccount=_userDidAuthenticateWithGuestAccount;
@property(nonatomic) _Bool logoutAfterShowingLoginView; // @synthesize logoutAfterShowingLoginView=_logoutAfterShowingLoginView;
@property(retain, nonatomic) SPTLoginDelayedSignupAccountCreator *guestAccountCreator; // @synthesize guestAccountCreator=_guestAccountCreator;
@property(retain, nonatomic) SPTLoginAttemptLogger *loginAttemptLogger; // @synthesize loginAttemptLogger=_loginAttemptLogger;
@property(retain, nonatomic) SPTLoginLogoutAwaiter *logoutAwaiter; // @synthesize logoutAwaiter=_logoutAwaiter;
@property(retain, nonatomic) SPTLoginErrorDecorator *loginErrorDecorator; // @synthesize loginErrorDecorator=_loginErrorDecorator;
@property(retain, nonatomic) SPTLoginDialogController *dialogController; // @synthesize dialogController=_dialogController;
@property(retain, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) SPTLoginKeychainManagerImplementation *keychainManager; // @synthesize keychainManager=_keychainManager;
@property(retain, nonatomic) SPTLoginStateControllerImplementation *loginStateController; // @synthesize loginStateController=_loginStateController;
@property(retain, nonatomic) NSError *autoLoginError; // @synthesize autoLoginError=_autoLoginError;
@property(retain, nonatomic) id <SPTPreSignupExperimentationFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(retain, nonatomic) id <SPTPreSignupExperimentationFeatureFlagsLoader> flagsLoader; // @synthesize flagsLoader=_flagsLoader;
@property(nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <SPTLoginLoggingService> loggerService; // @synthesize loggerService=_loggerService;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTFacebookIntegrationService> facebookIntegrationService; // @synthesize facebookIntegrationService=_facebookIntegrationService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTCrashReporterService> crashReporterService; // @synthesize crashReporterService=_crashReporterService;
@property(nonatomic) __weak id <SPTPreSignupExperimentationService> psesService; // @synthesize psesService=_psesService;
@property(nonatomic) __weak id <SPTServiceManagerService> serviceManagerService; // @synthesize serviceManagerService=_serviceManagerService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)provideWelcomeViewControllerWithTheme:(id)arg1 mainViewLoader:(id)arg2 loginStateController:(id)arg3 performanceLogging:(id)arg4 phoneNumberEnabled:(_Bool)arg5;
- (void)refreshStickyCredentialsDatabaseManager;
- (id)provideStickyCredentialsDbManager;
- (id)provideAppleAuthController;
- (id)provideFacebookAuthController:(id)arg1;
- (id)provideAccountSwitcher;
- (id)provideNavigationRouter;
- (id)provideDynamicFlowController;
- (id)provideAuthenticationHandler;
- (id)loginFailureHandler;
- (id)mainViewLoader;
- (id)provideContinueWithEmailViewController;
- (id)provideIntentLedStartViewControllerForURI:(id)arg1 context:(id)arg2;
- (id)provideMethodLedStartViewControllerForURI:(id)arg1 context:(id)arg2;
- (id)provideWelcomeViewController;
- (id)provideLoginViewControllerForURI:(id)arg1 context:(id)arg2;
- (id)provideMagicLinkSentConfirmationViewControllerForURI:(id)arg1 context:(id)arg2;
- (id)provideMagicLinkDoRequestViewControllerForURI:(id)arg1 context:(id)arg2;
- (void)registerContinueWithEmailViewController;
- (void)registerMagicLinkSentConfirmationViewController;
- (void)registerMagicLinkDoRequestViewController;
- (void)registerLoginViewController;
- (void)registerIntentLedStartViewController;
- (void)registerMethodLedStartViewController;
- (void)registerWelcomeViewController;
- (void)registerViewControllers;
- (void)showLoginView;
- (void)disableForceOfflineModeOnLoginFlow;
- (void)loginWithGuestCredentials:(id)arg1;
- (_Bool)isEligibleForGuestAccountExperience;
- (void)createGuestAccountOrShowLoginView;
- (id)provideLoginKeychainManagerImpl;
- (void)featureFlagsLoaderDidFailToLoadFeatureFlags:(id)arg1;
- (void)featureFlagsLoader:(id)arg1 didLoadFeatureFlags:(id)arg2;
- (void)loadFeatureFlags;
- (void)tryToLoginAutomaticallyWithCredentials:(id)arg1 loginOptions:(id)arg2;
- (void)loginWithCredentials:(id)arg1 loginOptions:(id)arg2;
- (void)tryStoredCredentials:(id)arg1 loginOptions:(id)arg2;
- (void)tryToLoginAutomatically;
- (void)pageRegistryDidUnregisterFeaturePages:(id)arg1;
- (id)provideSignupAttemptTracker;
- (id)provideCredentialSource;
- (id)provideNavigationCoordinator;
- (void)didLoginWithPhoneNumber;
- (void)logoutWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)provideSlideUpModalPresenter;
- (id)provideLogoutHandler;
- (id)provideKeychainManager;
- (id)provideLoginStateControllerImplementation;
- (id)provideLoginStateController;
- (id)provideDialogController;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

