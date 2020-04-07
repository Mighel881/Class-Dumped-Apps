//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface DBSECURITYSETTINGSUnlinkDevicesArg : NSObject <DBSerializable, NSCopying>
{
    NSArray *_mobileDevices;
    NSArray *_desktopHosts;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) NSArray *desktopHosts; // @synthesize desktopHosts=_desktopHosts;
@property(readonly, nonatomic) NSArray *mobileDevices; // @synthesize mobileDevices=_mobileDevices;
- (void).cxx_destruct;
- (_Bool)isEqualToUnlinkDevicesArg:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initDefault;
- (id)initWithMobileDevices:(id)arg1 desktopHosts:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
