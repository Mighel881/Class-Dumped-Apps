//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaIoFileOutputStream.h"

@class IOSByteArray, JavaNetAbstractPlainSocketImpl, JavaNetSocket;

@interface JavaNetSocketOutputStream : JavaIoFileOutputStream
{
    JavaNetAbstractPlainSocketImpl *impl_;
    IOSByteArray *temp_;
    JavaNetSocket *socket_;
    _Bool closing_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)java_finalize;
- (void)close;
- (void)writeWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)writeWithByteArray:(id)arg1;
- (void)writeWithInt:(int)arg1;
- (void)socketWriteWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)socketWrite0WithJavaIoFileDescriptor:(id)arg1 withByteArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (id)getChannel;
- (id)initPackagePrivateWithJavaNetAbstractPlainSocketImpl:(id)arg1;

@end

