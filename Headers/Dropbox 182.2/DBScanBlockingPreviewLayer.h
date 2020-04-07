//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import "DBScanAVManagerPreviewLayer-Protocol.h"

@class DBAVSampleBufferDisplayLayer, DBScanAVManager, NSString;

@interface DBScanBlockingPreviewLayer : CALayer <DBScanAVManagerPreviewLayer>
{
    DBScanAVManager *_avManager;
    DBAVSampleBufferDisplayLayer *_sampleBufferDisplayLayer;
}

@property(readonly, nonatomic) DBAVSampleBufferDisplayLayer *sampleBufferDisplayLayer; // @synthesize sampleBufferDisplayLayer=_sampleBufferDisplayLayer;
- (void).cxx_destruct;
- (void)test_overrideSampleBufferDisplayLayer:(id)arg1;
- (void)layoutSublayers;
@property(nonatomic) long long videoOrientation;
@property(copy) NSString *videoGravity;
- (struct CGPoint)captureDevicePointOfInterestForPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointForCaptureDevicePointOfInterest:(struct CGPoint)arg1;
- (void)dealloc;
- (void)db_initLayerWithAVManager:(id)arg1;
- (void)reinitialize;
- (id)initWithAVManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
