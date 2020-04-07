//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface DBSHARINGGetFolderSharedContentLinkArg : NSObject <DBSerializable, NSCopying>
{
    NSString *_sharedFolderId;
    NSArray *_members;
    NSNumber *_genEmailLink;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) NSNumber *genEmailLink; // @synthesize genEmailLink=_genEmailLink;
@property(readonly, nonatomic) NSArray *members; // @synthesize members=_members;
@property(readonly, copy, nonatomic) NSString *sharedFolderId; // @synthesize sharedFolderId=_sharedFolderId;
- (void).cxx_destruct;
- (_Bool)isEqualToGetFolderSharedContentLinkArg:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithSharedFolderId:(id)arg1 members:(id)arg2 genEmailLink:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
