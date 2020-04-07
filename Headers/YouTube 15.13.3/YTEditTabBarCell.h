//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UILabel;
@protocol YTEditComponentStyle;

@interface YTEditTabBarCell : UICollectionViewCell
{
    UILabel *_label;
    NSString *_title;
    id <YTEditComponentStyle> _style;
}

@property(retain, nonatomic) id <YTEditComponentStyle> style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)layoutSubviews;
- (id)impactView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
