//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface IGCameraGuideView : UIView
{
    unsigned long long _subdivisionCount;
    UIView *_containerView;
    NSMutableArray *_xAxisGridLines;
    NSMutableArray *_yAxisGridLines;
}

@property(retain, nonatomic) NSMutableArray *yAxisGridLines; // @synthesize yAxisGridLines=_yAxisGridLines;
@property(retain, nonatomic) NSMutableArray *xAxisGridLines; // @synthesize xAxisGridLines=_xAxisGridLines;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) unsigned long long subdivisionCount; // @synthesize subdivisionCount=_subdivisionCount;
- (void).cxx_destruct;
- (void)_setUpGridSubviewGuides:(id)arg1;
- (void)show:(_Bool)arg1;
- (void)_setSubdivisionCount:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

