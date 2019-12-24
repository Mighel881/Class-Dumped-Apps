//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveMessageTransport-Protocol.h"

@class NSArray, NSString;
@protocol IESLiveMessageReciever;

@interface HTSLiveMessageCompoundTransport : NSObject <IESLiveMessageTransport>
{
    id <IESLiveMessageReciever> messageReciever;
    NSArray *_transport;
}

@property(retain, nonatomic) NSArray *transport; // @synthesize transport=_transport;
@property(nonatomic) __weak id <IESLiveMessageReciever> messageReciever; // @synthesize messageReciever;
- (void).cxx_destruct;
- (void)disconnect;
- (void)connect;
- (void)addTransport:(id)arg1;
- (id)initWithTransPorts:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
