//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEPOIDetailCellViewController.h"

@class AWEPOIDetailStore, UIImageView, UILabel;

@interface AWEPOIDetailLiveSeeDetailViewController : AWEPOIDetailCellViewController
{
    UILabel *_labelTitle;
    UIImageView *_imageViewArrow;
    AWEPOIDetailStore *_store;
}

+ (double)modernFeedCellPreferedHeightForModel:(id)arg1 width:(double)arg2;
@property(retain, nonatomic) AWEPOIDetailStore *store; // @synthesize store=_store;
@property(retain, nonatomic) UIImageView *imageViewArrow; // @synthesize imageViewArrow=_imageViewArrow;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
- (void).cxx_destruct;
- (void)didTapDetail:(id)arg1;
- (void)updateWithModel:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)setupUI;
- (id)initWithContext:(id)arg1;

@end
