//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

@class T1ActivitySummaryView, T1TweetDetailsActionView;

@interface T1TweetDetailsActivityCell : TFNTableViewCell
{
    T1ActivitySummaryView *_activitySummaryView;
    T1TweetDetailsActionView *_actionView;
    long long _mode;
}

- (void).cxx_destruct;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void)layoutSubviews;
@property(readonly, nonatomic) T1TweetDetailsActionView *actionView;
@property(readonly, nonatomic) T1ActivitySummaryView *activitySummaryView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

