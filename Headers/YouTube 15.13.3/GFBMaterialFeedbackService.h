//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/FKFeedbackService.h>

@class GFBFeedbackReportUploader, MDCAppBar, SUPMetricsReporter, SUPReceiverConfig;
@protocol SUPAuthManager;

@interface GFBMaterialFeedbackService : FKFeedbackService
{
    GFBFeedbackReportUploader *_uploader;
    SUPReceiverConfig *_receiverConfig;
    SUPMetricsReporter *_metricsReporter;
    id <SUPAuthManager> _authManager;
    MDCAppBar *_appBar;
}

@property(retain, nonatomic) MDCAppBar *appBar; // @synthesize appBar=_appBar;
@property(retain, nonatomic) id <SUPAuthManager> authManager; // @synthesize authManager=_authManager;
@property(retain, nonatomic) SUPMetricsReporter *metricsReporter; // @synthesize metricsReporter=_metricsReporter;
@property(retain, nonatomic) SUPReceiverConfig *receiverConfig; // @synthesize receiverConfig=_receiverConfig;
@property(retain, nonatomic) GFBFeedbackReportUploader *uploader; // @synthesize uploader=_uploader;
- (void).cxx_destruct;
- (id)feedbackReportForConfiguration:(id)arg1 type:(unsigned long long)arg2 isSilent:(_Bool)arg3;
- (void)clearCachedData;
- (void)uploadSilentReportWithDescription:(id)arg1;
- (void)uploadCrashReportWithData:(id)arg1;
- (void)synchronizeWithGoogleFeedback;
- (id)createViewController;

@end
