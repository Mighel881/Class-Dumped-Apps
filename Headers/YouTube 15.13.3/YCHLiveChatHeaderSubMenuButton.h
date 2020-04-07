//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTQTMButton.h>

@class NSArray, NSString, YTISortFilterSubMenuItem;
@protocol YCHLiveChatHeaderSubMenuButtonDelegate, YCHLiveChatStyleProtocol;

@interface YCHLiveChatHeaderSubMenuButton : YTQTMButton
{
    NSArray *_options;
    YTISortFilterSubMenuItem *_selectedOption;
    id <YCHLiveChatHeaderSubMenuButtonDelegate> _delegate;
    NSString *_preferredTitle;
    id <YCHLiveChatStyleProtocol> _style;
}

@property(readonly, nonatomic) __weak id <YCHLiveChatStyleProtocol> style; // @synthesize style=_style;
@property(retain, nonatomic) NSString *preferredTitle; // @synthesize preferredTitle=_preferredTitle;
@property(nonatomic) __weak id <YCHLiveChatHeaderSubMenuButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YTISortFilterSubMenuItem *selectedOption; // @synthesize selectedOption=_selectedOption;
@property(copy, nonatomic) NSArray *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (struct CGRect)hitTargetBounds;
- (void)didSelectMenuOption:(id)arg1;
- (void)didTapButton;
- (struct CGRect)accessibilityFrame;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
@property(readonly, nonatomic) long long selectedOptionIndex;
- (id)initWithFrame:(struct CGRect)arg1 style:(id)arg2;

@end
