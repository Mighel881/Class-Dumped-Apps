//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface YTMP4BoxStream : NSObject
{
    NSData *_sourceData;
    char *_ptr;
    long long _readIndex;
    unsigned int _boxSize;
    unsigned int _boxType;
    unsigned long long _errorSource;
}

- (void).cxx_destruct;
- (void)skipContainerHeaderForBoxType:(unsigned int)arg1 error:(id *)arg2;
- (_Bool)peekNextSubBoxHeaderLargeSize:(unsigned long long *)arg1 boxType:(unsigned int *)arg2 error:(id *)arg3;
- (_Bool)readBoxHeaderLargeSize:(unsigned long long *)arg1 boxType:(unsigned int *)arg2 error:(id *)arg3;
- (id)errorWithErrorType:(unsigned long long)arg1 message:(id)arg2;
- (id)errorForStreamRead:(unsigned long long)arg1;
- (id)dataNoCopyOfLength:(unsigned long long)arg1 error:(id *)arg2;
- (id)findBoxesOfType:(unsigned int)arg1 error:(id *)arg2 boxHierarchyChecker:(CDUnknownBlockType)arg3;
- (unsigned long long)offset;
- (unsigned long long)remainingBytes;
- (_Bool)hasBytesAvailable;
- (void)errorIfAllBytesNotConsumed:(id *)arg1;
- (id)readSubBox:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)peekNextSubBoxHeader:(unsigned int *)arg1 boxType:(unsigned int *)arg2 error:(id *)arg3;
- (unsigned int)readBoxType:(unsigned int)arg1 error:(id *)arg2;
- (unsigned int)readBoxSize:(id *)arg1;
- (unsigned int)readBoxSize:(unsigned int)arg1 error:(id *)arg2;
- (unsigned long long)readModifyUInt64:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (unsigned int)readModifyUInt32:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)skipBytes:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)read:(char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (unsigned long long)readUInt64:(id *)arg1;
- (unsigned int)readUInt32:(id *)arg1;
- (unsigned short)readUInt16:(id *)arg1;
- (unsigned char)readUInt8:(id *)arg1;
- (id)initWithData:(id)arg1 errorSource:(unsigned long long)arg2;

@end
