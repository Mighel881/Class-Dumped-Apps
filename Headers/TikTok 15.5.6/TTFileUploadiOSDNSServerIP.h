//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TTFileUploadiOSTimerEvent-Protocol.h"

@class NSString, TTFileUploadiOSDNSLocalParser;

@interface TTFileUploadiOSDNSServerIP : NSObject <TTFileUploadiOSTimerEvent>
{
    _Bool _parsing;
    double _serverTime;
    NSString *_serverIP;
    TTFileUploadiOSDNSLocalParser *_parser;
}

+ (id)getServerIP;
+ (void)updateDNSServerIP;
+ (id)shareInstance;
@property(retain, nonatomic) TTFileUploadiOSDNSLocalParser *parser; // @synthesize parser=_parser;
@property(copy, nonatomic) NSString *serverIP; // @synthesize serverIP=_serverIP;
@property(nonatomic) double serverTime; // @synthesize serverTime=_serverTime;
@property(nonatomic, getter=isParsing) _Bool parsing; // @synthesize parsing=_parsing;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long eventTimeInterval;
@property(readonly, nonatomic) SEL eventSEL;
@property(readonly, nonatomic) __weak id eventTarget;
- (id)_getServerIP;
- (void)_updateDNSServerIP;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
