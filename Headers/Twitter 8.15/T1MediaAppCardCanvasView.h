//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNDesignableView.h>

#import <T1Twitter/T1ImageViewFetchHelperDelegate-Protocol.h>

@class NSString, TFNLevelIndicatorView, UILabel, UITapGestureRecognizer;
@protocol T1MediaAppCardCanvasViewDelegate, TFNCanvasEventHandler;

@interface T1MediaAppCardCanvasView : TFNDesignableView <T1ImageViewFetchHelperDelegate>
{
    id <T1MediaAppCardCanvasViewDelegate> _delegate;
    UILabel *_nameLabel;
    UILabel *_ratingsLabel;
    UILabel *_categoryLabel;
    TFNDesignableView *_iconView;
    TFNLevelIndicatorView *_ratingIndicator;
    UITapGestureRecognizer *_tapGestureRecognizer;
    id <TFNCanvasEventHandler> _eventHandler;
}

+ (id)variantIDs;
@property(nonatomic) __weak id <TFNCanvasEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) __weak TFNLevelIndicatorView *ratingIndicator; // @synthesize ratingIndicator=_ratingIndicator;
@property(nonatomic) __weak TFNDesignableView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak UILabel *categoryLabel; // @synthesize categoryLabel=_categoryLabel;
@property(nonatomic) __weak UILabel *ratingsLabel; // @synthesize ratingsLabel=_ratingsLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak id <T1MediaAppCardCanvasViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)t1_fetchHelper:(id)arg1 didUpdateImageFromSource:(long long)arg2 isFinal:(_Bool)arg3;
- (void)updateOutletsFromVariant:(id)arg1;
- (void)updateWithModel:(id)arg1;
- (void)_didTap;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (void)_setupColors;
- (id)initWithVariantID:(id)arg1 eventHandler:(id)arg2 imagePipeline:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
