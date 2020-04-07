//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBSHARINGRelinquishFolderMembershipError, DBSHARINGRemoveFolderMemberError, DBSHARINGUnshareFolderError, NSString;

@interface DBSHARINGJobError : NSObject <DBSerializable, NSCopying>
{
    DBSHARINGUnshareFolderError *_unshareFolderError;
    DBSHARINGRemoveFolderMemberError *_removeFolderMemberError;
    DBSHARINGRelinquishFolderMembershipError *_relinquishFolderMembershipError;
    long long _tag;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (_Bool)isEqualToJobError:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)tagName;
- (_Bool)isOther;
- (_Bool)isRelinquishFolderMembershipError;
- (_Bool)isRemoveFolderMemberError;
- (_Bool)isUnshareFolderError;
@property(readonly, nonatomic) DBSHARINGRelinquishFolderMembershipError *relinquishFolderMembershipError; // @synthesize relinquishFolderMembershipError=_relinquishFolderMembershipError;
@property(readonly, nonatomic) DBSHARINGRemoveFolderMemberError *removeFolderMemberError; // @synthesize removeFolderMemberError=_removeFolderMemberError;
@property(readonly, nonatomic) DBSHARINGUnshareFolderError *unshareFolderError; // @synthesize unshareFolderError=_unshareFolderError;
- (id)initWithOther;
- (id)initWithRelinquishFolderMembershipError:(id)arg1;
- (id)initWithRemoveFolderMemberError:(id)arg1;
- (id)initWithUnshareFolderError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
