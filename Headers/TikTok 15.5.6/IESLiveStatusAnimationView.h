//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class LOTAnimationView, UILabel;

@interface IESLiveStatusAnimationView : UIView
{
    UILabel *_textLabel;
    LOTAnimationView *_lineView;
    struct UIEdgeInsets _contentEdgeInsets;
}

@property(retain, nonatomic) LOTAnimationView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
- (void).cxx_destruct;
- (void)isThisLive:(_Bool)arg1;
- (_Bool)isAnimating;
- (void)pause;
- (void)resume;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
