//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ASTDeviceUtilities : NSObject
{
}

+ (void)updateDeviceLocation:(id)arg1 deviceID:(id)arg2 deviceType:(int)arg3 placeID:(id)arg4 coordinate:(struct CLLocationCoordinate2D)arg5 deviceSettings:(id)arg6 settingsService:(id)arg7 callback:(CDUnknownBlockType)arg8;
+ (void)didTapRemoveDeviceAddressButtonWithTarget:(id)arg1 action:(CDUnknownBlockType)arg2;
+ (void)updateAddressItem:(id)arg1 withRemoveButton:(id)arg2 withAddress:(id)arg3;
+ (id)unlinkDeviceItem;
+ (void)popUpUnlinkDeviceDialogWithTarget:(id)arg1 action:(CDUnknownBlockType)arg2 voiceMatchEnrolled:(_Bool)arg3;
+ (void)popUpUnlinkDeviceDialogWithTarget:(id)arg1 action:(CDUnknownBlockType)arg2;

@end

