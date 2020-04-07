//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/DBFILEACTIVITYSTREAMActivity.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class NSString;

@interface DBFILEACTIVITYSTREAMCommentNewActivity : DBFILEACTIVITYSTREAMActivity <DBSerializable, NSCopying>
{
    NSString *_commentId;
    NSString *_threadId;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, copy, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(readonly, copy, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
- (void).cxx_destruct;
- (_Bool)isEqualToCommentNewActivity:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithId_:(id)arg1 timestamp:(id)arg2 user:(id)arg3;
- (id)initWithId_:(id)arg1 timestamp:(id)arg2 user:(id)arg3 commentId:(id)arg4 threadId:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
