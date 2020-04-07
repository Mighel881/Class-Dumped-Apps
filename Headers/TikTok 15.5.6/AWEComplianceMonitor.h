//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEComplianceMonitor-Protocol.h"
#import "AWEUserMessage-Protocol.h"
#import "HTSAccountMessage-Protocol.h"

@class NSMutableDictionary, NSString;

@interface AWEComplianceMonitor : NSObject <AWEUserMessage, HTSAccountMessage, AWEComplianceMonitor>
{
    NSMutableDictionary *_eventDictionary;
    NSMutableDictionary *_vcDictionary;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *vcDictionary; // @synthesize vcDictionary=_vcDictionary;
@property(retain, nonatomic) NSMutableDictionary *eventDictionary; // @synthesize eventDictionary=_eventDictionary;
- (void).cxx_destruct;
- (id)collectWindowLevelMessage;
- (void)clearRegisterViewControllerEvent:(id)arg1;
- (void)registerViewControllerEventDealloc:(id)arg1;
- (void)registerViewControllerEventClick:(id)arg1;
- (void)registerViewControllerEventAppear:(id)arg1;
- (void)registerViewControllerEventInit:(id)arg1;
- (void)didFinishLogin:(_Bool)arg1 platform:(unsigned long long)arg2 error:(id)arg3;
- (void)didFinishLogout;
- (void)clearEventForKey:(id)arg1;
- (void)registerEventForKey:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
