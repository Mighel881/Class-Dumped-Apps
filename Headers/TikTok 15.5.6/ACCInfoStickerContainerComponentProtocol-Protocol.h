//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCComponentProtocol-Protocol.h"

@class AWEStickerContainerView, AWEStoryDeleteView, AWEVideoStickerEditCircleView, NSMutableArray, NSString;

@protocol ACCInfoStickerContainerComponentProtocol <ACCComponentProtocol>
@property(nonatomic) _Bool shouldLoad;
@property(retain, nonatomic) AWEStoryDeleteView *deleteView;
@property(retain, nonatomic) AWEStickerContainerView *stickerContainerView;
- (void)pinSticker:(AWEVideoStickerEditCircleView *)arg1;
- (void)addInteractionStickerInfoToArray:(NSMutableArray *)arg1 idx:(long long)arg2;
- (_Bool)isInfoStickersInPlayer;
- (void)removeInfoSticker:(NSString *)arg1;
- (void)removeSticker:(long long)arg1;
- (void)setSticker:(long long)arg1 startTime:(double)arg2 duration:(double)arg3;
@end
