//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIButton, UIImageView, UILabel;

@interface AWEASMusicHistorySuggestionTableViewCell : UITableViewCell
{
    CDUnknownBlockType _deleteBtnClickCallback;
    NSString *_query;
    UIImageView *_iconView;
    UILabel *_displayLabel;
    UIButton *_deleteButton;
}

+ (id)identifier;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UILabel *displayLabel; // @synthesize displayLabel=_displayLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) CDUnknownBlockType deleteBtnClickCallback; // @synthesize deleteBtnClickCallback=_deleteBtnClickCallback;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)handleDeleteButtonClick:(id)arg1;
- (void)configWithQuery:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
