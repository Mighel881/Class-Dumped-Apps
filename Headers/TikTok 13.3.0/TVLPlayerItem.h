//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TVLPlayer, TVLPlayerItemAccessLog, TVLPlayerItemInternal, TVLPlayerItemPreferences;

@interface TVLPlayerItem : NSObject
{
    TVLPlayer *_player;
    TVLPlayerItemInternal *_item;
    TVLPlayerItemAccessLog *_accessLog;
    struct CGSize _presentationSize;
}

+ (id)playerItemWithStreamData:(id)arg1;
+ (id)playerItemWithPlaylist:(id)arg1 optionsList:(id)arg2;
+ (id)playerItemWithInfoData:(id)arg1;
+ (id)playerItemWithURL:(id)arg1;
+ (id)playerItemWithAppID:(id)arg1 streamID:(id)arg2;
@property(nonatomic) struct CGSize presentationSize; // @synthesize presentationSize=_presentationSize;
- (void).cxx_destruct;
- (void)handleVideoSizeChangedNotification:(id)arg1;
- (id)highestPriorityPreferencesLowerThanPreferences:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *supportedResolutionTypes;
@property(readonly, copy, nonatomic) NSArray *supportedPreferences;
@property(retain, nonatomic) TVLPlayerItemPreferences *preferences;
- (id)accessLog;
- (void)setInternal:(id)arg1;
- (id)internal;
- (void)setPlayer:(id)arg1;
- (id)player;
- (void)tvl_cancel;
- (void)tvl_requestItemInfoWithCompletion:(CDUnknownBlockType)arg1;
- (id)URLWithPreferences:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithInfoData:(id)arg1;
- (id)initWithItemInternal:(id)arg1;
- (id)init;
- (id)initWithRequestURL:(id)arg1 infoClass:(Class)arg2;
- (void)setStreamID:(id)arg1;
- (id)streamID;
- (void)requestItemInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancel;

@end
