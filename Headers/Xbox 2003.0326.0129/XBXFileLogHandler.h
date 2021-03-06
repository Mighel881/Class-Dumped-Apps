//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XBXILogHandler-Protocol.h"

@class NSDateFormatter, NSString, XBXFolderManager;
@protocol OS_dispatch_queue;

@interface XBXFileLogHandler : NSObject <XBXILogHandler>
{
    NSDateFormatter *_dateFormatter;
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        CDUnknownFunctionPointerType _field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *logFP;
    NSObject<OS_dispatch_queue> *logHandlerQueue;
    XBXFolderManager *logFolderManager;
    NSString *logName;
}

+ (id)getXBXFileLogPath;
@property(retain, nonatomic) NSString *logName; // @synthesize logName;
@property(retain, nonatomic) XBXFolderManager *logFolderManager; // @synthesize logFolderManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *logHandlerQueue; // @synthesize logHandlerQueue;
- (void).cxx_destruct;
- (id)pathInDocumentDirectory:(id)arg1;
- (void)logMessage:(id)arg1;
- (void)dealloc;
- (void)stop;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

