//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGAmebaAuthDelegate-Protocol.h>
#import <FBSharedFramework/IGAmebaThemesDelegate-Protocol.h>
#import <FBSharedFramework/IGServiceHelperProtocol-Protocol.h>

@class IGUserDefaults, IGUserSession, NSDictionary, NSString;
@protocol IGAPIClient;

@interface IGAmebaHelper : NSObject <IGAmebaAuthDelegate, IGAmebaThemesDelegate, IGServiceHelperProtocol>
{
    _Bool _isAvailableForSharing;
    _Bool _wantsToShare;
    _Bool _disabled;
    IGUserDefaults *_sessionUserDefaults;
    id <IGAPIClient> _networker;
    IGUserSession *_userSession;
    NSString *_accessToken;
    NSDictionary *_currentThemeSetting;
    NSString *_username;
    NSString *_refreshToken;
}

+ (id)shortServiceName;
+ (id)sharedHelperForUserSession:(id)arg1;
@property(copy, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSDictionary *currentThemeSetting; // @synthesize currentThemeSetting=_currentThemeSetting;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
@property(retain, nonatomic) IGUserDefaults *sessionUserDefaults; // @synthesize sessionUserDefaults=_sessionUserDefaults;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) _Bool wantsToShare; // @synthesize wantsToShare=_wantsToShare;
@property(nonatomic) _Bool isAvailableForSharing; // @synthesize isAvailableForSharing=_isAvailableForSharing;
- (void).cxx_destruct;
- (void)_setCurrentUsername:(id)arg1;
- (void)_setAccessAndRefreshToken:(id)arg1 expirationInSeconds:(int)arg2 refreshToken:(id)arg3;
- (void)_reauthorizationNeedsLogin;
- (void)_fetchTokenFinished:(id)arg1;
- (void)_onFetchTokenFailed;
- (void)_reauthorize;
- (void)themesViewController:(id)arg1 didSelectTheme:(id)arg2;
- (void)amebaAuthControllerLoginFailed:(id)arg1;
- (void)amebaAuthController:(id)arg1 didLoginWithCode:(id)arg2;
- (_Bool)_hasEverBeenConfigured;
- (id)viewControllerForAdvancedOptionsWithUserSession:(id)arg1;
- (id)sharingInfo;
- (void)setupServerLinkage:(id)arg1;
- (_Bool)needsToReauthorize;
- (void)reauthorizeIfNeeded;
- (_Bool)requiresLocationCoordinate;
- (_Bool)supportsMediaType:(long long)arg1;
- (_Bool)isAvailableInCurrentLocale;
- (id)detailText;
- (_Bool)isConfiguredForCrossPosting;
- (_Bool)shouldUseSubtitleCellStyle;
- (_Bool)hidden;
- (_Bool)isConfiguredOnlyOnServer;
- (_Bool)isConfigured;
- (void)logoutAndUnlink;
- (void)logout;
@property(readonly, nonatomic) NSString *authURLString;
@property(readonly, nonatomic) NSString *callbackURLString;
@property(readonly, nonatomic) NSString *clientID;
- (id)shareKey;
- (id)serviceName;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

