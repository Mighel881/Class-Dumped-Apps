//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAReplicatorLayer, UILabel;

@interface YTMReplicatedLabel : UIView
{
    CAReplicatorLayer *_replicatorLayer;
    UILabel *_label;
}

+ (Class)layerClass;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
@property(nonatomic) long long instanceCount;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

