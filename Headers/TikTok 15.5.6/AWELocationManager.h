//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWELocationModel;
@protocol OS_dispatch_source;

@interface AWELocationManager : NSObject
{
    AWELocationModel *_location;
    NSObject<OS_dispatch_source> *_uploadTimer;
}

+ (void)willRequest:(id)arg1;
+ (id)uploadLocationPaths;
+ (_Bool)enableLocationUploadChecker;
+ (void)startUploadLocationLoopImp;
+ (void)showLocationRequestAlertWithResultBlock:(CDUnknownBlockType)arg1 cancelBlock:(CDUnknownBlockType)arg2;
+ (void)hideLocation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)presentLocationPickerWithModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)updateLocation;
+ (void)updateLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)sharedInstance;
+ (void)load;
+ (void)initialize;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *uploadTimer; // @synthesize uploadTimer=_uploadTimer;
- (void).cxx_destruct;
- (void)startINTUploadLocationLoopImp;
- (void)fetchLocations:(CDUnknownBlockType)arg1;
- (void)requestPermission;
- (void)startUploadLocationChecker;
- (void)dealloc;

@end
