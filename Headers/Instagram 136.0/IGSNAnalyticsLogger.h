//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/SNAnalyticsLoggingListener-Protocol.h>

@class IGUserSession, NSString;

@interface IGSNAnalyticsLogger : NSObject <SNAnalyticsLoggingListener>
{
    IGUserSession *_session;
    NSString *_analyticsModule;
}

@property(readonly, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) IGUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)logPigeonEventWithName:(id)arg1 withExtraDictionary:(id)arg2;
- (id)initWithSession:(id)arg1 analyticsModule:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

