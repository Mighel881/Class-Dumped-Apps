//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UICollectionView;

@interface AWEStickerPickerCategoryTabView : UIView
{
    UIButton *_clearStickerApplyBtton;
    UIView *_sepratorLineView;
    UICollectionView *_panelStickerView;
    UIView *_indicatorLine;
}

@property(retain, nonatomic) UIView *indicatorLine; // @synthesize indicatorLine=_indicatorLine;
@property(retain, nonatomic) UICollectionView *panelStickerView; // @synthesize panelStickerView=_panelStickerView;
@property(retain, nonatomic) UIView *sepratorLineView; // @synthesize sepratorLineView=_sepratorLineView;
@property(retain, nonatomic) UIButton *clearStickerApplyBtton; // @synthesize clearStickerApplyBtton=_clearStickerApplyBtton;
- (void).cxx_destruct;
- (void)addSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
