//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UILabel, UIStackView;

@interface AWEMissionPrizeView : UIView
{
    NSMutableArray *_labels;
    UILabel *_titleLabel;
    UIStackView *_stackView;
    double _preferredMaxLayoutWidth;
}

@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSMutableArray *labels; // @synthesize labels=_labels;
- (void).cxx_destruct;
- (id)prizeIconColorForLevel:(unsigned long long)arg1;
- (void)updateWithPrizeDescriptions:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

