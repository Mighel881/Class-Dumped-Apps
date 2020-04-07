//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AWELiveEpidCellModel, UIImageView, UILabel, UIView;

@interface AWELiveEpidCardTableViewCell : UITableViewCell
{
    AWELiveEpidCellModel *_cardModel;
    UIView *_borderView;
    UILabel *_liveTitle;
    UIImageView *_coverView;
    UIView *_liveMaskView;
}

+ (id)cellIdentifier;
@property(retain, nonatomic) UIView *liveMaskView; // @synthesize liveMaskView=_liveMaskView;
@property(retain, nonatomic) UIImageView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UILabel *liveTitle; // @synthesize liveTitle=_liveTitle;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) AWELiveEpidCellModel *cardModel; // @synthesize cardModel=_cardModel;
- (void).cxx_destruct;
- (void)showDidSelectedBord:(_Bool)arg1;
- (void)configWithModel:(id)arg1;
- (void)_setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
