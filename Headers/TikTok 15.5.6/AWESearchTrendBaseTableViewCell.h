//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSIndexPath, UIImageView, UILabel;

@interface AWESearchTrendBaseTableViewCell : UITableViewCell
{
    UILabel *_indexLabel;
    UIImageView *_indexImageView;
    NSIndexPath *_indexPath;
    UIImageView *_statusImageView;
}

@property(retain, nonatomic) UIImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) UIImageView *indexImageView; // @synthesize indexImageView=_indexImageView;
@property(retain, nonatomic) UILabel *indexLabel; // @synthesize indexLabel=_indexLabel;
- (void).cxx_destruct;
- (void)configreIndexPath:(id)arg1 type:(unsigned long long)arg2;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
