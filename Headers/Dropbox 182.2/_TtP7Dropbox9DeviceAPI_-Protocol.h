//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray;

@protocol _TtP7Dropbox9DeviceAPI_
- (void)unlinkWithMobileDeviceIds:(NSArray *)arg1 desktopDeviceIds:(NSArray *)arg2 completion:(void (^)(DBRequestError *))arg3;
- (void)getLinkedDevicesWithCompletion:(void (^)(_TtC7Dropbox19LinkedDevicesResult *, DBRequestError *))arg1;
- (void)checkDeviceLimitsWithCompletion:(void (^)(_TtC7Dropbox18DeviceLimitsResult *, DBRequestError *))arg1;
@end
