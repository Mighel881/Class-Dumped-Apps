//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBFILETRANSFERSFileRole, NSArray, NSString;

@interface DBFILETRANSFERSFileAddByBlockArguments : NSObject <DBSerializable, NSCopying>
{
    NSArray *_tokens;
    NSString *_destinationPath;
    DBFILETRANSFERSFileRole *_role;
    NSString *_localIdentifier;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, copy, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
@property(readonly, nonatomic) DBFILETRANSFERSFileRole *role; // @synthesize role=_role;
@property(readonly, copy, nonatomic) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property(readonly, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
- (void).cxx_destruct;
- (_Bool)isEqualToFileAddByBlockArguments:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initDefault;
- (id)initWithTokens:(id)arg1 destinationPath:(id)arg2 role:(id)arg3 localIdentifier:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

