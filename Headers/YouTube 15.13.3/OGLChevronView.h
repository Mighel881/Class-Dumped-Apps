//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface OGLChevronView : UIView
{
    _Bool _selected;
    UIView *_circleView;
    UIImageView *_imageView;
}

+ (Class)layerClass;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *circleView; // @synthesize circleView=_circleView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)selected;
- (void)layoutSubviews;
- (void)applyTheme;
@property(nonatomic) _Bool circledStyle;

@end
