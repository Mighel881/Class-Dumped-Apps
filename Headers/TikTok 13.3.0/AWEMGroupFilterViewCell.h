//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface AWEMGroupFilterViewCell : UITableViewCell
{
    UIImageView *_iconView;
    UILabel *_titleView;
    UIImageView *_selectedView;
    UIImageView *_dotView;
}

+ (id)identifier;
@property(retain, nonatomic) UIImageView *dotView; // @synthesize dotView=_dotView;
@property(retain, nonatomic) UIImageView *selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)configureCellWithModel:(id)arg1 isSelected:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
