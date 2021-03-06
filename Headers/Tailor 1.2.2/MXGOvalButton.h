//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CAShapeLayer, NSArray, NSString, UIButton, UILabel;

@interface MXGOvalButton : UIControl
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    CAShapeLayer *_borderLayer;
    UIButton *_button;
    NSArray *_centeredTitleConstraints;
    NSArray *_centeredGroupConstraints;
}

@property(retain, nonatomic) NSArray *centeredGroupConstraints; // @synthesize centeredGroupConstraints=_centeredGroupConstraints;
@property(retain, nonatomic) NSArray *centeredTitleConstraints; // @synthesize centeredTitleConstraints=_centeredTitleConstraints;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) CAShapeLayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)touchUp:(id)arg1;
- (void)touchDown:(id)arg1;
- (void)updateLayoutForSubtitleChange;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (struct CGSize)intrinsicContentSize;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)configureBorder;
- (void)configure;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
- (void)dealloc;
- (void)prepareForInterfaceBuilder;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

