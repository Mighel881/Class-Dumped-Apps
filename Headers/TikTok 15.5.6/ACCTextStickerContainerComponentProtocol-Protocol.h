//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCComponentProtocol-Protocol.h"

@class AWEEditAndPublishViewData, AWEStoryTextContainerView, NSMutableArray, UIImage;

@protocol ACCTextStickerContainerComponentProtocol <ACCComponentProtocol>
@property(nonatomic) _Bool shouldLoad;
@property(retain, nonatomic) UIImage *interactionStickerImg;
@property(retain, nonatomic) AWEStoryTextContainerView *textContainerView;
- (void)updateWikipediaAnchorModelsForPublish;
- (AWEStoryTextContainerView *)smallTextContainerForEidtFunctionVC;
- (void)addInteractionStickerInfoToArray:(NSMutableArray *)arg1 idx:(long long)arg2;
- (_Bool)isTextAndPoiStickersInPlayer;
- (void)savePOIStickerImage;
- (AWEEditAndPublishViewData *)textEditAndPublishViewData;
@end
