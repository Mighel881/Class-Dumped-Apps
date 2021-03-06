//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface AWEAtlasTagCell : UITableViewCell
{
    UILabel *_titleLabel;
    unsigned long long _type;
    UIImageView *_checkMarkView;
    UIView *_seperateView;
    UILabel *_tipLabel;
}

@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIView *seperateView; // @synthesize seperateView=_seperateView;
@property(retain, nonatomic) UIImageView *checkMarkView; // @synthesize checkMarkView=_checkMarkView;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)hideSeperateView;
- (void)setTipContent:(id)arg1;
- (void)setTitleContent:(id)arg1 type:(unsigned long long)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)addSubviewsForContentView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

