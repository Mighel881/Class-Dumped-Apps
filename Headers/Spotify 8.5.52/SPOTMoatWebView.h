//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIWebViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, SPOTMoatUIWebViewBridge, UIView, UIWebView;

@interface SPOTMoatWebView : NSObject <UIWebViewDelegate>
{
    _Bool _webViewDidLoad;
    _Bool _amITracking;
    _Bool _amCleanedUp;
    _Bool _initialized;
    UIWebView *_moatWebView;
    double _wLoadStart;
    NSMutableDictionary *_adParams;
    NSString *_moatTrackerName;
    UIView *_attachmentView;
    NSMutableArray *_queuedCalls;
    SPOTMoatUIWebViewBridge *_delegateDecorator;
}

+ (id)withPartnerCode:(id)arg1;
@property(retain) SPOTMoatUIWebViewBridge *delegateDecorator; // @synthesize delegateDecorator=_delegateDecorator;
@property(retain) NSMutableArray *queuedCalls; // @synthesize queuedCalls=_queuedCalls;
@property __weak UIView *attachmentView; // @synthesize attachmentView=_attachmentView;
@property(retain) NSString *moatTrackerName; // @synthesize moatTrackerName=_moatTrackerName;
@property(retain) NSMutableDictionary *adParams; // @synthesize adParams=_adParams;
@property double wLoadStart; // @synthesize wLoadStart=_wLoadStart;
@property _Bool initialized; // @synthesize initialized=_initialized;
@property _Bool amCleanedUp; // @synthesize amCleanedUp=_amCleanedUp;
@property _Bool amITracking; // @synthesize amITracking=_amITracking;
@property _Bool webViewDidLoad; // @synthesize webViewDidLoad=_webViewDidLoad;
@property(retain) UIWebView *moatWebView; // @synthesize moatWebView=_moatWebView;
- (void).cxx_destruct;
- (void)changeAttachmentView:(id)arg1 newTargetLayer:(id)arg2 becauseFullScreen:(_Bool)arg3;
- (void)changeTargetLayer:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)flushQueue;
- (void)queueEvent:(id)arg1;
- (void)dispatchEvent:(id)arg1;
- (id)serializeEvent:(id)arg1;
- (id)checkAndFormatEvent:(id)arg1;
- (void)vivifyWebView;
- (void)destroy;
- (void)prepareWebView;
- (void)startTracking:(id)arg1 withPlayerDims:(struct CGRect)arg2 withAttachmentView:(id)arg3 withLayerToTrack:(id)arg4;
- (void)doInit:(id)arg1;
- (id)initWithPartnerCode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

