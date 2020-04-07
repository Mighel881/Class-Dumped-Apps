//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface DBVAULTGetMetadataResult : NSObject <DBSerializable, NSCopying>
{
    NSNumber *_isLocked;
    NSNumber *_hasPassword;
    NSNumber *_lockExpirationTimestamp;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) NSNumber *lockExpirationTimestamp; // @synthesize lockExpirationTimestamp=_lockExpirationTimestamp;
@property(readonly, nonatomic) NSNumber *hasPassword; // @synthesize hasPassword=_hasPassword;
@property(readonly, nonatomic) NSNumber *isLocked; // @synthesize isLocked=_isLocked;
- (void).cxx_destruct;
- (_Bool)isEqualToGetMetadataResult:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initDefault;
- (id)initWithIsLocked:(id)arg1 hasPassword:(id)arg2 lockExpirationTimestamp:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
