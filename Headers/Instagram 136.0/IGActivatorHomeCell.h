//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIButton, UILabel, UIView;
@protocol IGActivatorHomeCellDelegate;

@interface IGActivatorHomeCell : UICollectionViewCell
{
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UIView *_iconView;
    UIButton *_actionButton;
    UIView *_cardView;
    id <IGActivatorHomeCellDelegate> _delegate;
}

+ (double)suggestedHeightForWidth:(double)arg1 title:(id)arg2 subtitle:(id)arg3;
@property(nonatomic) __weak id <IGActivatorHomeCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_activatorCellButtonTouchDown;
- (void)_activatorCellButtonTouchUp;
- (void)_activatorCellButtonTapped;
- (void)configureWithDataModel:(id)arg1;
- (void)layoutSubviews;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

