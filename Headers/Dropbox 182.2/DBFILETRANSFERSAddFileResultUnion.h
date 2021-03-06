//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBFILETRANSFERSFileTransfersAddFilesFailure, DBFILETRANSFERSTransferFile, NSString;

@interface DBFILETRANSFERSAddFileResultUnion : NSObject <DBSerializable, NSCopying>
{
    DBFILETRANSFERSFileTransfersAddFilesFailure *_failure;
    DBFILETRANSFERSTransferFile *_file;
    long long _tag;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (_Bool)isEqualToAddFileResultUnion:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)tagName;
- (_Bool)isOther;
- (_Bool)isFile;
- (_Bool)isFailure;
@property(readonly, nonatomic) DBFILETRANSFERSTransferFile *file; // @synthesize file=_file;
@property(readonly, nonatomic) DBFILETRANSFERSFileTransfersAddFilesFailure *failure; // @synthesize failure=_failure;
- (id)initWithOther;
- (id)initWithFile:(id)arg1;
- (id)initWithFailure:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

