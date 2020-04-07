//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBSHARINGAccessLevel, DBSHARINGMemberSelector, NSString;

@interface DBSHARINGChangeFileMemberAccessArgs : NSObject <DBSerializable, NSCopying>
{
    NSString *_file;
    DBSHARINGMemberSelector *_member;
    DBSHARINGAccessLevel *_accessLevel;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) DBSHARINGAccessLevel *accessLevel; // @synthesize accessLevel=_accessLevel;
@property(readonly, nonatomic) DBSHARINGMemberSelector *member; // @synthesize member=_member;
@property(readonly, copy, nonatomic) NSString *file; // @synthesize file=_file;
- (void).cxx_destruct;
- (_Bool)isEqualToChangeFileMemberAccessArgs:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithFile:(id)arg1 member:(id)arg2 accessLevel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
