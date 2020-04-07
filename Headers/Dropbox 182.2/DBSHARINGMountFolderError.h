//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBSHARINGInsufficientQuotaAmounts, DBSHARINGSharedFolderAccessError, NSString;

@interface DBSHARINGMountFolderError : NSObject <DBSerializable, NSCopying>
{
    DBSHARINGSharedFolderAccessError *_accessError;
    DBSHARINGInsufficientQuotaAmounts *_insufficientQuota;
    long long _tag;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (_Bool)isEqualToMountFolderError:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)tagName;
- (_Bool)isOther;
- (_Bool)isNotMountable;
- (_Bool)isNoPermission;
- (_Bool)isAlreadyMounted;
- (_Bool)isInsufficientQuota;
- (_Bool)isInsideSharedFolder;
- (_Bool)isAccessError;
@property(readonly, nonatomic) DBSHARINGInsufficientQuotaAmounts *insufficientQuota; // @synthesize insufficientQuota=_insufficientQuota;
@property(readonly, nonatomic) DBSHARINGSharedFolderAccessError *accessError; // @synthesize accessError=_accessError;
- (id)initWithOther;
- (id)initWithNotMountable;
- (id)initWithNoPermission;
- (id)initWithAlreadyMounted;
- (id)initWithInsufficientQuota:(id)arg1;
- (id)initWithInsideSharedFolder;
- (id)initWithAccessError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
