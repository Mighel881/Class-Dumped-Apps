//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BDASplashOMTrackDelegate-Protocol.h"

@class NSString;

@interface AWESplashOMSDKTracker : NSObject <BDASplashOMTrackDelegate>
{
}

- (void)trackOMSkipWithParams:(id)arg1 adView:(id)arg2;
- (void)trackOMVideoCompleteWithParams:(id)arg1 adView:(id)arg2;
- (void)trackOMVideoThirdQuartileWithParams:(id)arg1 adView:(id)arg2;
- (void)trackOMVideoMidpointWithParams:(id)arg1 adView:(id)arg2;
- (void)trackOMVideoFirstQuartileWithParams:(id)arg1 adView:(id)arg2;
- (void)trackOMVideoStartWithParams:(id)arg1 adView:(id)arg2;
- (void)trackOMImpressionWithParams:(id)arg1 adView:(id)arg2;
- (id)convertParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
