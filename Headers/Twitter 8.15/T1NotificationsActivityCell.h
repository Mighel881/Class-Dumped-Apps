//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

@class NSArray, T1DismissButton;

@interface T1NotificationsActivityCell : TFNTableViewCell
{
    // Error parsing type: , name: $__lazy_storage_$_dismissButton
    // Error parsing type: , name: mediaParameters
    // Error parsing type: , name: imagePipeline
    // Error parsing type: , name: componentRegistry
    // Error parsing type: , name: cardViewLayoutDelegate
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: $__lazy_storage_$_cardView
    // Error parsing type: , name: $__lazy_storage_$_facePileView
    // Error parsing type: , name: $__lazy_storage_$_socialTextView
    // Error parsing type: , name: $__lazy_storage_$_subTextView
    // Error parsing type: , name: $__lazy_storage_$_showMoreButton
    // Error parsing type: , name: $__lazy_storage_$_quotedStatusView
    // Error parsing type: , name: titleView
    // Error parsing type: , name: $__lazy_storage_$_luckyCharmImageView
    // Error parsing type: , name: dismissButtonTapped
    // Error parsing type: , name: showMoreButtonTapped
    // Error parsing type: , name: quotedStatusViewTapped
    // Error parsing type: , name: cardViewTapped
    // Error parsing type: , name: voiceOverCustomActions
}

- (void).cxx_destruct;
- (id)componentView:(id)arg1 didFireViewEvent:(id)arg2;
- (id)calculatedLayoutMetrics;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)showMoreButtonWasTapped;
- (void)dismissButtonWasTapped;
- (void)updateAccessibility;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic, copy) NSArray *accessibilityCustomActions;
@property(nonatomic, retain) T1DismissButton *dismissButton;

@end
