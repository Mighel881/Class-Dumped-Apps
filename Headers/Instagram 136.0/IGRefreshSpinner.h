//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CABasicAnimation, CALayer, CAReplicatorLayer, UIColor;

@interface IGRefreshSpinner : UIView
{
    CAReplicatorLayer *r;
    CALayer *dot;
    CABasicAnimation *animation;
}

- (void).cxx_destruct;
- (void)_setInstanceCount:(unsigned long long)arg1;
- (void)setProgress:(double)arg1;
- (void)shrink;
- (void)spinWithVelocity:(double)arg1;
@property(retain, nonatomic) UIColor *color;
- (void)reset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithSegmentColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

