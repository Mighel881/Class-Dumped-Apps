//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEVoiceEnrollmentCoordinator-Protocol.h"
#import "HMEVoiceEnrollmentCoordinatorDelegate-Protocol.h"

@class AnalyticsEvent, NSString;
@protocol AnalyticsLogger, HMEVoiceEnrollmentCoordinator, HMEVoiceEnrollmentCoordinatorDelegate;

@interface HMEVoiceEnrollmentAnalyticsDecorator : NSObject <HMEVoiceEnrollmentCoordinatorDelegate, HMEVoiceEnrollmentCoordinator>
{
    id <HMEVoiceEnrollmentCoordinatorDelegate> _delegate;
    id <HMEVoiceEnrollmentCoordinator> _coordinator;
    id <AnalyticsLogger> _analyticsLogger;
    long long _context;
    AnalyticsEvent *_voiceEnrollFinishedEvent;
}

@property(retain, nonatomic) AnalyticsEvent *voiceEnrollFinishedEvent; // @synthesize voiceEnrollFinishedEvent=_voiceEnrollFinishedEvent;
@property(readonly, nonatomic) long long context; // @synthesize context=_context;
@property(readonly, nonatomic) id <AnalyticsLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(readonly, nonatomic) id <HMEVoiceEnrollmentCoordinator> coordinator; // @synthesize coordinator=_coordinator;
@property(nonatomic) __weak id <HMEVoiceEnrollmentCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)convertContext;
- (void)logVoiceEnrollFinishedWithResult:(long long)arg1;
- (void)logVoiceEnrollStarted;
- (void)enrollmentCompleted:(id)arg1;
- (void)enrollmentSkipped:(id)arg1;
- (void)enrollment:(id)arg1 failedWithError:(id)arg2;
- (void)enrollment:(id)arg1 isBusy:(_Bool)arg2;
- (void)enrollManagerWithDevices:(id)arg1 inNavigationController:(id)arg2;
- (void)enrollDevices:(id)arg1 inPresentingViewController:(id)arg2;
- (void)enrollSetupDevice:(id)arg1 voiceEnrollmentSupportedOnDevice:(_Bool)arg2 skipFaceMatch:(_Bool)arg3 assistantLanguageCode:(id)arg4 inNavigationController:(id)arg5;
- (id)initWithCoordinator:(id)arg1 analyticsLogger:(id)arg2 context:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

