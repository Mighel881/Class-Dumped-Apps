//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IWKPluginNavigationDelegate-Protocol.h"
#import "IWKPluginObject-Protocol.h"
#import "IWKPluginUIDelegate-Protocol.h"
#import "IWKPluginWebViewBuilder-Protocol.h"
#import "IWKPluginWebViewLoader-Protocol.h"

@class NSString;

@interface IWKPluginObject : NSObject <IWKPluginObject, IWKPluginWebViewBuilder, IWKPluginWebViewLoader, IWKPluginNavigationDelegate, IWKPluginUIDelegate>
{
    _Bool _enable;
    long long _priority;
    NSString *_uniqueID;
}

@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
