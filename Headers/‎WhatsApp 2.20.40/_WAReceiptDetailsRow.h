//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UILabel;

@interface _WAReceiptDetailsRow : UIView
{
    UILabel *_statusLabel;
    UILabel *_dateLabel;
    UILabel *_timeLabel;
    NSLayoutConstraint *_timeLabelMinimumWidthConstraint;
}

@property(readonly, nonatomic) NSLayoutConstraint *timeLabelMinimumWidthConstraint; // @synthesize timeLabelMinimumWidthConstraint=_timeLabelMinimumWidthConstraint;
@property(readonly, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(readonly, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(readonly, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
- (void).cxx_destruct;
- (void)installLayoutConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

