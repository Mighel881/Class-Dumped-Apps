//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGMediaItemCell.h"

@class UILabel, XBXMediaAsyncImageView;

@interface SGExtrasItem : SGMediaItemCell
{
    UILabel *_titleLabel;
    UILabel *_iconLabel;
    XBXMediaAsyncImageView *_asyncImageView;
}

@property(retain, nonatomic) XBXMediaAsyncImageView *asyncImageView; // @synthesize asyncImageView=_asyncImageView;
@property(retain, nonatomic) UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)getDataContext;
- (void)onDataContextImageUrlChanged;
- (void)onDataContextTitleStringChanged;
- (void)onDataContextIconStyleChanged;
- (void)tearDownObservers;
- (void)setupObservers;

@end

