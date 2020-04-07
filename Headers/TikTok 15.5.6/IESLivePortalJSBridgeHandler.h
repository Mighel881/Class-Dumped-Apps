//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveJSBridgeHandlerProtocol-Protocol.h"

@class NSString;
@protocol IESLiveJSBridgeProtocol, IESLivePortalActions;

@interface IESLivePortalJSBridgeHandler : NSObject <IESLiveJSBridgeHandlerProtocol>
{
    id <IESLiveJSBridgeProtocol> _bridge;
    id <IESLivePortalActions> _actionCreator;
}

@property(retain, nonatomic) id <IESLivePortalActions> actionCreator; // @synthesize actionCreator=_actionCreator;
@property(nonatomic) __weak id <IESLiveJSBridgeProtocol> bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)registerPortalHandler;
- (void)registerHandlerWithBridge:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
