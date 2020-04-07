//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBSHARINGAlphaFileAction, DBSHARINGPermissionDeniedReason, NSNumber, NSString;

@interface DBSHARINGAlphaFilePermission : NSObject <DBSerializable, NSCopying>
{
    DBSHARINGAlphaFileAction *_action;
    NSNumber *_allow;
    DBSHARINGPermissionDeniedReason *_reason;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) DBSHARINGPermissionDeniedReason *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) NSNumber *allow; // @synthesize allow=_allow;
@property(readonly, nonatomic) DBSHARINGAlphaFileAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (_Bool)isEqualToAlphaFilePermission:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithAction:(id)arg1 allow:(id)arg2;
- (id)initWithAction:(id)arg1 allow:(id)arg2 reason:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
