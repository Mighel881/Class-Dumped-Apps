//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSScribe/TFSScribeEvent-Protocol.h>
#import <TFSScribe/TFSScribeEventSerializer-Protocol.h>

@class NSData, NSDate, NSNumber, NSString;
@protocol NSCoding;

@interface TFSScribeEventContainer : NSObject <TFSScribeEvent, TFSScribeEventSerializer>
{
    NSString *_group;
    NSData *_content;
    id <NSCoding> _metadata;
    NSNumber *_retryCount;
    NSNumber *_rowId;
    NSDate *_timestamp;
}

@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSNumber *rowId; // @synthesize rowId=_rowId;
@property(readonly, nonatomic) NSNumber *retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, nonatomic) id <NSCoding> metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSData *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (_Bool)usesTimestampSequenceNumber;
- (void)setClientEventSequenceStartTimestamp:(long long)arg1 sequenceNumber:(long long)arg2;
@property(readonly, nonatomic) NSString *group; // @synthesize group=_group;
- (id)dictionaryRepresentation;
- (id)data;
- (id)initWithGroup:(id)arg1 content:(id)arg2 metadata:(id)arg3 retryCount:(id)arg4 rowId:(id)arg5 timestamp:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
