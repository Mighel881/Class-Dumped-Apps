//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEVideoStickerEditCircleView, IESInfoStickerProps;

@protocol AWESimplifiedStickerContainerViewDelegate <NSObject>

@optional
- (void)cancelPinSticker:(long long)arg1;
- (void)handleStickerFinished;
- (void)handleStickerStarted;
- (void)selectTimeForStickerView:(AWEVideoStickerEditCircleView *)arg1;
- (_Bool)activeSticker:(long long)arg1;
- (void)removeSticker:(long long)arg1;
- (void)getSticker:(long long)arg1 props:(IESInfoStickerProps *)arg2;
- (void)setSticker:(long long)arg1 alpha:(double)arg2;
- (void)setSticker:(long long)arg1 startTime:(double)arg2 duration:(double)arg3;
- (void)setSticker:(long long)arg1 offsetX:(double)arg2 offsetY:(double)arg3 angle:(double)arg4 scale:(double)arg5;
@end
