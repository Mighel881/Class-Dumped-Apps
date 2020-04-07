//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFBaseView.h>

@class UILabel, UIView;

@interface PSPDFCommentReviewCountView : PSPDFBaseView
{
    UIView *_selectedView;
    UIView *_acceptedView;
    UIView *_acceptedContainerView;
    UILabel *_acceptedCountLabel;
    UIView *_completedView;
    UIView *_completedContainerView;
    UILabel *_completedCountLabel;
    UIView *_cancelledView;
    UIView *_cancelledContainerView;
    UILabel *_cancelledCountLabel;
    UIView *_rejectedView;
    UIView *_rejectedContainerView;
    UILabel *_rejectedCountLabel;
}

@property(readonly, nonatomic) UILabel *rejectedCountLabel; // @synthesize rejectedCountLabel=_rejectedCountLabel;
@property(readonly, nonatomic) UIView *rejectedContainerView; // @synthesize rejectedContainerView=_rejectedContainerView;
@property(readonly, nonatomic) UIView *rejectedView; // @synthesize rejectedView=_rejectedView;
@property(readonly, nonatomic) UILabel *cancelledCountLabel; // @synthesize cancelledCountLabel=_cancelledCountLabel;
@property(readonly, nonatomic) UIView *cancelledContainerView; // @synthesize cancelledContainerView=_cancelledContainerView;
@property(readonly, nonatomic) UIView *cancelledView; // @synthesize cancelledView=_cancelledView;
@property(readonly, nonatomic) UILabel *completedCountLabel; // @synthesize completedCountLabel=_completedCountLabel;
@property(readonly, nonatomic) UIView *completedContainerView; // @synthesize completedContainerView=_completedContainerView;
@property(readonly, nonatomic) UIView *completedView; // @synthesize completedView=_completedView;
@property(readonly, nonatomic) UILabel *acceptedCountLabel; // @synthesize acceptedCountLabel=_acceptedCountLabel;
@property(readonly, nonatomic) UIView *acceptedContainerView; // @synthesize acceptedContainerView=_acceptedContainerView;
@property(readonly, nonatomic) UIView *acceptedView; // @synthesize acceptedView=_acceptedView;
@property(readonly, nonatomic) UIView *selectedView; // @synthesize selectedView=_selectedView;
- (void).cxx_destruct;
- (void)setStateHightlighted:(unsigned long long)arg1;
- (void)setReviewSummary:(id)arg1 withNumberFormatter:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)contentSizeDidChange;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end
