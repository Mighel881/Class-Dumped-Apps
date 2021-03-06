//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTPageStyling-Protocol.h"

@class FLXLayout, NSString, UIView, YT16by9View, YTIGhostCardRenderer, YTTimedAction;
@protocol YTResponder;

@interface YTGhostCardCell : YTCollectionViewCell <YTPageStyling, YTCollectionViewCellProtocol>
{
    YTIGhostCardRenderer *_entry;
    YTTimedAction *_delayShimmerTimer;
    _Bool _isShimmering;
    id <YTResponder> _parentResponder;
    YT16by9View *_thumbnailView;
    UIView *_channelThumbnailView;
    UIView *_titleLine;
    UIView *_subtitleLine;
    UIView *_metadataLine;
    FLXLayout *_layout;
}

+ (void)pulsateAlphaOfViews:(id)arg1 withDelay:(double)arg2 fadeOutDuration:(double)arg3 fadeInDuration:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
@property(retain, nonatomic) FLXLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UIView *metadataLine; // @synthesize metadataLine=_metadataLine;
@property(retain, nonatomic) UIView *subtitleLine; // @synthesize subtitleLine=_subtitleLine;
@property(retain, nonatomic) UIView *titleLine; // @synthesize titleLine=_titleLine;
@property(retain, nonatomic) UIView *channelThumbnailView; // @synthesize channelThumbnailView=_channelThumbnailView;
@property(retain, nonatomic) YT16by9View *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (void)doShimmerWithDelay:(double)arg1;
- (void)doShimmer;
- (void)stopShimmer;
- (void)startShimmerWithDelay:(double)arg1;
- (void)makeChannelThumbnailViewCircular;
- (double)dynamicVideoCardWidth;
- (double)bigThumbVideoCardWidth;
- (_Bool)rendererTypeIsVideoCardRenderer;
- (_Bool)rendererTypeIsCompactVideoRenderer;
- (id)layoutVariant;
- (_Bool)metadataLineShouldHide;
- (_Bool)channelThumbnailShouldHide;
- (void)resetLayout;
@property(readonly, nonatomic) UIView *root;
- (void)prepareForReuse;
- (id)entry;
- (void)setEntry:(id)arg1;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

