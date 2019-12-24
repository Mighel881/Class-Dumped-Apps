//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;
@protocol IESLiveHTTPClient, IESLiveMonitor, IESLiveSettings;

@interface HTSLiveFeedDataApi : NSObject
{
    _Bool _hasMore;
    NSDictionary *_refreshParams;
    NSDictionary *_loadmoreParams;
    double _refreshStartTime;
    double _loadmoreStartTime;
    NSNumber *_token;
    NSString *_url;
    id <IESLiveMonitor> _monitor;
    id <IESLiveHTTPClient> _client;
    id <IESLiveSettings> _settings;
}

@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveHTTPClient> client; // @synthesize client=_client;
@property(retain, nonatomic) id <IESLiveMonitor> monitor; // @synthesize monitor=_monitor;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSNumber *token; // @synthesize token=_token;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(readonly, nonatomic) double loadmoreStartTime; // @synthesize loadmoreStartTime=_loadmoreStartTime;
@property(readonly, nonatomic) double refreshStartTime; // @synthesize refreshStartTime=_refreshStartTime;
@property(readonly, nonatomic) NSDictionary *loadmoreParams; // @synthesize loadmoreParams=_loadmoreParams;
@property(readonly, nonatomic) NSDictionary *refreshParams; // @synthesize refreshParams=_refreshParams;
- (void).cxx_destruct;
- (void)fetch:(id)arg1 method:(unsigned long long)arg2 finished:(CDUnknownBlockType)arg3;
- (id)initWithURL:(id)arg1;

@end
