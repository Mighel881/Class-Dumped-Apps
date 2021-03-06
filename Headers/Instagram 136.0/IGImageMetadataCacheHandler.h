//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBTimer, IGImageService, IGUserSession, NSDate;
@protocol IGImageMetadataCacheHandlerDelegate, OS_dispatch_queue;

@interface IGImageMetadataCacheHandler : NSObject
{
    IGImageService *_imageService;
    long long _imageDiskLoggingMetadataCount;
    double _imageDiskLoggingInterval;
    FBTimer *_timer;
    IGUserSession *_userSession;
    long long _maxFootprintLoggingCount;
    double _footprintLoggingInterval;
    NSDate *_lastFootprintLoggedTime;
    long long _footprintLogCounter;
    NSObject<OS_dispatch_queue> *_timerQueue;
    id <IGImageMetadataCacheHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGImageMetadataCacheHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_logEvent:(id)arg1 module:(id)arg2 viewControllerName:(id)arg3 imageMetadata:(id)arg4;
- (void)_logFootprintWithModule:(id)arg1 viewControllerName:(id)arg2 time:(id)arg3;
- (void)_handleCacheTimerInterval;
- (void)updateUserSession:(id)arg1;
- (void)logMemoryWarningImageInfo:(id)arg1 topViewControllerName:(id)arg2;
- (void)logOOMImageInfo:(id)arg1 topViewControllerName:(id)arg2;
- (void)start;
- (id)initWithImageService:(id)arg1 imageDiskLoggingMetadataCount:(long long)arg2 imageDiskLoggingInterval:(double)arg3 footprintLoggingCount:(long long)arg4 footprintLoggingInterval:(double)arg5 userSession:(id)arg6;

@end

