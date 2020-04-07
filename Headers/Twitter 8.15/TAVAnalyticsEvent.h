//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterAVCore/TAVAnalyticsEventProtocol-Protocol.h>

@class NSString, TAVAnalyticsSessionState;
@protocol TAVPlaylistItemKey;

@interface TAVAnalyticsEvent : NSObject <TAVAnalyticsEventProtocol>
{
    id <TAVPlaylistItemKey> _playlistItemKey;
    TAVAnalyticsSessionState *_analyticsSessionState;
}

+ (id)private_valueKeys;
@property(readonly, copy, nonatomic) TAVAnalyticsSessionState *analyticsSessionState; // @synthesize analyticsSessionState=_analyticsSessionState;
@property(readonly, copy, nonatomic) id <TAVPlaylistItemKey> playlistItemKey; // @synthesize playlistItemKey=_playlistItemKey;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)private_dictionary;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAnalyticsSessionState:(id)arg1;
- (id)initWithPlaylistItemKey:(id)arg1 analyticsSessionState:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
