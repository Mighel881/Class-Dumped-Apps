//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol DBTransportClient;

@interface DBRANKACTIVITIESUserAuthRoutes : NSObject
{
    id <DBTransportClient> _client;
}

@property(readonly, nonatomic) id <DBTransportClient> client; // @synthesize client=_client;
- (void).cxx_destruct;
- (id)getRankedActivities:(id)arg1 numItems:(id)arg2 acceptedTypes:(id)arg3 nsIds:(id)arg4 queryFileIds:(id)arg5 actorAccountIds:(id)arg6 requiredPermission:(id)arg7 deduping:(id)arg8 includeActorInfo:(id)arg9 includeFileMetadata:(id)arg10 enableAssistantServiceDiffer:(id)arg11 fromAssistant:(id)arg12;
- (id)getRankedActivities:(id)arg1 numItems:(id)arg2;
- (id)init:(id)arg1;

@end
