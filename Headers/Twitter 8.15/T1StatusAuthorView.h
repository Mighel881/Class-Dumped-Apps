//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNLayoutableView.h>

#import <T1Twitter/TFNPreviewable-Protocol.h>

@class NSArray, NSString, T1AffiliateBadgeView, T1DismissButton, TFNTappableHighlightView, TFNTwitterAccount, UIImageView, UILabel, UILongPressGestureRecognizer;
@protocol T1StatusAuthorViewDelegate, T1StatusViewModel;

@interface T1StatusAuthorView : TFNLayoutableView <TFNPreviewable>
{
    id _previewingTarget;
    SEL _previewingAction;
    id <T1StatusViewModel> _viewModel;
    unsigned long long _options;
    TFNTwitterAccount *_account;
    id <T1StatusAuthorViewDelegate> _delegate;
    T1AffiliateBadgeView *_designatorBadge;
    T1DismissButton *_caretButton;
    TFNTappableHighlightView *_highlightView;
    unsigned long long _displayType;
    UILabel *_fullNameLabel;
    UILabel *_usernameLabel;
    UILabel *_timeLabel;
    UILabel *_timeSeparatorLabel;
    UIImageView *_badgeView;
    UIImageView *_authorBadgeView;
    TFNTappableHighlightView *_timestampHighlightView;
    UILongPressGestureRecognizer *_longPressRecognizer;
    NSArray *_accessibleViews;
}

@property(copy, nonatomic) NSArray *accessibleViews; // @synthesize accessibleViews=_accessibleViews;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(retain, nonatomic) TFNTappableHighlightView *timestampHighlightView; // @synthesize timestampHighlightView=_timestampHighlightView;
@property(retain, nonatomic) UIImageView *authorBadgeView; // @synthesize authorBadgeView=_authorBadgeView;
@property(retain, nonatomic) UIImageView *badgeView; // @synthesize badgeView=_badgeView;
@property(readonly, nonatomic) UILabel *timeSeparatorLabel; // @synthesize timeSeparatorLabel=_timeSeparatorLabel;
@property(readonly, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(readonly, nonatomic) UILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(readonly, nonatomic) UILabel *fullNameLabel; // @synthesize fullNameLabel=_fullNameLabel;
@property(readonly, nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) TFNTappableHighlightView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) T1DismissButton *caretButton; // @synthesize caretButton=_caretButton;
@property(retain, nonatomic) T1AffiliateBadgeView *designatorBadge; // @synthesize designatorBadge=_designatorBadge;
@property(nonatomic) __weak id <T1StatusAuthorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) id <T1StatusViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_t1_didLongPressAuthorView:(id)arg1;
- (void)_t1_didTapAuthorHighlightView;
- (void)_didTapDesignatorBadge;
- (void)_didTapTimestampHighlightView;
- (void)_didTapCaret;
- (void)_updateAccessibleViews;
- (void)_addLongPressGestureRecognizer;
- (void)_addHighlightView;
- (id)previewConfigurationForLocation:(struct CGPoint)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (id)accessibilityElements;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (void)setPreviewingTarget:(id)arg1 action:(SEL)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateTimestamp;
- (void)_updateContent;
- (void)userDidUpdate;
- (void)statusDidUpdate;
- (void)setViewModel:(id)arg1 options:(unsigned long long)arg2 displayType:(unsigned long long)arg3 account:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
