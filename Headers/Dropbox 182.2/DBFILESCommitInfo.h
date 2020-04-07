//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBFILESFswRequest, DBFILESWriteMode, NSArray, NSDate, NSNumber, NSString;

@interface DBFILESCommitInfo : NSObject <DBSerializable, NSCopying>
{
    NSString *_path;
    DBFILESWriteMode *_mode;
    NSNumber *_autorename;
    NSDate *_clientModified;
    NSNumber *_mute;
    NSArray *_propertyGroups;
    NSNumber *_strictConflict;
    DBFILESFswRequest *_fswRequest;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) DBFILESFswRequest *fswRequest; // @synthesize fswRequest=_fswRequest;
@property(readonly, nonatomic) NSNumber *strictConflict; // @synthesize strictConflict=_strictConflict;
@property(readonly, nonatomic) NSArray *propertyGroups; // @synthesize propertyGroups=_propertyGroups;
@property(readonly, nonatomic) NSNumber *mute; // @synthesize mute=_mute;
@property(readonly, nonatomic) NSDate *clientModified; // @synthesize clientModified=_clientModified;
@property(readonly, nonatomic) NSNumber *autorename; // @synthesize autorename=_autorename;
@property(readonly, nonatomic) DBFILESWriteMode *mode; // @synthesize mode=_mode;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (_Bool)isEqualToCommitInfo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 mode:(id)arg2 autorename:(id)arg3 clientModified:(id)arg4 mute:(id)arg5 propertyGroups:(id)arg6 strictConflict:(id)arg7 fswRequest:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
