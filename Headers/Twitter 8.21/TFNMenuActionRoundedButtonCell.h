//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

@class UIColor, UILabel;

@interface TFNMenuActionRoundedButtonCell : TFNTableViewCell
{
    UIColor *_buttonBackgroundColor;
    UIColor *_buttonHighlightColor;
    UILabel *_buttonLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *buttonLabel; // @synthesize buttonLabel=_buttonLabel;
@property(retain, nonatomic) UIColor *buttonHighlightColor; // @synthesize buttonHighlightColor=_buttonHighlightColor;
@property(retain, nonatomic) UIColor *buttonBackgroundColor; // @synthesize buttonBackgroundColor=_buttonBackgroundColor;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

