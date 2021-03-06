//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseButton.h>

@class UIColor, UIImage;

@interface HighlightableButton : BaseButton
{
    UIColor *_actionColor;
    UIImage *_templateImage;
}

@property(retain, nonatomic) UIImage *templateImage; // @synthesize templateImage=_templateImage;
@property(retain, nonatomic) UIColor *actionColor; // @synthesize actionColor=_actionColor;
- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 highlightColor:(id)arg2;

@end

