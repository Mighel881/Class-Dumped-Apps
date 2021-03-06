//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASTAvocadoFlowControllerDelegate-Protocol.h"
#import "ASTPersonalResultsFlowControllerDelegate-Protocol.h"
#import "ASTSpeakerIDEnrollmentFlowControllerDelegate-Protocol.h"

@class ASTAvocadoFlowController, ASTAvocadoFlowResult, ASTAvocadoSettingsFlowParameters, ASTPersonalResultsFlowController, ASTSettingsMenuService, ASTSpeakerIDEnrollmentFlowController, NSArray, NSString, UINavigationController;
@protocol ASTSettingsUIController;

@interface ASTAvocadoSettingsFlowCoordinator : NSObject <ASTSpeakerIDEnrollmentFlowControllerDelegate, ASTAvocadoFlowControllerDelegate, ASTPersonalResultsFlowControllerDelegate>
{
    ASTSettingsMenuService *_settingsService;
    id <ASTSettingsUIController> _uiController;
    ASTAvocadoSettingsFlowParameters *_parameters;
    CDUnknownBlockType _completion;
    ASTSpeakerIDEnrollmentFlowController *_speakerIdFlowController;
    NSArray *_speakerIdFlowResultDeviceIDs;
    ASTAvocadoFlowController *_avocadoFlowController;
    ASTAvocadoFlowResult *_avocadoFlowResult;
    ASTPersonalResultsFlowController *_personalResultsFlowController;
    UINavigationController *_navigationController;
}

- (void).cxx_destruct;
- (void)personalResultsFlowController:(id)arg1 didFinishWithPresentedNavigationController:(id)arg2;
- (void)avocadoFlowController:(id)arg1 didStartWithNavigationControllerToPresent:(id)arg2;
- (void)avocadoFlowController:(id)arg1 didFinishWithPresentedNavigationController:(id)arg2 result:(id)arg3;
- (void)speakerIDEnrollmentFlowController:(id)arg1 didFinishWithPresentedNavigationController:(id)arg2 enrolledDeviceIDs:(id)arg3;
- (void)speakerIDEnrollmentFlowController:(id)arg1 didCancelWithPresentedNavigationController:(id)arg2;
- (void)speakerIDEnrollmentFlowController:(id)arg1 didStartWithNavigationControllerToPresent:(id)arg2;
- (_Bool)isNavigationControllerPresented;
- (void)startPersonalResultsFlow;
- (void)startAvocadoFlow;
- (void)startSpeakerIdFlowWithSettings:(id)arg1;
- (_Bool)checkAppDeviceIDs:(id)arg1 speakerIDEnabledInSettings:(id)arg2;
- (void)fetchDeviceSettingsWithCompletion:(CDUnknownBlockType)arg1;
- (void)finish;
- (void)startWithDeviceSettings:(id)arg1;
- (void)start;
- (id)initWithSettingsService:(id)arg1 navigationController:(id)arg2 parameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithSettingsService:(id)arg1 uiController:(id)arg2 parameters:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

