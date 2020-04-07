//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/DBFILEACTIVITYSTREAMActivity.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBFILEACTIVITYSTREAMFileActivityStreamAccessType, NSArray, NSString;

@interface DBFILEACTIVITYSTREAMSharedContentInviteActivity : DBFILEACTIVITYSTREAMActivity <DBSerializable, NSCopying>
{
    NSArray *_sharedEmails;
    NSArray *_sharedGroups;
    NSArray *_sharedUsers;
    DBFILEACTIVITYSTREAMFileActivityStreamAccessType *_accessType;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) DBFILEACTIVITYSTREAMFileActivityStreamAccessType *accessType; // @synthesize accessType=_accessType;
@property(readonly, nonatomic) NSArray *sharedUsers; // @synthesize sharedUsers=_sharedUsers;
@property(readonly, nonatomic) NSArray *sharedGroups; // @synthesize sharedGroups=_sharedGroups;
@property(readonly, nonatomic) NSArray *sharedEmails; // @synthesize sharedEmails=_sharedEmails;
- (void).cxx_destruct;
- (_Bool)isEqualToSharedContentInviteActivity:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithId_:(id)arg1 timestamp:(id)arg2 user:(id)arg3 sharedEmails:(id)arg4 sharedGroups:(id)arg5 sharedUsers:(id)arg6 accessType:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
