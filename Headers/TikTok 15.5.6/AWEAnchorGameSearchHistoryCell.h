//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSIndexPath, UIButton, UIImageView, UILabel;

@interface AWEAnchorGameSearchHistoryCell : UITableViewCell
{
    NSIndexPath *_indexPath;
    CDUnknownBlockType _deleteBlock;
    UIButton *_deleteButton;
    UIImageView *_clockImageView;
    UILabel *_contentLabel;
}

+ (id)cellIdentifier;
+ (double)cellHeight;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *clockImageView; // @synthesize clockImageView=_clockImageView;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(copy, nonatomic) CDUnknownBlockType deleteBlock; // @synthesize deleteBlock=_deleteBlock;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)deleteButtonTapped;
- (void)configureWithHistoryWord:(id)arg1;
- (void)configureUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
