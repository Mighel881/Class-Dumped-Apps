//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWETaskBonusProgressView, UILabel, UIStackView;

@interface AWETaskBonusInfoView : UIView
{
    UILabel *_titleLabel;
    UILabel *_progressLabel;
    AWETaskBonusProgressView *_progressView;
    UIStackView *_progressStackView;
    double _preferredMaxLayoutWidth;
}

@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
@property(retain, nonatomic) UIStackView *progressStackView; // @synthesize progressStackView=_progressStackView;
@property(retain, nonatomic) AWETaskBonusProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)gradientTextImageWithAttributedText:(id)arg1;
- (id)makeGradientTextWithAttributedText:(id)arg1 baselineOffset:(double)arg2;
- (id)titleAttributedStringWithTask:(id)arg1;
- (void)updateWithTask:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
