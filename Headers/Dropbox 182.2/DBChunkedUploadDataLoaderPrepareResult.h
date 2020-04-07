//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol DBCrossAppLockProtocol;

@interface DBChunkedUploadDataLoaderPrepareResult : NSObject
{
    NSString *_sourceFileName;
    NSString *_bufferFileName;
    unsigned long long _sourceFileSize;
    NSString *_contentFileName;
    id <DBCrossAppLockProtocol> _lock;
}

@property(readonly, nonatomic) id <DBCrossAppLockProtocol> lock; // @synthesize lock=_lock;
@property(readonly, copy, nonatomic) NSString *contentFileName; // @synthesize contentFileName=_contentFileName;
@property(readonly, nonatomic) unsigned long long sourceFileSize; // @synthesize sourceFileSize=_sourceFileSize;
@property(readonly, copy, nonatomic) NSString *bufferFileName; // @synthesize bufferFileName=_bufferFileName;
@property(readonly, copy, nonatomic) NSString *sourceFileName; // @synthesize sourceFileName=_sourceFileName;
- (void).cxx_destruct;
- (id)initWithSourceFileName:(id)arg1 bufferFileName:(id)arg2 sourceFileSize:(unsigned long long)arg3 contentFileName:(id)arg4 lock:(id)arg5;

@end
