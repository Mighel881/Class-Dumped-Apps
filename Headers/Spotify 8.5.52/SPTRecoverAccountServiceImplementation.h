//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRecoverAccountService-Protocol.h"

@class NSString, SPTAllocationContext, SPTRecoverAccountURIHandler;
@protocol SPTContainerService, SPTGLUEService, SPTLoginLoggingService, SPTLoginService, SPTPreSignupExperimentationService, SPTServiceManagerService, SPTURIDispatchService;

@interface SPTRecoverAccountServiceImplementation : NSObject <SPTRecoverAccountService>
{
    id <SPTContainerService> _containerService;
    id <SPTGLUEService> _glueService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTLoginService> _loginService;
    id <SPTServiceManagerService> _serviceManagerService;
    id <SPTPreSignupExperimentationService> _experimentationService;
    id <SPTLoginLoggingService> _loggerService;
    SPTRecoverAccountURIHandler *_recoverAccountURIHandler;
    NSString *_usernameOrEmail;
}

+ (id)serviceIdentifier;
@property(copy, nonatomic) NSString *usernameOrEmail; // @synthesize usernameOrEmail=_usernameOrEmail;
@property(retain, nonatomic) SPTRecoverAccountURIHandler *recoverAccountURIHandler; // @synthesize recoverAccountURIHandler=_recoverAccountURIHandler;
@property(nonatomic) __weak id <SPTLoginLoggingService> loggerService; // @synthesize loggerService=_loggerService;
@property(nonatomic) __weak id <SPTPreSignupExperimentationService> experimentationService; // @synthesize experimentationService=_experimentationService;
@property(nonatomic) __weak id <SPTServiceManagerService> serviceManagerService; // @synthesize serviceManagerService=_serviceManagerService;
@property(nonatomic) __weak id <SPTLoginService> loginService; // @synthesize loginService=_loginService;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (void)handleDidSendLoginLinkNotification:(id)arg1;
- (id)provideLinkErrorHandler;
- (id)provideAuthenticationHandler;
- (id)usernameOrEmailForLoginLink;
- (id)provideURIHandler;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
