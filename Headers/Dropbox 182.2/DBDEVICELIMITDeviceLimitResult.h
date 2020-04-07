//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBDEVICELIMITDeviceLimitExperiments, DBDEVICELIMITDeviceLimitReason, NSNumber, NSString;

@interface DBDEVICELIMITDeviceLimitResult : NSObject <DBSerializable, NSCopying>
{
    NSNumber *_isOverLimit;
    NSNumber *_isDeviceBlocked;
    DBDEVICELIMITDeviceLimitReason *_blockReason;
    NSNumber *_totalUsed;
    NSNumber *_totalLimit;
    NSNumber *_totalUnlimited;
    NSNumber *_mobileUsed;
    NSNumber *_mobileLimit;
    NSNumber *_mobileUnlimited;
    NSNumber *_desktopUsed;
    NSNumber *_desktopLimit;
    NSNumber *_desktopUnlimited;
    DBDEVICELIMITDeviceLimitExperiments *_experiments;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) DBDEVICELIMITDeviceLimitExperiments *experiments; // @synthesize experiments=_experiments;
@property(readonly, nonatomic) NSNumber *desktopUnlimited; // @synthesize desktopUnlimited=_desktopUnlimited;
@property(readonly, nonatomic) NSNumber *desktopLimit; // @synthesize desktopLimit=_desktopLimit;
@property(readonly, nonatomic) NSNumber *desktopUsed; // @synthesize desktopUsed=_desktopUsed;
@property(readonly, nonatomic) NSNumber *mobileUnlimited; // @synthesize mobileUnlimited=_mobileUnlimited;
@property(readonly, nonatomic) NSNumber *mobileLimit; // @synthesize mobileLimit=_mobileLimit;
@property(readonly, nonatomic) NSNumber *mobileUsed; // @synthesize mobileUsed=_mobileUsed;
@property(readonly, nonatomic) NSNumber *totalUnlimited; // @synthesize totalUnlimited=_totalUnlimited;
@property(readonly, nonatomic) NSNumber *totalLimit; // @synthesize totalLimit=_totalLimit;
@property(readonly, nonatomic) NSNumber *totalUsed; // @synthesize totalUsed=_totalUsed;
@property(readonly, nonatomic) DBDEVICELIMITDeviceLimitReason *blockReason; // @synthesize blockReason=_blockReason;
@property(readonly, nonatomic) NSNumber *isDeviceBlocked; // @synthesize isDeviceBlocked=_isDeviceBlocked;
@property(readonly, nonatomic) NSNumber *isOverLimit; // @synthesize isOverLimit=_isOverLimit;
- (void).cxx_destruct;
- (_Bool)isEqualToDeviceLimitResult:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithIsOverLimit:(id)arg1 isDeviceBlocked:(id)arg2 totalUsed:(id)arg3 totalLimit:(id)arg4 totalUnlimited:(id)arg5;
- (id)initWithIsOverLimit:(id)arg1 isDeviceBlocked:(id)arg2 totalUsed:(id)arg3 totalLimit:(id)arg4 totalUnlimited:(id)arg5 blockReason:(id)arg6 mobileUsed:(id)arg7 mobileLimit:(id)arg8 mobileUnlimited:(id)arg9 desktopUsed:(id)arg10 desktopLimit:(id)arg11 desktopUnlimited:(id)arg12 experiments:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
