//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/TGModernButton.h>

@class NSString, UILabel;

@interface TGModernToolbarButton : TGModernButton
{
    UILabel *_buttonTitleLabel;
    NSString *_buttonTitle;
}

@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) UILabel *buttonTitleLabel; // @synthesize buttonTitleLabel=_buttonTitleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect)arg1;

@end
