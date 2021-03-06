//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel;

@interface AWEContentLanguageSelectionPopupCollectionViewCell : UICollectionViewCell
{
    _Bool _isSelected;
    UILabel *_localizedDisplayNameLabel;
    UILabel *_displayNameLabel;
    UIImageView *_imageView;
    UIImageView *_selectionImageView;
}

+ (id)cellIdentifier;
@property(readonly, nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) UIImageView *selectionImageView; // @synthesize selectionImageView=_selectionImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) UILabel *localizedDisplayNameLabel; // @synthesize localizedDisplayNameLabel=_localizedDisplayNameLabel;
- (void).cxx_destruct;
- (void)setUpSubviews;
- (void)setIsSelected:(_Bool)arg1 selectedColor:(id)arg2 animated:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

