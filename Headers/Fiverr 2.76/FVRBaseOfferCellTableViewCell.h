//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel, UIView;
@protocol FVRBaseOfferCellDelegate;

@interface FVRBaseOfferCellTableViewCell : UITableViewCell
{
    UIImageView *_bgImageView;
    UIView *_topSeparatorView;
    UILabel *_sellerNameLabel;
    UIImageView *_levelImageView;
    UIImageView *_sellerImageView;
    UIView *_onlineView;
    UILabel *_durationLabel;
    UIImageView *_clockImageView;
    UIButton *_contactButton;
    UIButton *_orderButton;
    id <FVRBaseOfferCellDelegate> _delegate;
}

@property(nonatomic) __weak id <FVRBaseOfferCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)orderButtonClicked:(id)arg1;
- (void)contactButtonClicked:(id)arg1;
- (void)sellerButtonClicked:(id)arg1;
- (void)setupSellerLevel:(int)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

