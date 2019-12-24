//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JETButtonFooter, UIImageView, UILabel;
@protocol JETFamilyHubScheduleSummaryDelegate;

@interface JETFamilyHubScheduleSummaryView : UIView
{
    UILabel *_headerLabel;
    UILabel *_summaryLabel;
    UIImageView *_backdropImageView;
    JETButtonFooter *_footer;
    id <JETFamilyHubScheduleSummaryDelegate> _delegate;
}

@property(nonatomic) __weak id <JETFamilyHubScheduleSummaryDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak JETButtonFooter *footer; // @synthesize footer=_footer;
@property(nonatomic) __weak UIImageView *backdropImageView; // @synthesize backdropImageView=_backdropImageView;
@property(nonatomic) __weak UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(nonatomic) __weak UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
- (void).cxx_destruct;
- (void)doneButtonTapped;
- (void)layoutSubviews;
- (void)styleFooter;
- (void)styleBackdropImageView;
- (void)styleSummaryLabel;
- (void)styleHeaderLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@end
